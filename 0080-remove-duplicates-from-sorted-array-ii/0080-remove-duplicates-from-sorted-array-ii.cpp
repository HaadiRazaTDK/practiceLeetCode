
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int numSize = nums.size();
        int position = 0;
        int count = 0;
        for (int i = 0; i < numSize; i++) {
            for (int j = i+1; j < numSize;) {
                if (nums[i] == nums[j]) {
                    count++;
                    position = j;
                    if (count>1){
                    	nums.erase(nums.begin() + position);
                    	numSize--;
                    }
                    else{
                    	j++;
                        }
                } 
                else {
                    j++;
                }
            }
            count=0;
        }

        return nums.size();
    }
};