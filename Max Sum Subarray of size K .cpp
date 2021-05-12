int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int sum = 0;
        int res = INT_MIN;
        int i = 0, j = 0;
        while(j<N){
            if(j-i+1<K){
                sum += Arr[j];
                j++;
            }
            else if(j-i+1 ==K){
                sum += Arr[j];
                res = max(res, sum);
                sum = sum - Arr[i];
                i++;
                j++;
            }
        }
        return res;
    }
