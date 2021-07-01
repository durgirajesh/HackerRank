SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode* ptr=llist;
    SinglyLinkedListNode* tmp=new SinglyLinkedListNode(data);
    
    int i=1;
    
    while(i<position){
        
        i++;
        ptr=ptr->next;
    }
    tmp->next=ptr->next;
    ptr->next=tmp;
    ptr=tmp;
    
    return llist; 
       
}
