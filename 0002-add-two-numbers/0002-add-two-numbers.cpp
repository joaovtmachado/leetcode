class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* cabeca = new ListNode(0);
        ListNode* atual = cabeca; 
        
        int carry = 0; 
        
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            
            int soma = val1 + val2 + carry;
            
            carry = soma / 10;
            
            atual->next = new ListNode(soma % 10);
            
            atual = atual->next;
            
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        ListNode* resposta = cabeca->next;
        delete cabeca; 
        
        return resposta;
    }
};