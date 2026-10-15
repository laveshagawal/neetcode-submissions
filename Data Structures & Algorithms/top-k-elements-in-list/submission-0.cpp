
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // Step 1: Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // Step 2: Store {frequency, number}
        vector<pair<int, int>> arr;

        for (auto it : mp) {
            arr.push_back({it.second, it.first});
        }

        // Step 3: Sort in descending order
        sort(arr.rbegin(), arr.rend());

        // Step 4: Return the top k numbers
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};
