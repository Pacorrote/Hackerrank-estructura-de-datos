SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *tail, *t;
    tail = NULL;
    while (head != NULL) {
        t = head->next;
        head->next = tail;
        tail = head;
        head = t;
    }
    return tail;
}
