#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,h,s1=0,i;

    cin>>n>>h;

    int a[n];

    for(i=0;i<n;i++)

    {

         cin>>a[i];

         if(a[i]<=h)

         {

             s1+=1;

         }

         else

         {

             s1+=2;

         }

    }

    cout<<s1<<endl;

    return 0;

}
