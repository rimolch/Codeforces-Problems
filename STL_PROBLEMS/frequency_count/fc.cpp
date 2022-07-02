#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int findFrequency(vector<int>v,int x){
    map<long long,int>mp;
    for(auto u:v){
        mp[u]++;
    }
    return mp[x];
}
int main()
{
    return 0;
}

