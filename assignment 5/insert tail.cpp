

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* n= new SinglyLinkedListNode(data);
if(head == NULL){
    return head = n;
    
}
SinglyLinkedListNode* temp = head;
while(temp->next!=NULL){
    temp= temp->next;
    
}
temp->next=n;
return head;
}
