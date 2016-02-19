/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node *iter = head;
    Node *node = new Node();
    node->data = data;
    
    if(head == NULL){
        node->next = NULL;
        node->prev = NULL;
        head = node;
    }
    else if(data < head->data){
        node->next = head;
        node->prev = NULL;
        head->prev = node;
        head = node;
    }
    else{
        while(iter->next != NULL && data > iter->data){
            iter = iter->next;
        }   
        if(iter->next == NULL && data > iter->data){
            node->next = NULL;
            node->prev = iter;
            iter->next = node;
        }
        else{
            node->next = iter;
            node->prev = iter->prev;
            iter->prev->next = node;
            iter->prev = node;
        }    
    } 
    return head;
}

