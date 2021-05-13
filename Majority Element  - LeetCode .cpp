// Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int maxIndex = 0, count = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[maxIndex]==nums[i])
                count++;
            else
                count--;
            if(count == 0){
                maxIndex = i;
                count = 1;
            }
        }
        
        int a = nums[maxIndex];
        count = 0;
        for(int i=0; i<nums.size(); i++){
            if(a == nums[i])
                count++;
         }
        if(count > nums.size()/2)
            return nums[maxIndex];
        else
            return -1;
        
    }
