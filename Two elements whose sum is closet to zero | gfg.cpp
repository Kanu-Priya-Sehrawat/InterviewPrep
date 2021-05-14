int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr, arr+n);
            int l = 0, r = n-1;
            int cur_sum;
            int closet_sum = INT_MAX;
            while(l<r){
                cur_sum = arr[l] + arr[r];
                if(cur_sum == 0)
                return 0;
                if(abs(cur_sum) < abs(closet_sum)){
                    closet_sum = cur_sum;
                }
                else if(abs(cur_sum) == abs(closet_sum)){
                    closet_sum = max(closet_sum, cur_sum);
                }
                
                if(cur_sum<0)
                l++;
                else
                r--;
            }
            return closet_sum;
        }
