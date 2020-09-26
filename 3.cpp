class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        int max_length = 0;
        int left_side = 0;
        int flag = 0;
        int curr_length = 0;
        set <char> Myset;
        for (int i = 0; i < length; i++)
        {
            while (Myset.count(s[i]))
            {
                if ((i - left_side > max_length) && flag)
                {
                    flag = 0;
                    max_length = max(i - left_side, curr_length);
                }
                Myset.erase(s[left_side]);
                left_side++;
                curr_length--;
            }
            flag = 1;
            curr_length++;
            Myset.insert(s[i]);
        }
        return max(max_length, curr_length);
    }
};