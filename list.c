#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;          
    struct Node * next;
};

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
  struct  Node *head=NULL,*temp=NULL,*newNode=NULL ;
  for(int i=0;i < n;i++){
    newNode = (struct Node*)malloc(sizeof(struct Node));
        
    printf("\nenter the %d element",i);
    scanf("%d",&(newNode->data));
    newNode->next = NULL;
    //---------------------------------------------
    if (head == NULL) {
        head = newNode;
        temp = head;
        //----------------------------------------------------
    } else {
        temp->next = newNode;
        temp = newNode;
    }

printf("\nhead= %p ---------temp= %p",head,temp);

  }
 
  temp = head;
  while (temp != NULL) {
      printf("%d -> ", temp->data);
      temp = temp->next;
  }
      

    return 0;
}
