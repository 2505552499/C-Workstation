/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int num[nums1Size+nums2Size];
    int i=0,l=0,r=0;
    while(l<nums1Size&&r<nums2Size){
        if(nums1[l]<=nums2[r]){
            num[i++]=nums1[l];
            l++;
        }
        else{
            num[i++]=nums2[r];
            r++;
        }
    }
    if(l==nums1Size){
        while(r<nums2Size){
            num[i++]=nums2[r];
            r++;
        }
    }
    if(r==nums2Size){
        while(l<nums1Size)  num[i++]=nums1[l++];
    }
    if(i%2==0)  return (num[i/2-1]+num[i/2])*1.0/2;
    else  return num[i/2]*1.0;
}
// @lc code=end

