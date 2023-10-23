class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int numSize = nums.size();
        for (int i = 0; i < numSize; i++) {
            for (int j = i+1; j < numSize;) {
                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);
                    numSize--;
                } else {
                    j++;
                }
            }
        }

        return nums.size();
    }
};