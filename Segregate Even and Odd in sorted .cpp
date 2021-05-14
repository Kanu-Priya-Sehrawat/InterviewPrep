void segregateEvenOdd(int arr[], int n) {
	    // code here
	   vector<int> even;
	   vector<int> odd;
	   for(int i=0; i<n; i++){
	       if(arr[i]%2 == 0)
	       even.push_back(arr[i]);
	       else
	       odd.push_back(arr[i]);
	   }
	   sort(even.begin(), even.end());
	   sort(odd.begin(), odd.end());
	   int i;
	  for(i=0; i<even.size(); i++)
	  arr[i] = even[i];
	  int j=0;
	  for(; i<n; i++){
	  arr[i] = odd[j];
	  j++;
	  }
	      
	  }
