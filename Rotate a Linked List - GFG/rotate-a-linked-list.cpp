    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if(!head)return nullptr;
        if(!(head -> next)) return head;
        Node* curr = head;
        Node* lastNode = nullptr;
        int len = 1;
        while(curr -> next){
            curr = curr -> next;
            len++;
        }
        lastNode = curr;
        curr = head;
        k %= len;
        if(!k)return head;
        lastNode -> next= head;
        int remNode = k - 1;
        while(remNode--){
            curr = curr -> next;
        }
        head = curr -> next;
        curr -> next = nullptr;
        return head;
    }
};