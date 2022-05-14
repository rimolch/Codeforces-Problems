#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define checkmate return 0;
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define pb                push_back
#define ppb               pop_back
#define ins               insert
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define umap              unordered_map
#define uset              unordered_set
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define repr(i,a,b)       for(int i=a;i>=b;i--)
#define repa(x, a)        for(auto &x : a)
#define vi                vector<int>
#define vvi               vector<vector<int>>
#define vbool             vector<bool>
#define vchar             vector<char>
#define vstring           vector<string>
#define vpii              vector<pair<int,int>>
#define all(x)            (x).begin(), (x).end()
#define lb                lower_bound
#define ub                upper_bound
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define set_bits          __builtin_popcountll

template<class T> using oset =tree<T, null_type, greater_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
// declaration : oset<data_type> s;

template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

#ifdef avik_local
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fr); cerr << ","; _print(p.sc); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

const long long INF = 1e18;
const int MX = 100001;
const int32_t M = 1e9+7;
// const int32_t M = 998244353;

/*-----------------------------------------------------------------------------------------------------------------*/
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.pb(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
int mod_add(int a, int b, int m = M) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_sub(int a, int b, int m = M) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_mul(int a, int b, int m = M) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int inv(int i, int m = M) {if (i == 1) return 1; return (m - ((m / i) * inv(m % i)) % m) % m;}
int mpow(int a, int b, int m = M) { int x = 1; while (b > 0) { if (b & 1) { x = (x * a) % m;} a = (a * a) % m; b >>= 1;} return x;}

int BinaryExIter(int a,int b)
{
    int res =1;
    while(b)
    {
        if(b&1)
        {
            res*=a%M;
        }
        a*=a%M;
        b/=2%M;
    }
    return res;
}
int gcd(int a, int b)
{
    return b == 0 ? a: gcd(b, a%b);
}
bool isPrime(ll n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; 25 <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       string s[n];
       rep(i,0,n)
       {
         cin>>s[i];
       }
       int x=-1,y=-1;
       rep(j,0,m)
       {
         rep(i,0,n)
         {
           if(s[i][j]=='R')
           {
            x=i,y=j;
            break;
           }
         }
         if(x!=-1)break;
       }
       bool is_ok=true;
       rep(i,0,x)
       {
         rep(j,0,m)
         {
           if(s[i][j]=='R')
           {
            is_ok =false;
            break;
           }
         }
       }
       if(is_ok)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
	checkmate;
}
