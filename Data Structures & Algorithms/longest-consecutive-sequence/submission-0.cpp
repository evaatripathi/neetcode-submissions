class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> myBag;
        for (int i = 0; i < nums.size(); i++) {
            myBag.insert(nums[i]);
        }

        int longestStreak = 0;
        for (int num : myBag) {
            if (myBag.count(num - 1) == 0) {
                int currentNum = num;
                int currentStreak = 1;
                while (myBag.count(currentNum + 1) == 1) {
                    currentNum++;   
                    currentStreak++;  
                }
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};