int minSubArrayLen(int target, int* nums, int numsSize) {
    int ans = numsSize + 1, sum = 0, left = 0;
    for(int right = 0; right < numsSize; right++) {
        sum += nums[right];
        /*while(sum - nums[left] >= target) {
            sum -= nums[left];
            left++;
        }
        if(sum >= target) 
            ans = fmin(ans, right - left + 1);*/
        while(sum >= target) {
            ans = fmin(ans, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }
    if(ans <= numsSize) return ans;
    else return 0;
}