#include<bits/stdc++.h>
using namespace std;
void magic()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<string> v;
    int i=0;
    while(i<n)

    {

        string result;
        while(result.size()<2&&i<n)
        {
            result+=s[i];
          //  cout<<result<<" "<<i<<endl;
            i++;
        }
        v.push_back(result);

    }
    int vSize=v.size();
    for(int i=0; i<vSize; i++)
    {
        if(v[i]=="RG"||v[i]=="GR")
        {
            v[i]="Y";
        }
        else if(v[i]=="RB"||v[i]=="BR")
        {
            v[i]="P";
        }
        else if(v[i]=="BG"||v[i]=="GB")
        {
            v[i]="C";
        }

       // cout<<v[i]<<" ";
    }

   // cout<<endl;
    stack<string>q;

    for(int i=0; i<v.size(); i++)
    {   int el=v[i].size();
        //cout<<q.top()<<endl;
        if(el>1)continue;
        else
        {
            if(q.empty()&&i<n)
            {
                q.push(v[i]);
            }
            else if(q.top()==v[i]&&!q.empty())
            {
                q.push(v[i]);
               // cout<<q.top()<<" 1 "<<i<<endl;
                q.pop();
                //cout<<q.top()<<" 2 "<<i<<endl;
                q.pop();

            }
            else
            {

                q.push(v[i]);
            }
        }




    }
    if(q.empty())
    {
        //cout<<"empty"<<endl;
        cout<<endl;
        return;
    }
    string x;
    while(!q.empty())
    {
       // cout<<q.top()<<" ";
        x+=q.top();
        q.pop();
    }
    //cout<<endl<<x;
    reverse(x.begin(),x.end());
    cout<<x<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        magic();
    }




}
