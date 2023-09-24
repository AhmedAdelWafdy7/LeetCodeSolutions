class Solution {
public:
    bool validPalindrome(string s) {
  int l = 0;
    int r = s.length() - 1;

    while (l < r) {
        if (s[l] != s[r]) {
            // Try removing character from the left side
            int l1 = l + 1;
            int r1 = r;
            bool is_palindrome1 = true;

            while (l1 < r1) {
                if (s[l1] != s[r1]) {
                    is_palindrome1 = false;
                    break;
                }
                l1++;
                r1--;
            }

            // Try removing character from the right side
            int l2 = l;
            int r2 = r - 1;
            bool is_palindrome2 = true;

            while (l2 < r2) {
                if (s[l2] != s[r2]) {
                    is_palindrome2 = false;
                    break;
                }
                l2++;
                r2--;
            }

            // If either option results in a palindrome, return true
            if (is_palindrome1 || is_palindrome2) {
                return true;
            }

            // If neither option results in a palindrome, return false
            return false;
        }

        l++;
        r--;
    }

    // If we reach this point, the string is already a palindrome or can be made one by removing at most one character.
    return true;
    }
};