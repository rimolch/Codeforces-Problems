#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
       string s;
       cin>>s;
       set<char>st;
      for(int i=0;i<n;i++){
        st.insert(s[i]);
      }
      cout<<n+st.size()<<endl;
    }
    return 0;
}
