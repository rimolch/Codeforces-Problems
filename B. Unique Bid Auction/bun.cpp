// vector and map 
#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
void solve()
{
        int  n;
        cin>>n;
        vector<int>ar(n);
        map<int, int>mp;
        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            ar[i]=x;
            mp[x]++;
        }
        for(auto it: mp)
        {
            if(it.second ==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(ar[j]==it.first)
                    {
                        cout<<j+1<<endl;
                        return ;
                    }
                }
            }
        }
    cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
