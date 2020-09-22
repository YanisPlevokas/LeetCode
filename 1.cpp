class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> pairs(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            pairs[i] = make_pair(nums[i], i);
        }
        sort(pairs.begin(), pairs.end());
        int left = 0;
        int right = nums.size() - 1;
        while (left < right)
        {
            if (pairs[left].first + pairs[right].first == target)
            {
                return vector <int> {pairs[left].second, pairs[right].second};
            }
            if (pairs[left].first + pairs[right].first > target)
            {
                right--;
            }
            else
            {
                left++;
            }

        }
        return { 0,0 };
    }
};