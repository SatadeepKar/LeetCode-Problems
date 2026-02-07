class Solution {
public:
    int minimumDeletions(string s) {
        int b = 0;
        int count = 0;

        for(char&ch :s){
            if(ch == 'a' && b>0){
                count++;
                b--;
            }
            if(ch =='b')b++;
        }
        return count;
    }
};