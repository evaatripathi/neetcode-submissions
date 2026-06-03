class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map <string, vector<string>> anagramBuckets;
        for(int i=0; i<n; i++){
            string originalWord = strs[i];
            string sortedWord = originalWord;
            sort(sortedWord.begin(), sortedWord.end());

            anagramBuckets[sortedWord].push_back(originalWord);


        }

        vector <vector<string>> result;

        for(auto& x : anagramBuckets){
            result.push_back(x.second);
        }

        return result;
        
    }
};
