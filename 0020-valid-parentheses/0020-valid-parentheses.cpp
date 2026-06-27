#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> pilha;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] =='['){
                pilha.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] ==']'){
                
                if(pilha.empty()){
                    return false;
                }
                
                char verifica = pilha.top();
                
                if(s[i] == ')'){
                    if(verifica == '(') pilha.pop();
                    else return false;
                }
                else if(s[i] == '}'){
                    if(verifica == '{') pilha.pop();
                    else return false;
                }
                else if(s[i] == ']'){
                    if(verifica == '[') pilha.pop();
                    else return false;
                }
            }
        }
        
        return pilha.empty();
    }
};