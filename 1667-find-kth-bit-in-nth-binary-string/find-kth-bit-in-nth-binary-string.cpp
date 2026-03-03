class Solution {
public:
    char findKthBit(int n, int k) {
        // Length of Sn = 2^n - 1
        int len = (1 << n) - 1;

        // Base case
        if (n == 1) return '0';

        int mid = len / 2 + 1;

        if (k == mid)
            return '1';
        else if (k < mid)
            return findKthBit(n - 1, k);
        else {
            // mirror position
            char ch = findKthBit(n - 1, len - k + 1);
            return (ch == '0') ? '1' : '0';
        }
    }
};