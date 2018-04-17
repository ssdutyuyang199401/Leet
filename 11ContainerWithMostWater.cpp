class Solution {
public:
    int maxArea(vector<int>& height) {
	int i=0,j=height.size()-1;
	int water=0;
	int h=0;
	while(i<j)
	{
		h=height[i]<=height[j]?height[i]:height[j];
		water=water<(j-i)*h?(j-i)*h:water;
		while(height[i]<=h&&i<j)
			i++;
		while(height[j]<=h&&i<j)
			j--;
	}
	return water;
    }
};
