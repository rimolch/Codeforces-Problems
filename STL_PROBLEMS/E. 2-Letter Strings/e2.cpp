#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define checkmate return 0

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>ar(n);
        map<char,ll>f1;
        map<char,ll>f2;
        map<string,ll>f;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            f1[ar[i][0]]++;
            f2[ar[i][1]]++;
            f[ar[i]]++;
        }
        ll c=0,ans=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            c=max(maxi,f1[ar[i][0]]-f[ar[i]]);
            ans+=c;
            c = max(maxi,f2[ar[i][1]]-f[ar[i]]);
            ans+=c;
            if(f1[ar[i][0]]>0)
            {
                f1[ar[i][0]]--;
            }
            if(f2[ar[i][1]]>0)
            {
                f2[ar[i][1]]--;
            }
            if(f[ar[i]]>0)
            {
                f[ar[i]]--;
            }
        }
        cout<<ans<<endl;
    }
    checkmate;
}
