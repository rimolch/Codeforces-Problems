#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    //vector<long>vec;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    //int team = n/2;
    //int max = 0;
    int sum =0;
    for(int i=0;i<n-1;i+=2)
    {
        sum+=(ar[i+1]-ar[i]);
    }
    cout<<sum<<endl;
    return 0;
}
