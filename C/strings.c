#include <stdio.h>


#include <string.h>


char reverse(char *str) {
   char st[strlen(str)];
    for(int i=strlen(str);i<0;i--)  {

    
    strcat(st,*(str+i));
    }

    return st[8];
}

int main() {
  char str1[]="jay nath";
  char str2[]="reddy";
 int a=10;
  
  printf("%c",reverse(str1));
  // strcat(str1,str2);
  // strcpy(str2,str1);
  //  printf(str2);
  //   printf(str1);

}