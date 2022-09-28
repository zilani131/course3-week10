#include<iostream>
#include<string.h>

using namespace std;

int isSubstring(string S1, string S2)
{
    int i=0,j=0;
    int M = S1.size();
     int N = S2.size();

   for(i=0; i<N-M; i++)
   {
         for(j=0; j<M; j++)
         {
            if(S1[i+j]!=S2[j])
            {
                break;
            }

         }
         if(j == M)
         {
            return i;
         }

         return -1;
   }

}


int main()
{
    int t;
    cin>>t;
    while(t>0)
    {




   string S1="010";
   string S3="101";
   string S2;
   cin>>S2;



   int result= isSubstring(S1,S2);
   int result2=isSubstring(S3,S2);
   if(result==-1 && result2==-1)
   {
    cout<<"Bad"<<endl;
   }
   else
   {
    cout<<"Good"<<endl;
   }

   t--;
    }

   return 0;

}
