vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K)
  {
           vector<long long> res;
           list<long long> l;
           long long i, j;
           i = j = 0;
           while(j<N){
               if(A[j]<0){
                   l.push_back(A[j]);
               }
               if(j-i+1 < K){
                   j++;
               }
               else if(j-i+1 == K){
                   if(l.size()==0){
                       res.push_back(0);
                   }
                   else{
                       res.push_back(l.front());
                       if(A[i]==l.front())
                       l.pop_front();
                   }
                   i++;
                   j++;
               }
           }
           return res;
 }
