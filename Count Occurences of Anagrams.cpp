int search(string pat, string txt) {
	    // code here
	    int res = 0;
	    int i = 0, j = 0;
	    map<char, int> mp;
	    for(int i = 0; i<pat.length(); i++){
	        mp[pat[i]]++;
	    }
	    int count = mp.size();
	    while(j < txt.length()){
	        if(mp.find(txt[j]) != mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0)
	            count--;
	        }
	        if(j-i+1 < pat.length()){
	            j++;
	        }
	        else if(j-i+1 == pat.length()){
	            if(count == 0)
	            res++;
	            
	            if(mp.find(txt[i]) != mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1)
	                count++;
	            }
	            i++;
	            j++;
	        }
	        
	    }
	    return res;
	}
