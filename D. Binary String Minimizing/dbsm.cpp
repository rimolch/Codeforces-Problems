#include<bits/stdc++.h>

using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,t,i,j,k,x,y,z,l,q,r;
        cin>>n>>k;//k=5
        string s,ans;
        cin>>s;
        queue<ll>zro;
        j=0;
        fr(i,n)//11011010 //01011110
        {
          if(s[i]-'0'==0 )//2 5 7
          {
            zro.push(i);
          }
        }
        fr(i,n)//i=0 // i=1 //i=2 //i=3 //i =4//i=5//i =6 //i=7
        {
            if(zro.empty())//no //no //no //no //no //no //no //no
            { 
                ans+="1" ;
            }
            else
            {
                ll frnt =zro.front();//2 // 5 // 5 //7 //7 //7 //7 //7
                ll need=frnt- i;//2-0=2 //5-1=4 //5-2=3 //7-3=4//7-4=3//7-5=2//7-6=1//7-7=0
                if(need>k)//(2>5)false //(4>3) true //(3>3) false  //(4>0) true//(3>0)true //(2>0)true//(1>0)true//(0>0)false
                {
                   ans+="1" ;         // 1                         //1         //1        // 1        // 1
                }
                else
                {
                    k-=need;//5-2=3                //3-3=0                                                      //0-0=0
                    ans+="0";// 0                  //0                                                          //0
                    zro.pop();//2 out              //5 out                                                      //7 out
                }
            }
        }
     cout<<ans<<endl;
    }
    return 0;
}



