vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        if(A.size() != B.size() || A[0].size() != B[0].size())
        return {{-1}};
        
        vector<vector<int>> sum(A.size(), vector<int>(A[0].size()));
        for(int i=0; i<A.size(); i++){
            for(int j=0; j<A[0].size(); j++)
            sum[i][j] = A[i][j] + B[i][j];
        }
        return sum;
    }
