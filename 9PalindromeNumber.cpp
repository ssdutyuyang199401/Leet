class Solution {
public:
    bool isPalindrome(int x) {
        int origin=x;
        int reverse=0;
        if(origin<0||(origin%10==0&&origin!=0))
            return false;
        if(origin/10==0)
            return true;
        while(origin>reverse)
        {
            reverse=reverse*10+origin%10;
            origin=origin/10;
        }
        return origin==reverse||origin==reverse/10?true:false;
    }
};
