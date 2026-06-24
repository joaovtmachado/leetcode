class Solution {
public:
    int reverse(int x) {

        int copia = x;
        int reverso = 0;
        
        
        while(copia != 0) {
            int digito = copia % 10;
            if(reverso>INT_MAX /10 || reverso<INT_MIN/10){
                return 0;
            }
            reverso = reverso * 10 + digito;
            copia = copia / 10;
        }
        
        
        return reverso;
    }
};