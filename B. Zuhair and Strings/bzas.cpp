#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;int k,l,count=1;
    int ar[26]={0};int n = sizeof(ar)/sizeof(ar[0]);
    cin >> l >> k >> s;
    if(k>1)
    {
        for(int i=0;i<l-1;i++)  //8(l) 2 (k)  aaacaabb
        {
          if(s.at(i)==s.at(i+1))
          {
             count++;
          }
          else
          {
             count = 1;
          }
          if(count == k)
          {
            ar[int(s.at(i))-97]++;
            i++;
            count =1;
          }
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
           ar[int(s.at(i))-97]++;
        }
    }
     sort(ar,ar+n);
     cout << ar[25];
    return 0;
}
