#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int min = 0;
        int vezesB = count(text.begin(), text.end(), 'b');
        int vezesA = count(text.begin(), text.end(), 'a');
        int vezesL = count(text.begin(), text.end(), 'l') / 2;
        int vezesO = count(text.begin(), text.end(), 'o') / 2;
        int vezesN = count(text.begin(), text.end(), 'n');
        vector<int> num = {vezesB, vezesA, vezesL,vezesO, vezesN};
        return *min_element(num.begin(), num.end());
    }
};