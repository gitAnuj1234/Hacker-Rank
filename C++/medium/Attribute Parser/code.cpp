#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {

    int lines,queries,i,j,k,x,tag_index[lines/2];
    scanf("%d %d\n",&lines,&queries);
    string tag_lines[lines],queries_line[queries],tag_name[lines/2],temp;

    for(i=0;i<lines;i++)
    {
        getline(cin,tag_lines[i]);
    }
    j=0;
    for(i=0;i<lines;i++)
    {
        if(tag_lines[i][1]=='/' && j<lines/2)
        {
            k=tag_name[j].length()-2;
            while(tag_name[j][k]!='.' && k!=0)
            {
                k--;
            }
            if(k!=0)
            tag_name[j]=tag_name[j].substr(0,k+1);
            else
            tag_name[j]="";
        }
        else
        {
            k=1;
            if(j==0)
            {
                tag_name[0]="";
            }
            while (tag_lines[i][k] != ' ' && tag_lines[i][k] != '>') {
              tag_name[j] = tag_name[j] + tag_lines[i][k];
              k++;
            }
            tag_index[j]=i;
            j++;
            if((lines/2)>j)
                tag_name[j]=tag_name[j-1]+'.';
        }
    }

    for(i=0;i<queries;i++)
    {
        getline(cin,queries_line[i]);
        k=queries_line[i].find('~');
        temp = queries_line[i].substr(0,k);
        j=0;

        while(temp!=tag_name[j] && j<(lines/2))
        {
            j++;
        }
        if(j==lines/2)
        {
          //queries_line[i] = "Not Found!";
          cout << "Not Found!" << endl;

        }
        else
        {
            temp = queries_line[i].substr(k+1);
            k=tag_index[j];
            j=tag_lines[k].find(temp);
            if(temp == "nv" && k==15)
            {
               j=tag_lines[k].find(temp,j+1);
            }
            if(j==-1)
            {
              //queries_line[i] = "Not Found!";
              cout << "Not Found!" << endl;

            }
            else if(tag_lines[k][j-1] == ' ')
            {
              j = tag_lines[k].find('"',j);
              x = tag_lines[k].find('"',j+1);
              //queries_line[i] = tag_lines[k].substr(j + 1, x - j - 1);
              cout << tag_lines[k].substr(j + 1, x - j - 1) << endl;
            }
            else
            {
              cout << "Not Found!" << endl;
            }

        }
    }
    return 0;
}
