/* struct Node{
    int data;
    Node *next;
}
*/

void reverseList(Node **head){
  Node *cur, *prev, *nxt;
  cur = *head;
  prev = nxt = NULL;
  while(cur){
    nxt = cur->next;
    cur->next = prev;
    prev = cur;
    cur = nxt;
  }
  *head = prev;
}
