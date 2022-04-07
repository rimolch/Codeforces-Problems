#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,i,y=2,mini=4;
    int inc=4;
    double z;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i==y)
        {
            mini=(mini-1)+3;
            y+=inc;
            inc+=2;
        }
        z = sqrt(i);
        if(z==(int)z)
        {
            mini=(mini-1)+3;
        }
    }
   cout<<mini<<endl;
}
