class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool check=false; // double check
        vector<int>tmp;
        
        tmp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(tmp.back()!=nums[i])
                check=false;
            else{
                if(check)
                    continue;
                check=true;
            }
            tmp.push_back(nums[i]);
        }
        
        for(int i=0;i<tmp.size();i++)
            nums[i]=tmp[i];
        
        return tmp.size();
    }
};
