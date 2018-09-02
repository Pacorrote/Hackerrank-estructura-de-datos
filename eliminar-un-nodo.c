SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(head!=NULL){
     int posicion=0;
     SinglyLinkedListNode *aux=head->next;
     SinglyLinkedListNode *anterior=head;
     if(position==0){
        free(head);
        head=aux; 
     }   
     else {
         while(aux!=NULL && posicion<=position-2){
         aux=aux->next;
         anterior=anterior->next;
         posicion+=1;
     }
     anterior->next=aux->next;
     free(aux);
    }
    }
    else{
        printf("Lista vacia\n\n");
    }
    return head;
}
