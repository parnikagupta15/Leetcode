class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                if (strs.empty()){
                    return "";
                }

                string prefix= strs[0];
                int n= strs.size();
                for (int i=1;i<n;i++){
                    while(strs[i].find(prefix)!=0){
                        prefix.pop_back();
                        if(prefix.empty()){
                            return "";
                        }


                    }
                }
    return prefix;
    }
};