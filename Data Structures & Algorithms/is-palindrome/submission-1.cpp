class Solution {
    bool isAlphaNumeric(char c){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c<='9'&&c>='0')) return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        int left=0, right = s.size()-1;
        int alphacnt = 0;
        for(auto c:s) if(isAlphaNumeric(c)) alphacnt++;
        if(alphacnt==0) return true;
        while(left<=right){
            while(!isAlphaNumeric(s[left])) left++;
            while(!isAlphaNumeric(s[right])) right--;

            if(s[left]==s[right]||s[left]==(char)(s[right]^' ')){
                left++;
                right--;
                continue;
            }
            return false;
        }
        cout<<s[left]<<" "<<s[right]<<"\n";
        return true;
    }
};
