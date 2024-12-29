class Solution(object):
    def merge(self, nums1, m, nums2, n):
        j = 0
        for i in range(0,m+n):
            if nums1[i] == 0 and i >= m :
                nums1[i] = nums2[j]
                j=j+1
        nums1 = nums1.sort()
        
        