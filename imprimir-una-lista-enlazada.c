void printLinkedList(SinglyLinkedListNode* head) {
if(head == NULL){
      printf(" ");
      }
    else{
   SinglyLinkedListNode *current = head; 
    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;}
   }
}
