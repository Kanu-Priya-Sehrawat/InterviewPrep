vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]] = target - nums[i];
        }
        for(int i=1; i<nums.size(); i++){
            auto it = find(nums.begin()+i, nums.end(), m[nums[i-1]]);
            if(it != nums.end()){
                res.push_back(i-1);
                res.push_back(it-nums.begin());
                return res;
            }
        }
        return res;
    }
