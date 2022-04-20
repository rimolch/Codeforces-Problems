#include <bits/stdc++.h>

using namespace std;

long long n, a[5010], ans=1e18;

int main()
{
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];// 1 2 1 2 1 2 1
    }
    for (int i=1;i<=n /*7*/; i++)
    {
        long long p=0, sum=0;
        for (int j=i-1; j>=1; j--)
        {
            p+=a[j]-p%a[j];
            sum+=p/a[j];
        }
        p=0;
        for (int k=i+1; k<=n; k++)
        {
            p+=a[k]-p%a[k];
            sum+=p/a[k];
        }
        ans=min(ans, sum);
    }
    cout << ans <<endl;
    return 0;
}
