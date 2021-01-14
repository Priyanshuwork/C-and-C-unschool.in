#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct employee
{
    char name[100];
    char id[20];
    int experience;
    float salary;
};
int main()
{
    int i=0,n=5;
   struct employee e1[n];
   for(i=0;i<5;i++){
   printf("\nName of the Employee: ");
   scanf("%s",e1[i].name);
   printf("\nID is: ");
   scanf("%s",e1[i].id);
   printf("\nExperience is: ");
   scanf("%d",&e1[i].experience);
   printf("\nSalary is: ");
   scanf("%f",&e1[i].salary);}
   printf(">>>>>>>>>>>>>>>>>>>>>>>Details<<<<<<<<<<<<<<<<<<<<<<<<");
   printf("\nName: ID is: Experience is: Salary is:\n");
   for(i=0;i<5;i++){
   printf("%s\t %s\t %d\t %f\n\n",e1[i].name,e1[i].id,e1[i].experience,e1[i].salary);}
    return 0;
}
