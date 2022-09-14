#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getlength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
Node *findMiddle(Node *head) {
    // Write your code here
   int len=getlength(head);
    int ans=(len/2);
    
    Node* temp=head;
    int count=0;
    while(count<ans){
        temp=temp->next;
        count++;
    }
    return temp;
}