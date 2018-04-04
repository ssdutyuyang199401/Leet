class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		if(nums1.size()==0)
			findmedian(nums2);
		if(nums2.size()==0)
			findmedian(nums1);
		int m=nums1.size(),n=nums2.size();
		int midsize=(m+n)/2;
		vector<int> nums3;
		for(int count=0,index1=0,index2=0;count<m+n;count++)
		{
			int a=index1<m?nums1[index1]:INT_MAX;
			int b=index2<n?nums2[index2]:INT_MAX;
			if(a<=b)
			{
				nums3.push_back(a);
				index1++;
			}
			else
			{
				nums3.push_back(b);
				index2++;
			}
		}
		if((m+n)%2)
			return nums3[(m+n)/2];
		else
			return (nums3[(m+n)/2]+nums3[(m+n)/2-1])/2.0;
    }
	double findmedian(vector<int>& nums)
	{
		int length=nums.size();
		if(length%2)
			return nums[length/2];
		else
			return (nums[length/2]+nums[length/2-1])/2.0;
	}
};
