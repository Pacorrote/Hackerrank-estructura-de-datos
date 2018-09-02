SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
   struct SinglyLinkedListNode*temp1=head;
    struct SinglyLinkedListNode*temp=head->next;
    while(temp!=NULL)
    {
        if(head->data==temp->data)
        {
            temp=temp->next;
            head->next=temp;
        }
        else
        {
         head=temp;
         temp=temp->next;
        }
    }
 return temp1;
}
