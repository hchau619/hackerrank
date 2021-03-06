/*
Problem Statement

This challenge is part of a tutorial track by MyCodeSchool and is accompanied by a video lesson.

You’re given the pointer to the head node of a linked list and an integer to add to the list. Create a new node with the given integer, insert this node at the tail of the linked list and return the head node. The head pointer given may be null meaning that the initial list is empty.

Input Format
You have to complete the Node* Insert(Node* head, int data) method which takes two arguments - the head of the linked list and the integer to insert. You should NOT read any input from stdin/console.

Output Format
Insert the new node at the tail and just return the head of the updated linked list. Do NOT print anything to stdout/console.


*/

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
  Node *current = head;  
  Node *node = new Node();
  node->data = data;
  node->next = NULL;
  
  if(head == NULL){
      return node;
  }
  
  while(current->next != NULL){
      current = current->next;
  }
  
  current->next = node;
  return head;
  
}

