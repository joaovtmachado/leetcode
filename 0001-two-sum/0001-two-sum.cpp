#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numeros_vistos;
        for(int i = 0; i < nums.size(); i++){
            int atual = nums[i];
            int complemento = target - atual;
            if(numeros_vistos.find(complemento) != numeros_vistos.end()){
                return{numeros_vistos[complemento], i};
            }
            numeros_vistos[atual] = i;
        }
        return{};
    }
};