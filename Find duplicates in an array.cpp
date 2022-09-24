    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int>m;
        vector<int>ans;
        for( int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for( auto a:m){
            if(a.second >1) ans.push_back(a.first);
        }
        sort(ans.begin(),ans.end());
        
        if( ans.size()==0){
            ans.push_back(-1);
            return ans;
        }
        else{
            return ans;
        }   
    }
