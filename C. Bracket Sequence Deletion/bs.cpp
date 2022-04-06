#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
       int t;
      cin>>t;
    while(t--)
    {
        int n;              
        cin>>n;
        string s;          
        cin>>s;
        int rem=0,op = 0;
        int l;
        bool is_remove =false;
        for(int i = 0;i<n;i++)
        {
            if(is_remove)
            {
                if(s[i]==')')
                 {
                    rem+=(i-l+1);
                    is_remove=false;
                    op++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                if(s[i]==')')
                {
                    if(i<n-1 and s[i+1]==')')
                    {
                        rem+=2;
                        op++;
                        i++;
                    }
                    else if(i<n-1 and s[i+1]=='(')
                    {
                        is_remove=true;
                        l=i;
                    }
                }
                else if(s[i]=='(')
                {
                    if(i<n-1 and s[i+1]==')')
                    {
                        rem+=2;
                        op++;
                        i++;
                    }
                    else if(i<n-1 and s[i+1]=='(')
                    {
                        rem+=2;
                        op++;
                        i++;
                    }
                }
            }
        }
        cout<<op<<" "<<(n-rem)<<endl;
    }
    return 0;
}
