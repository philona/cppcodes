 long long maxSubarraySum(int arr[], int n){
        
        int max_sum=INT_MIN;
        int curr_sum= 0;
        for(int i=0;i<n;i++)
        {
            curr_sum = max(curr_sum + arr[i],arr[i]);
            max_sum = max(curr_sum, max_sum);
           
        }
        return max_sum;
    }
