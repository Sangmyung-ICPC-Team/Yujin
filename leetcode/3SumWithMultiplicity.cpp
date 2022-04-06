class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int dp[301]={0,};
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(target-arr[i]>=0)
                ans=(ans+dp[target-arr[i]])%1000000007;
            for(int j=0;j<i;j++)
                dp[arr[i]+arr[j]]++;
        }
        
        return ans;
    }
};
