class Solution {
public:
    string convert(string s, int numrows) {
        if(numrows==1)return s;

        vector<string>rows(numrows);
        int row=0;
        int direction =1;

        for(int i=0;i<s.size();i++){
            rows[row]=rows[row]+s[i];
            row = row+direction;

            if(row==numrows-1){
                direction =-1;
            }else if(row==0){
                direction =1;
            }
        }

        string ans="";
        for(int i=0;i<numrows;i++){
            ans = ans+rows[i];
        }
        return ans;
    }
};