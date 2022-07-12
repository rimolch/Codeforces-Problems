class Solution {
public:
    string removeDuplicates(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            if(s1.size()>0 && s1.back()/*if the previous stack value is equal with current value */==s[i]){
                s1.pop_back();//then pop_back() the previous stack value
            }
            else{
                s1.push_back(s[i]);
            }
        }
        return s1;
    }
};
// main 
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    string c="";
    for(int i=0;i<s.size();i++){
        if(c.size()!=0&& c.back()==s[i]){
            c.pop_back();
        }
        else{
            c.push_back(s[i]);
        }
    }
    cout<<c<<endl;
    return 0;
}
