class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size();
        int odd = 0;
        int even = 0;

        for(int i=0;i<n; i+=2){
            even = even + num[i] - '0';
        };
        for(int i=1;i<n; i+=2){
            odd = odd + num[i] - '0';
        };
    return odd == even;
    }
};