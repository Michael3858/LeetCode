int lengthOfLongestSubstring(char* s) {
    int last_pos[128];
    for(int i = 0; i < 128; i++) {
        last_pos[i] = -1;
    }
    int left = 0, max_len = 0, len = strlen(s);
    for(int right = 0; right < len; right++) {
        char current = s[right];
        if(last_pos[current] >= left) 
            left = last_pos[current] + 1;
        last_pos[current] = right;
        int curr_len = right - left + 1;
        if(curr_len > max_len)
            max_len = curr_len;
    }
    return max_len;
}