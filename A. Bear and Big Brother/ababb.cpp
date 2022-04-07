#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
     int a,b,a1,b1,c=0;
     cin>>a>>b;
     while(a!=0&&b!=0)
     {
        
        a1= 3*a;
        b1 = 2*b;
        c++;
        if(a1>b1)
        {
            cout<<c<<endl;
            break;
        }
        else
        {
           a = a1;
           b = b1;
        }
     }
    return 0;
}
