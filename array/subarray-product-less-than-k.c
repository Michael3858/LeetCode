int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    int ans = 0, prod = 1, left = 0;
    if(k <= 1) return 0;
    for(int right = 0; right < numsSize; right++) {
        prod *= nums[right];
        while(prod >= k) {
            prod /= nums[left];
            left++;
        }
        ans += right - left + 1;
    }
    return ans;
}