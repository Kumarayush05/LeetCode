class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
        if(st.empty()) return "";
        string prefix = st[0];
        for(int i=1;i<st.size();i++){
            while(st[i].find(prefix)!=0){
                prefix = prefix.substr(0,prefix.length()-1);

                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};