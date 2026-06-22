#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string texto = to_string(x);
        string textoInverso = to_string(x);
        reverse(textoInverso.begin(), textoInverso.end());
        for(int i = 0; i < texto.size() / 2; i++){
            if(texto[i] != textoInverso[i]){
                return false;
            }
        }
        return true;
    }
};