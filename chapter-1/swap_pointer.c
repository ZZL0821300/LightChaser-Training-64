#include <stdio.h>
void swap (int *pa,int*pb);
int main (void){
    int a;int b;
    printf("please enter two numbers\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swap (int *pa,int*pb)
{
    int t =*pa;
    *pa=*pb;
    *pb=t;
}