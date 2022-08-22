class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n != 0 && n%3 <= 1) {
            n/=3;
        }
        return n == 0;
    }
};