DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode* tmp=new DoublyLinkedListNode(data);
    DoublyLinkedListNode* ptr=llist;
    
    if(tmp->data < ptr->data){
        
        tmp->next=llist;
        llist=tmp;
        
    }
    else
    {
        while((ptr->next!=NULL) && (ptr->next->data < tmp->data))
        {
            ptr=ptr->next;
        }
        tmp->prev=ptr;
        tmp->next=ptr->next;
        ptr->next->prev=tmp;
        ptr->next=tmp;
    }
    
    return llist;
}

