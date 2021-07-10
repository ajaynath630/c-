#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr,a,*ptr1,n;
    // a=5;
    // ptr=&a;
    // printf("heloow world %d %p",*ptr,ptr);
    printf("enter number");
    scanf("%d",&n);
    ptr1=(int*) malloc(n*sizeof(int));

    printf("enter num");
    for (int i=0;i<=n;i++)  {
    scanf("%d",&ptr1[i]);

    }
    for (int i=0;i<=n;i++)  {
    printf("%d",*(ptr1+i));
    free (ptr1);
    }


}