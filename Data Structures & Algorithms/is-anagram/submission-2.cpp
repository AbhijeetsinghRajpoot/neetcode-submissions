class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = t.size();
        int m = s.size();
        int hashArr[256]={0};
        int hashArr2[256]={0};
        if(n==m){
            for(int i = 0;i<n;i++){
                hashArr[s[i]-97]+=1;
            }
            for(int j = 0;j<n;j++){
                hashArr2[t[j]-97]+=1;
            }
            for(int k =0;k<26;k++){
                if(hashArr[k]!=hashArr2[k])
                    {
                        cout<<hashArr[k]<<endl;
                        cout<<hashArr2[k]<<endl;
                            return false;
                    }

                }
            return true;
        }
    return false;


    }
};
