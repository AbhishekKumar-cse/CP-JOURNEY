class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            // Skip duplicate i
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            unordered_set<int> seen;

            for (int j = i + 1; j < n; j++) {

                int needed = -(nums[i] + nums[j]);

                if (seen.count(needed)) {

                    result.push_back({
                        nums[i],
                        needed,
                        nums[j]
                    });

                    // Skip duplicate j
                    while (j < n - 1 && nums[j] == nums[j + 1])
                        j++;
                }

                seen.insert(nums[j]);
            }
        }

        return result;
    }
};