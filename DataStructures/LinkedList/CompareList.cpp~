/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    Node *iterA = headA;
    Node *iterB = headB;
    
    if(headA == NULL && headB == NULL)
        return 1;
    
   do{
    if(iterA->data == iterB->data){
        iterA = iterA->next;
        iterB = iterB->next;
    }else{
        return 0;
    }
   }while(iterA != NULL && iterB != NULL);
        
   if((iterA == NULL && iterB != NULL) || (iterB == NULL && iterA != NULL)){
       return 0;
   }
    
   return 1;
}
