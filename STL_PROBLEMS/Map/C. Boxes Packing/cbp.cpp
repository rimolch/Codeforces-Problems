#include<bits/stdc++.h>
#define ll long long int
const int mx=5e5+123;
int ar[mx];
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
       cin>>ar[i] ;
       freq[ar[i]]++;
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,freq[ar[i]]);
    }
    cout<<maxi<<endl;
}
