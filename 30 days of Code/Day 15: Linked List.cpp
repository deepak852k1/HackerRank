

      Node* insert(Node *head,int data)
      {
          Node** pp = &head; 
  while(*pp)
     pp = &((*pp)->next); 
     *pp = new Node(data); 
     return head;

          
      }

