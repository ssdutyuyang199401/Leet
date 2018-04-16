class Solution {
public:
    int myAtoi(string str) {
	int index=0,ind=1;
	long long res=0;
	if(str.length()==0)
		return 0;
	while(str[index]==' ')
		index++;
	if(str[index]=='+')
		index++;
	else if(str[index]=='-')
	{
		index++;
		ind=-1;
	}
	for(int i=index;i<str.length();i++)
	{
		char ch=str[i];
		if(ch>='0'&&ch<='9')
		{
			int dit=ch-'0';
			res=res*10+dit;
			if(ind==1&&res>INT_MAX)
				return INT_MAX;
			if(ind==-1&&-1*res<INT_MIN)
				return INT_MIN;
		}
		else
		{
			if(ind==1)
				return res;
			else
				return -1*res;
		}
	}
	if(ind==1)
		return res;
	else
		return -1*res;
    }
};
