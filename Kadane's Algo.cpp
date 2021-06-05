 int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int mx = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            mx = max(sum, mx);
            if(sum<0){
                sum = 0;
            }
        }
        return mx;
        
    }
