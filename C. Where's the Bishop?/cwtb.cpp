#include <bits/stdc++.h>
#define endl "\n"
#define checkmate return 0
#define ll long long int
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       char ch[8][8];
       for(int i=0;i<8;i++)
       {
           for(int j=0;j<8;j++)
           {
               cin>>ch[i][j];
           }
       }
       int initial_pos;
       for(int i=0;i<8;i++)
       {
           for(int j=0;j<8;j++)
           {
             if(ch[i][j]=='#')
             {
                 if(ch[i-1][j+1]=='#'&&ch[i+1][j+1]=='#'&&ch[i-1][j-1]=='#'&&ch[i+1][j-1]=='#')
                 {
                     cout<<i+1<<" "<<j+1<<endl;
                     break;
                 }
             }
           }
       }
    }
    checkmate;
}
