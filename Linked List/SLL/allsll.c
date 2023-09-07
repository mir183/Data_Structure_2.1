#include <stdio.h>
#include <stdlib.h>
int item, choice;
struct node *head=NULL;

struct node{
    int data;
    struct node *next;
};

int option(){
    printf("\n");
        printf("\n1. Insert at first");
        printf("\n2. Insert at last");
        printf("\n3. Display");
        printf("\n4. Random Insert");
        printf("\n5. Search");
        printf("\n6. EXIT>>>>>>>>>>>>");
        printf("\nEnter your choice: ");
}

int firstinsert(int item){
    struct node *ptr=(struct node*)malloc(sizeof(struct node*));
    ptr -> data =item;
    ptr -> next =head;
    head=ptr;
}

int lastinsert(int item){
    struct node *temp;
    struct node *ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data =item;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }   
            temp->next=ptr;
            printf("\nNode inserted"); 
    }
    printf("\n");
}

int display(){
    printf("SLL: ");
    struct node *ptr=(struct node*)malloc(sizeof(struct node*));
    ptr=head;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int randominsert(int item){
    int i, loc;
    struct node *temp;
    temp=head;
    struct node *ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=item;
    printf("Enter the location: ");
    scanf("%d", &loc);
    for(i=0;i<loc-2;i++){
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    printf("\nNode inserted");

}

int src(srcv){
    int flag=0;
    struct node *temp= head;
    while(temp->next!=NULL){
        temp=temp -> next;
        if(temp->data==srcv){
            flag=1;
            break;
        }
        else{
            flag=flag;
        }

    }
            if(flag>0){
            printf("Node Found\n");
        }
        else{
            printf("Node does not exist\n");
        }

}

int main(){
    printf("An empty Singly Linked List has been created.\n");
    while(1){
        option();
        scanf("%d", &choice);
        if(choice==1){
            printf("Enter node data: ");
            scanf("%d", &item);
            firstinsert(item);
        }
        else if(choice ==2){
            printf("Enter node data: ");
            scanf("%d", &item);
            lastinsert(item);
        }
        else if(choice==3){
            display();
        }
        else if(choice==4){
            printf("Enter node data: ");
            scanf("%d", &item);
            randominsert(item);
        }
        else if(choice==5){
            int srcv;
            printf("Enter value to search: ");
            scanf("%d", &srcv);
            src(srcv);
        }
        else if(choice==6){
            break;
        }

    }

}