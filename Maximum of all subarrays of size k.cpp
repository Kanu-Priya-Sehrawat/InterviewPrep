//Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        int i, j;
        i = j = 0;
        list<int> l;
        while(j < n){
            // Calculation
            // All the smaller element in the list ...... pop krne h
            while(l.size()>0 && l.back()<arr[j])
            l.pop_back();
            // aur phir push kr dena h
            l.push_back(arr[j]);
            
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                // ans from calculation
                ans.push_back(l.front());
                // slide the window
                if(arr[i] == l.front())
                l.pop_front();
                
                i++;
                j++;
            }
        }
        return ans;
    }
