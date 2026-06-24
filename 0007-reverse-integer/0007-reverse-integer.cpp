class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0;

        int copia = x;
        int reverso = 0;
        
        (copia < 0) ? copia *= -1 : copia;
        
        while(copia > 0) {
            int digito = copia % 10;
            if (reverso > INT_MAX / 10 || (reverso == INT_MAX / 10 && digito > 7)) {
                return 0;
            }
            reverso = reverso * 10 + digito;
            copia = copia / 10;
        }
        
        (x < 0) ? reverso *= -1 : reverso;
        
        return reverso;
    }
};