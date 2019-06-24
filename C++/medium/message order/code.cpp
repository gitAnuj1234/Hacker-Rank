#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <string> message_order;
class Message {
public:
    string text;
    Message(string t) {text=t;}
    const string& get_text() {
        return text;
    }

};
bool operator <(const Message& m1, const Message &m2)
    {
        int i1,i2,j=0;
        auto i=message_order.begin();
        for(;i!=message_order.end();i++)
        {
            if(m1.text == *i)
            i1=j;
            else if(m2.text == *i)
            i2=j;
            j++;
        }
        if(i1<=i2) return true;
        else return false;

    }
class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        message_order.push_back(text);
        Message m(text);
        return m;

    }

};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
