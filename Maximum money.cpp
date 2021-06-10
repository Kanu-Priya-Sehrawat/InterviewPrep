int maximizeMoney(int N , int K) {
        // code here
        int money;
        if(N%2 == 0)
        money = (N/2)*K;
        else
        money = (N+1)/2 * K;
        
        return money;
    }
