#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> aux;
        aux.reserve(size1 + size2);
        aux.insert(aux.end(), nums1.begin(), nums1.end());
        aux.insert(aux.end(), nums2.begin(), nums2.end());
        
        sort(aux.begin(), aux.end());
        int n = aux.size();
        if(n % 2 != 0){
            return aux[n/2];
        }
        else{
            return (aux[n/ 2] + aux[n / 2 - 1]) / 2.0;
        }
    }
};