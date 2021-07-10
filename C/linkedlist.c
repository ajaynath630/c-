#include<stdio.h>
#include<stdlib.h>
struct node {
    int val;
    struct node* next;
};

struct node* list=NULL;

int create() {
struct node *n=(struct node*)malloc(sizeof(struct node));

if (n==NULL) {
    return 1;
}

if (list==NULL) {
list=n;
printf("enter value");
scanf("%d",n->val);
n->next=NULL;
}

else  {
   

   while (list!=NULL) {
    
    printf("enter value");
    scanf("%d",n->val);
 
    list=list->next;
}

n->next=NULL;

}


}


int main() {

create();
create();
create();
create();
create();
create();
create();
create();
create();
free(list);
}
