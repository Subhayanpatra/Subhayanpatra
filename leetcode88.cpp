#include<iostream>
#include<vector>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mix = m - 1; // Last index of valid elements in nums1
        int nix = n - 1; // Last index of valid elements in nums2
        int right = m + n - 1; // Last index of nums1

        // Merge the arrays starting from the end
        while (mix >= 0 && nix >= 0) {
            if (nums1[mix] > nums2[nix]) {
                nums1[right] = nums1[mix];
                mix--;
            } else {
                nums1[right] = nums2[nix];
                nix--;
            }
            right--;
        }

        // If there are remaining elements in nums2, place them in nums1
        while (nix >= 0) {
            nums1[right] = nums2[nix];
            nix--;
            right--;
        }
    }
};

