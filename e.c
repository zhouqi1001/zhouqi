#include <stdio.h>
#include <string.h>
#define N 100

int main(int argc, const char *argv[])
{
    char str[N]="This is a C world!";
    char *p =str;
    char *s =str;
    printf("%s\n",str);
    getchar();

    while(*s !='\0')
    {
      while(*s==' ')s++;
      if (p !=s) 
      { 
          *p=*s;
      }
      p++;
      s++;
   }
   *p='\0';
   printf("len=%d\t%s\n",strlen(str),str);
   return 0;
}