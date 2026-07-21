class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        # Always binary search on the smaller array to minimize complexity
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1

        m, n = len(nums1), len(nums2)
        left, right = 0, m  # search boundaries for nums1

        while left <= right:
            # Partition nums1 at i, nums2 at j
            i = (left + right) // 2
            j = (m + n + 1) // 2 - i

            # Handle edge cases: if partition is at the boundary
            max_left1 = float('-inf') if i == 0 else nums1[i-1]
            min_right1 = float('inf') if i == m else nums1[i]

            max_left2 = float('-inf') if j == 0 else nums2[j-1]
            min_right2 = float('inf') if j == n else nums2[j]

            # Check if we found the correct partition
            if max_left1 <= min_right2 and max_left2 <= min_right1:
                # If total length is even, median is average of two middle values
                if (m + n) % 2 == 0:
                    return (max(max_left1, max_left2) + min(min_right1, min_right2)) / 2
                # If odd, median is the max of left partition
                else:
                    return max(max_left1, max_left2)
class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        # Always binary search on the smaller array to minimize complexity
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1

        m, n = len(nums1), len(nums2)
        left, right = 0, m  # search boundaries for nums1

        while left <= right:
            # Partition nums1 at i, nums2 at j
            i = (left + right) // 2
