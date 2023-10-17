class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl=s.size();
        int tl=t.size();
        int arr[26]={};
        if(tl!=sl){
            return false;
        }
        for(int i=0;i<sl;++i){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;

        }
        for(auto i:arr){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};