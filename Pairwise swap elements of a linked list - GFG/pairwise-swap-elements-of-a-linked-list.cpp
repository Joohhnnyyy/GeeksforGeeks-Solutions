            Node* nex = curr -> next;
            curr -> next = prev;
            prev = curr ;
            curr = nex;
        }return ;
    }
    Node* pairWiseSwap(Node* head) {
        // The task is to complete this method
        if(!head)return nullptr;
        Node* left = head;
        Node* right = nullptr;
        Node* res = nullptr;
        Node* prevLeft = nullptr;
        int size = 2;
        while(true){
            right = left;
            for(int i = 0 ; i < (size - 1) ; i++){
                if(!right)break;
                right = right -> next;
            }
            if( right ){
                Node* nextLeft = right -> next;
                reverse(left , size);
                if(prevLeft)prevLeft -> next = right;
                prevLeft = left;
                if(!res)res = right;
                left = nextLeft;
            }else{
                if(prevLeft)prevLeft -> next = left;
                if(!res)res = left;
                break;
            }
        }return res;
    }
};