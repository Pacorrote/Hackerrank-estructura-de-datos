int findMergeNode(SinglyLinkedListNode *headA, SinglyLinkedListNode*headB)
{
    SinglyLinkedListNode *curA = headA;
    SinglyLinkedListNode *curB = headB;

while (curA != curB) {
    curA = curA->next? curA->next: headB;
    curB = curB->next? curB->next: headA;
}

return curA->data;
}
