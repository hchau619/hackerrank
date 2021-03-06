/*
Problem Statement

This challenge is part of a tutorial track by MyCodeSchool and is accompanied by a video lesson.

If you’re new to working with linked lists, this is a great exercise to get familiar with them. You’re given the pointer to the head node of a linked list and you need to print all its elements in order, one element per line. The head pointer may be null, i.e., it may be an empty list. In that case, don’t print anything!

Input Format
You have to complete the void Print(Node* head) method which takes one argument - the head of the linked list. You should NOT read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Output Format
Print the elements of the linked list to stdout/console (using printf or cout) , one per line.

Sample Input

NULL  
1->2->3->NULL

Sample Output

1
2
3

Explanation

For first case, an empty list is passed to the method. So nothing is printed. For second case, 
all the elements of the linked list (1, 2 and 3) are printed in separate lines. 
*/
/*******************************************************************************************/
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
  if(head == NULL){
    return;
  }
  
  Node *current = head;
    
  cout << current->data << endl;
  while(current->next != NULL){
    current = current->next;
    cout << current->data << endl;
  }
  
    
}

