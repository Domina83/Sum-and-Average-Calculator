
#include<stdio.h>
int main()
{
   int marks[5];
   int i=0;
   float avg=0.0;
   int sum=0;
   printf("Enter the marks of 5 subjects\n:");
   for(i=0;i<5;i++)
}
   {
    scanf("%d",&marks[i]);
   }
   for(i=0;i<5;i++)
   {
    sum = sum+marks[i];
   }
   avg=sum/5.0;
   printf("\nThe sum is %d",sum);
   printf("\nThe average is %f",avg);
{
   if(avg>=90)
    {
    printf("\nGrade='S'");
}
   else if(avg>=70)
    {
    printf("\nGrade='A'");
}
   else if(avg>=60)
   {
       printf("\nGrade='B'");
   }
   else if(avg>=50)
   {
        printf("\nGrade='C'");
   }
   else
       printf("\nGrade='F'");
   }
}
