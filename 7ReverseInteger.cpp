class Solution {
public:
    int reverse(int x) {
     int res=0;
	 while(x!=0)
	 {
		 res=res*10+x%10;
		 if(res!=res/10*10+x%10)
			 return 0;
		 x/=10;
	 }
	 return res;
    }
};
