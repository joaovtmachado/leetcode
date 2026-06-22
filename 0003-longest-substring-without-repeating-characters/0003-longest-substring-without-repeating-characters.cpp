#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maior = 0;
        int maiorMax = 0;
        int esquerda = 0;
        unordered_set<char> maiores; 
        for(int i = 0; i < s.size(); i++){
            while(maiores.find(s[i]) != maiores.end()){
                maiores.erase(s[esquerda]);
                esquerda++;
            }
            maiores.insert(s[i]);
            maiorMax = max(maiorMax, i - esquerda + 1);
        }
        return maiorMax;
    }
};