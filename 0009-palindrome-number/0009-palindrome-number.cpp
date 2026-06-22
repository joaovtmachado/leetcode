#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0) return false;
        long long numeroInvertido = 0;
        int copia = x;
        while(copia > 0){
            int ultimo = copia % 10;
            numeroInvertido = (10 * numeroInvertido) + ultimo;
            copia = copia / 10;
       }
       return x == numeroInvertido;
    }
};