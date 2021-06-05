char getMaxOccuringChar(string str)
    {
        // Your code here
        int mx = INT_MIN;
        char res;
        unordered_map<char, int> m;
        for(int i=0; i<str.length(); i++){
            m[str[i]]++;
        }
        for(auto c:m){
            if(c.second > mx){
                mx = c.second;
                res = c.first;
            }
            if(c.second == mx){
                if(res > c.first)
                res = c.first;
            }
        }
        return res;
    }
