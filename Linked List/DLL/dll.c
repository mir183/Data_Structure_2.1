#include <stdio.h>
#include <stdlib.h>
int choice;
struct node *head = NULL;

struct node {
    int data;
    char cdata;
    struct node *next;
    struct node *prev;
};

int option() {
    printf("\n");
    printf("\n1. Insert at first");
    printf("\n2. Insert at last");
    printf("\n3. Display");
    printf("\n4. Random Insert");
    printf("\n5. Search");
    printf("\n6. Delete first node");
    printf("\n7. Delete last node");
    printf("\n8. Delete specific node");
    printf("\n9. EXIT>>>>>>>>>>>>");
    printf("\nEnter your choice: ");
}

int firstinsert(int item,char alpha){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->cdata=alpha;
    ptr->next=head;
    ptr->prev=NULL;
    if (head!=NULL) {
        head->prev=ptr;
    }
    head=ptr;
}

int lastinsert(int item,char alpha){
    struct node *temp;
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->cdata=alpha;
    ptr->next=NULL;
    ptr->prev=NULL;
    if (head==NULL) {
        head=ptr;
    }
    else{
        temp=head;
        while(temp->next!=NULL) {
            temp =temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
    printf("\nNode inserted");
}


int randominsert(int item,char alpha){
    int i,loc;
    struct node *temp;
    temp=head;
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->cdata=alpha;
    printf("Enter the location: ");
    scanf("%d",&loc);
    for (i=0;i<loc-2;i++) {
        temp=temp->next;
    }
    ptr->next=temp->next;
    if (temp->next!=NULL) {
        temp->next->prev=ptr;
    }
    ptr->prev=temp;
    temp->next=ptr;
    printf("\nNode inserted");
}

int display() {
    printf("DLL: ");
    struct node *ptr=head;
    while (ptr!=NULL) {
        printf("(%d, %c) ",ptr->data,ptr->cdata);
        ptr=ptr->next;
    }
    printf("\n");
}

int search(int srcv){
    int flag=0;
    struct node*temp=head;
    while(temp!=NULL) {
        if(temp->data==srcv){
            flag = 1;
            break;
        } 
        else{
            flag = 0;
        }
        temp= temp->next;
    }
    if(flag>0) {
        printf("Node Found\n");
    }
    else{
        printf("Node does not exist\n");
    }
}

int firstdel(){
    struct node *ptr=head;
    head=ptr->next;
    if (head!=NULL) {
        head->prev=NULL;
    }
    free(ptr);
    printf("Node deleted\n");
}

int lastdel(){
    struct node *ptr,*ptr1;
    ptr=head;
    ptr1=NULL;
    if(head==NULL){
        printf("List is empty\n");
    }
    else if(head->next==NULL){
        head=NULL;
        free(head);
        printf("Only one node deleted\n");
    }
    else{
        while(ptr->next!=NULL){
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);
        printf("The last node has been deleted\n");
    }
}

int specfdel(int loc) {
    struct node *ptr,*ptr1;
    ptr=head;
    ptr1=NULL;
    for (int i=1;i<loc;i++){
        ptr1=ptr;
        ptr=ptr->next;
        if(head==NULL){
            printf("List is empty\n");
            break;
        }
    }
    ptr1->next=ptr->next;
    if(ptr->next!= NULL){
        ptr->next->prev=ptr1;
    }
    free(ptr);
    printf("Node deleted\n");
}

int main() {
    printf("An empty Doubly Linked List has been created.\n");
    while(1){
        option();
        scanf("%d",&choice);
        if (choice==1){
            int item;
            char alpha;
            printf("Enter integer data: ");
            scanf("%d",&item);
            printf("Enter character data: ");
            scanf(" %c",&alpha);
            firstinsert(item,alpha);
        }
        else if(choice==2){
            int item;
            char alpha;
            printf("Enter integer data: ");
            scanf("%d",&item);
            printf("Enter character data: ");
            scanf(" %c",&alpha);
            lastinsert(item,alpha);
        }
        else if(choice==3){
            display();
        }
        else if(choice==4){
            int item;
            char alpha;
            printf("Enter integer data: ");
            scanf("%d",&item);
            printf("Enter character data: ");
            scanf(" %c",&alpha);
            randominsert(item, alpha);
        }
        else if(choice==5){
            int srcv;
            printf("Enter value to search: ");
            scanf("%d",&srcv);
            search(srcv);
        }
        else if(choice==6){
            firstdel();
        }
        else if(choice==7){
            lastdel();
        }
        else if(choice == 8){
            int loc;
            printf("Enter the position to delete: ");
            scanf("%d",&loc);
            specfdel(loc);
        }
        else if(choice==9){
            break;
        }
    }
}
