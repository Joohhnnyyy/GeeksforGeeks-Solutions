/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
  Node * reverseList(Node * l){
      Node * curr = l;
      Node * prev = nullptr;
      while( curr ){
          Node * nex = curr -> next;
          curr -> next = prev ;
          prev = curr ;
          curr = nex ;
      }return prev;
  }
    bool isPalindrome(Node *head) {
        //  code here
        Node * slow = head;
        Node * fast = head;
        while( fast && fast -> next ){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        if(fast)slow = slow -> next;
        Node * newHead1 = reverseList(slow);
        Node * newHead2 = head;