class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std:: unordered_map<int, int> freqs;
        for (size_t i = 0; i < nums.size(); i++) {
            freqs[nums[i]]++;
        }
        std:: vector<std:: vector<int>> buckets(nums.size() + 1); 
        for (const auto& [val, freq]: freqs) {
            buckets[freq].push_back(val);
        }
        std:: vector<int> ans;
        for (int i = buckets.size() - 1; i >=0; i--) {
            for (int j =0; j < buckets[i].size(); j++) {
                ans.push_back(buckets[i][j]);
                if (ans.size() == k) {
                    return ans;
                }
            }


        } 
        return ans;
    }
};
