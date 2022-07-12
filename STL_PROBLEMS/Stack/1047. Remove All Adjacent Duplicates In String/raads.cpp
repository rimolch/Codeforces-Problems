class Solution {
public:
    string removeDuplicates(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            if(s1.size()>0 && s1.back()==s[i]){
                s1.pop_back();
            }
            else{
                s1.push_back(s[i]);
            }
        }
        return s1;
    }
};
