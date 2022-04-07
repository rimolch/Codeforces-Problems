#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
   long long n,k;
   cin>>n>>k;
   vector<long long >ar(n);
   int count =0;
   for(long long i=0;i<n;i++)
   {
       cin>>ar[i];
   }
   for(long long i =0;i<ar.size();i++)
   {
       while(ar[i]>0)
       {
           ar[i]-=k;
           count++;
       }
   }
   if(count%2==0)
   {
       cout<<count/2<<endl;
   }
   else
   {
       cout<<(count+1)/2<<endl;
   }
   return 0;
}
