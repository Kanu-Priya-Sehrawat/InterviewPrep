long getMax(vector<long> &arr){
    long m = LONG_MIN;
    long sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        m = max(m, sum);
    }
    return m;
}

long arrayManipulation(int n, vector<vector<int>> queries) {
    // first time +1 is for 1-indexed 
    // second time +1 for handling edge case of b+1  
    
    vector<long> vec(n+2);
      for(int i=0; i<queries.size(); i++){
          int a = queries[i][0];
          int b = queries[i][1];
          int k = queries[i][2];
          vec[a] += k;
          vec[b+1] -= k;
      }
      long max = getMax(vec);
      return max;
}
