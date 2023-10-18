

class Solution {
public:
    bool isPalindrome(std::string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            // Skip non-alphanumeric characters from the left
            while (l < r && !isalnum(s[l])) {
                l++;
            }

            // Skip non-alphanumeric characters from the right
            while (l < r && !isalnum(s[r])) {
                r--;
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};

