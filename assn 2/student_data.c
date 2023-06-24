#include <stdio.h>
#include <string.h>
struct Student{
     char name[20];
     int roll;
     float cgpa;
 };

int main()
{
  int i;
  int n=0;
  printf("Enter Number of Students: ");
  scanf("%d",&n);
  struct Student s[n];
  for(i=0;i<n;i++){
      printf("\nEnter Name:");
      scanf("%s",&s[i].name);
      printf("\nEnter roll:");
      scanf("%d",&s[i].roll);
      printf("\nEnter cgpa:");
      scanf("%f",&s[i].cgpa);

  }
for(int i = 1; i <= n; i++)
{
 printf("Name of student %d is: %s\n",i,s[i].name );
 printf("Roll number of student %d is: %d\n",i,s[i].roll );
 printf("CGPA of student %d is: %f\n",i,s[i].cgpa );

}
return 0;
}
