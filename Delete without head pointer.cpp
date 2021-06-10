void deleteNode(Node *del)
    {
       // Your code here
       del->data = del->next->data;
       Node *temp = del->next;
       del->next = temp->next;
       free(temp);
    }
