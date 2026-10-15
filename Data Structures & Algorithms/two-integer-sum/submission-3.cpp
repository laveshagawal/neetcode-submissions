class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // int i=0;
        // int j=n-1;
        // while(i<j){
        //     int sum=nums[i]+nums[j];
        //     if(sum>target){
        //         j--;
        //     }
        //     else if(sum<target){
        //         i++;
        //     }
        //     else{
        //         return{i,j};
        //     }
        // }
        // return {};

          unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
