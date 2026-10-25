int maxArea(int* height, int heightSize) {
    int ans = 0, left = 0, right = heightSize - 1;
    while(left < right) {
        int area = fmin(height[left], height[right]) * (right - left);
        ans = fmax(area, ans);
        if(height[left] < height[right]) left++;
        else right--;
    }
    return ans;
}