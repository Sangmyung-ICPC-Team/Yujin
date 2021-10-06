class solution {
public:
    vector<int> findduplicates(vector<int>& nums) {
        int num[100001]={0,};
        for(int i=0;i<nums.size();i++)
            num[nums[i]]++;
        
        vector <int> temp;
        for(int i=1;i<100001;i++){
            if(num[i]>1)
                temp.push_back(i);
        }
        
        
        return temp;
    }
};
