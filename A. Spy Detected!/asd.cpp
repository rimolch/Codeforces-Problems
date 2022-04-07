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
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        bool found = false;
        for(int j=1;j<n-1;j++)
        {
           if(ar[j]!=ar[j-1]&&ar[j]!=ar[j+1])
           {
               cout<<j+1<<endl;
               found = true;
           }
        }
        if(!found)
        {
            if(ar[0]!=ar[1])
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
        }
    }
    return 0;
}
