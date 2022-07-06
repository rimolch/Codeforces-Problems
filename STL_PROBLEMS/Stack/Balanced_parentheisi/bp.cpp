#include<bits/stdc++.h>
#define ll long long int

using namespace std;
bool isbalanced(char a,char b){
    return (a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']');
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        string s;
        cin>>s;
        stack<char>st;
         int done =1;
        for(auto u:s){
            if(u=='('||u=='{'||u=='['){
              st.push(u);
            }
            else{
                if(st.empty()){
                    done =0;
                    break;
                }
                else{
                    if(isbalanced(st.top(),u)){
                       st.pop();
                    }
                    else{
                        done=0;
                        break;
                    }
                }
            }
        }
        if(!st.empty()){
            done=0;
        }
        if(done==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}
