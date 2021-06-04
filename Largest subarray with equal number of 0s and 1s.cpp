 int maxLen(int arr[], int N)
    {
        // Your code here
       unordered_map<int, int> hash;
       int len,sum;
       len=sum=0;
       for(int i=0; i<N; i++)
       arr[i] = (arr[i]==0)?-1:1;
       
       for(int i=0; i<N; i++){
           sum += arr[i];
           if(sum == 0){
               if(i+1>len)
               len = i+1;
               continue;
           }
           if(hash.find(sum) != hash.end()){
               if(i-hash[sum]>len)
               len = i-hash[sum];
           }
           else{
               hash[sum] = i;
           }
           
       }
       return len;
       
    }
