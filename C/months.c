#include <stdio.h>


void main() {

char*months[12]={"jan","feb","march","april","june","july","august","sept","oct","nov","dec"};

char**a=months+2;
printf("%c",**a);

unsigned int b=-10;
int c=5<<3;
printf("%d",c);

printf("%d",sizeof(long int));


}
