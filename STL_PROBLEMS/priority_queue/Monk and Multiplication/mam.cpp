#include<bits/stdc++.h>
#define ll long long int,vector
const int mx=1e5+123;
int ar[mx];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        pq.push(ar[i]);
        if(pq.size()>=3){
            int a1,a2,a3;
            a1=pq.top();
            pq.pop();
             a2=pq.top();
            pq.pop();
             a3=pq.top();
            pq.pop();
            cout<<1LL*a1*a2*a3<<endl;
            //prefix unchanged  korte hobe
            pq.push(a1);
             pq.push(a2);
              pq.push(a3);
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}

