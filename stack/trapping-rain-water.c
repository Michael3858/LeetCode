int trap(int* height, int heightSize) {
    int ans = 0, left = 0, right = heightSize - 1, pre_max = 0, suf_max = 0;
    while(left < right) {
        pre_max = fmax(pre_max, height[left]);
        suf_max = fmax(suf_max, height[right]);
        if(pre_max < suf_max) {
            ans += pre_max - height[left];
            left++;
        }
        else {
            ans += suf_max - height[right];
            right--;
        }
    }
    return ans;
}