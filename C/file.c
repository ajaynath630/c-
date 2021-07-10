#include <stdio.h>

void main()  {

FILE *fp;

char str[10]="ajay";

fp=fopen("first.txt","w");

fputs(str,fp);

fclose(fp);

}