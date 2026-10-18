#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int score;
};

int main(){
    int n;
    int i;
    printf("please enter the number of students:\n");
    scanf("%d",&n);
    struct student *students = (struct student *)malloc(n*sizeof(struct student));
    printf("\nplease enter the name and score for %d students:\n",n);
    for(i=0;i<n;i++){
        printf("student %d:",i+1);
        scanf("%s %d",students[i].name,&students[i].score);
    }
    printf("\n=============== student score ===============\n");
    printf("%-15s %-10s\n","name","score");
   
    for(i=0;i<n;i++){
        printf("%-15s %-10d\n",students[i].name,students[i].score);
    }

    free(students);
    students = NULL;

    return 0;
}
