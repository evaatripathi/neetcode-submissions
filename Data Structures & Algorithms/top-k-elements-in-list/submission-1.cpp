class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> countMap;
        for(auto num : nums){
            countMap[num]++;
        }

        vector<vector<int>> buckets(nums.size()+1);
        for(const auto& pair : countMap){
            int number = pair.first;
            int frequency = pair.second;

            buckets[frequency].push_back(number);
        }
        
        vector<int> result;

        for(int i = buckets.size()-1; i>=0; i--){
            for(auto& num : buckets[i]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }
        }

        return result;
    }
};
