
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	int j = 0;
		int nums1size = nums1.size();
        for (int i = 0; i<nums1size; i++){
            if (nums1[i]==0){
            	while (j<n){
                	nums1[i] = nums2[j];
                    j=j+1;
                    break;              
                    }   
            if (i==nums1size-1){
            	std::sort(nums1.begin(), nums1.end());
            }
            }
        }

    }
};

