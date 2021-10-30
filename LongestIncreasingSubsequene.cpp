#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        dp[0] =1 ;
        for(int i =1;i<n;i++)
        {
            dp[i] = 1;
            for(int j =0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp,dp+n);

    }
int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	vector<int>ar(n);
	cout<<"Enter the Array elements"<<endl;
	for(int i =0;i<n;i++)cin>>ar[i];
	cout<<"The length of the longest increasing subsequence is "
	cout<<lengthOfLIS(ar);
	return 0;
}
