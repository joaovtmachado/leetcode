#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> numeros;
        numeros['I'] = 1;
        numeros['V'] = 5;
        numeros['X'] = 10;
        numeros['L'] = 50;
        numeros['C'] = 100;
        numeros['D'] = 500;
        numeros['M'] = 1000;
        int valor = 0;
        char maior = 'I';
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i ++){
            if(numeros[s[i]] < numeros[maior]){
                maior = s[i];
                valor -= numeros[s[i]];
            }
            else if(numeros[s[i]] >= numeros[maior]){
                valor += numeros[s[i]];
                maior = s[i];
            }
        }
        return valor;
    }
};