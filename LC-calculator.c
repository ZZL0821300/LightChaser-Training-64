#include <stdio.h>
int main(){
double num1,num2,result;
char op;

printf("Enter a calculation,for example(1+1)\n");
while(scanf("%lf %c %lf",&num1,&op,&num2)!=3){
printf("Invalid input,please try again.\n");
while (getchar()!='\n');
}

switch (op)
{case '+':
result=num1+num2;
printf("%.2f+%.2f=%.2f\n",num1,num2,result);
break;

case'-':
result=num1-num2;
printf("%.2f-%.2f=%.2f\n",num1,num2,result);
break;

case'*':
result=num1*num2;
printf("%.2f*%.2f=%.2f\n",num1,num2,result);
break;

case'/':
if(num2==0)
printf("The divisor cannot be 0\n");

else{
    result=num1/num2;
    printf("%.2f/%.2f=%.2f",num1,num2,result);
}
    break;
default:
printf("invalid operator\n");
break;

}
return 0;
}
