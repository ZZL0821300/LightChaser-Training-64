#include <stdio.h>
#include <stdlib.h>

int main(){
int *a;
int n;
int sum=0;
int i;
double average=0.0;

printf("how many numbers in total");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));

printf("please enter%dnumbers\n",n);
for(i=0;i<=n-1;i++){
    
    scanf("%d",&a[i]);
   
sum+=a[i];

}

average=(double)sum/n;

printf("the %d nummbers'average is%.2f\n",n,average);

free(a);
a=NULL;

return 0;

}