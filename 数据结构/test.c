#include <stdio.h>


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int num[nums1Size+nums2Size];
    int i=0,l=0,r=0;
    while(l<nums1Size||r<nums2Size){
        if(nums1[l]<=nums2[r]){
            num[i++]=nums1[l];
            l++;
        }
        else{
            num[i++]=nums2[r];
            r++;
        }
    }
    if(i%2==0)  return (num[i/2-1]+num[i/2])*1.0/2;
    else  return num[i/2]*1.0;
}
int main(){
    int *nums1={1,2};
    int *nums2={3,4};
    int len1=2,len2=2;
    double res=findMedianSortedArrays(nums1,len1,nums2,len2);
    printf("%lf",res);
    return 0;
}