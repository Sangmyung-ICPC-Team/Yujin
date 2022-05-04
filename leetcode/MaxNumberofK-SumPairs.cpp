class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]] && m[k-nums[i]]){
                if(nums[i]==k-nums[i] && m[nums[i]]==1)
                    continue;
                m[nums[i]]--;
                m[k-nums[i]]--;
                cnt++;
            }
        }
        
        return cnt;
    }
};
