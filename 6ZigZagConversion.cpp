class Solution{
	public:
    string convert(string s, int numRows) {
        string* rows=new string[numRows];
		if(s.length()==0||numRows<2)
			return s;
		for(int i=0;i<numRows;i++)
		{
			rows[i]="";
		}
		int row=0,index=1;
		for(int i=0;i<s.length();i++)
		{
			rows[row]+=s[i];
			row+=index;
			if(row==numRows)
			{
				row-=2;
				index=-1;
			}
			if(row==-1)
			{
				row+=2;
				index=1;
			}
		}
		string result="";
		for(int i=0;i<numRows;i++)
		{
			result+=rows[i];
		}
		return result;
    }
};
