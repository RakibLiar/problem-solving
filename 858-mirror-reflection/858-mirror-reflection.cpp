class Solution {
public:
    int gcd(int a, int b) {
        if(b == 0) return a;
        return gcd(b, a%b);
    }
    int mirrorReflection(int p, int q) {
        int g = gcd(p,q);
        if((p/g)%2 == 0) return 2;
        return (q/g)%2;
    }
};