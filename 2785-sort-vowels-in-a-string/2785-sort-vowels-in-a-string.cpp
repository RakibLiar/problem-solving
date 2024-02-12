class Solution {
public:
    string vowelString = "AEIOUaeiou";
    
    bool isVowel(char c) {
        return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    
    char getVowel(int a) {
        return vowelString[a];
    }
    
    char getVowelIndex(char c, vector<int> &v) {
        auto it = find_if(v.begin(), v.end(), [](int x) {
            return x != 0;
        });
        int index = it - v.begin();
        v[index]--;
        return getVowel(index);
    }
    
    int vowelIndex(char c) {
        return vowelString.find(c);
    }
    
    string sortVowels(string s) {
        vector<int> vowel(10, 0);
        for(char c: s) {
            if(isVowel(toupper(c))) {
                vowel[vowelIndex(c)]++;
            }
        }
        for(int i=0; i<s.size(); i++) {
            if(isVowel(toupper(s[i]))) {
                s[i] = getVowelIndex(s[i], vowel);
            }
        }
        return s;
    }
};