#include<bits/stdc++.h>

#define ll long long int

using namespace std;

void solve()
{
    int n, m, i, j, k;
    cin >> n >> m;
    string a[n];//it acts as 2d array
    int ans = 1e5, dis, sum;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            sum = 0;
            for(k = 0; k < m; k++)
            {
                dis = abs(a[i][k] - a[j][k]);
                sum+=dis;
            }
           ans = min(ans,sum);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
