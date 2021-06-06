int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int n = r-l+1;
        priority_queue<int> maxHeap;
        for(int i=0; i<k; i++){
            maxHeap.push(arr[i]);
        }
        for(int i=k; i<n; i++){
            if(arr[i]<maxHeap.top()){
                maxHeap.pop();
                maxHeap.push(arr[i]);
            }
        }
        return maxHeap.top();
    }
