#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string s;
    getline(cin, s);

    int a[26]= {0};

    for(int i=0; i<s.size(); i++)
    {
       if(s[i]==' ')continue;
          else{
        a[s[i]-'a']++;
        }
    }
    for(int val=0; val<26; val++)
    {
        if(a[val]>0)
        {
            for(int c=0; c<a[val]; c++)
            {
                 char t=val+'a';
                 cout<<t;
            }
        }


    }
    return 0;
}
