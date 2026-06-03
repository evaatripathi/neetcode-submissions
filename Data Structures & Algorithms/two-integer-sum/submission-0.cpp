class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i; j<n; j++){
            if(j!=i && nums[i]+nums[j]==target){
                return {i,j};
            } 
        }
    }

   // return {i,j};
        
    }
};
