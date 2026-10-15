# include <stdio.h>
int main(){
int sum=0;
int i;
for(i=1;i<=100;i++) {
if(i%2==1){
    sum+=i;
    }
}
printf("%d\n",sum);
return 0;
}
