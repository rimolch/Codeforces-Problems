#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n;
    vector<int>a1(n);
    int maxi1=0,maxi2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    sort(a1.begin(),a1.end());
    maxi1 = *max_element(a1.begin(),a1.end());
    cin>>m;
    vector<int>a2(m);
    for(int i=0;i<m;i++)
    {
        cin>>a2[i];
    }
    sort(a2.begin(),a2.end());
    maxi2 = *max_element(a2.begin(),a2.end());
    cout<<maxi1<<" "<<maxi2<<endl;
    return 0;
}
