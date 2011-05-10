#include <stdio.h>
void hanoi(char a,char b,char c, int n);
static int count;
int main(int argc, const char *argv[])
{
    int n = 0;
    
    printf("Please input a number:\n");
    scanf("%d",&n);
    count=0;

    hanoi('A','B','C',n);
    printf("累计次数为:%d\n",count);

    return 0;
}


void hanoi(char a,char b,char c, int n)
{
    count++;
    if(n==1)
    {
       printf("%c---->%c\n",a,c);
       return;
    }
    hanoi(a,c,b,n-1);
    printf("%c---->%c\n",a,c);
    hanoi(b,a,c,n-1);
}
