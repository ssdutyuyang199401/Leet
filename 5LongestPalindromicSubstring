class Solution{
public:
	vector<int> findlongest(string s,int center)
	{
		int len1=1,len2=1,l1=center,r1=center,l2=center,r2=center+1;
		while(l1>=0&&r1<s.length()&&s[l1]==s[r1])
		{
			l1--;
			r1++;
		}
		l1++;
		r1--;
		len1=r1-l1+1;
		while(l2>=0&&r2<s.length()&&s[l2]==s[r2])
		{
			l2--;
			r2++;
		}
		l2++;
		r2--;
		len2=r2-l2+1;
		vector<int> answer;
		if(len1>len2)
		{
			answer.push_back(r1-l1+1);
		    answer.push_back(l1);
		    answer.push_back(r1);
		}
		else
		{
			answer.push_back(r2-l2+1);
			answer.push_back(l2);
			answer.push_back(r2);
		}
		return answer;
	}
	string longestPalindrome(string s) {
        int start=0,end=0;
		for(int i=0;i<s.length()-1;i++)
		{
			vector<int> a=findlongest(s,i);
			if(a[0]>end-start+1)
			{
				start=a[1];
				end=a[2];
			}
		}
		cout<<"start: "<<start<<" end: "<<end<<endl;
		return s.substr(start,end-start+1);
    }
};
