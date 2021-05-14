bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int l, r, sum;
        sort(A, A+n);
        for(int i=0; i<n-2; i++){
            l = i+1;
            r = n-1;
            while(l<r){
                sum = A[i] + A[l] + A[r];
                if(sum == X)
                return true;
                
                if(sum<X)
                l++;
                else
                r--;
            }
            
        }
        return false;
    }
