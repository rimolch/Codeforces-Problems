#include <bits/stdc++.h>
 
#define int long long
 
using namespace std;
 
int n,temp,ans=0,maxi=0,a1[200010],a2[200010];
 
signed main()
{
	cin >>n ;
	for(int i=0;i<n;i++)
    {
	    cin>>a1[i];
 
	    for(int j=0;j <a1[i];j++)
	    {
	       cin >> temp;
 
	       a2[i]=max(a2[i],temp);
	    }
	    maxi = max(a2[i],maxi);
	}
	for(temp=0;temp<n;temp++)
	{
	    ans+=((maxi-a2[temp])*a1[temp]);
	}
	cout<<ans<<endl;
	return 0;
}
