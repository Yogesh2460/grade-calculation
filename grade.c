#include<stdio.h>
int main()
{
    int  m;
    printf("Enter marks: ");
    scanf("%d",&m); 
    if((m>85)&&(m<=100))
        printf("\nGrade : A");
    else if((m>70)&&(m<=84))
        printf("\nGrade : B");
    else if((m>55)&&(m<=69))
        printf("\nGrade : C");
    else if((m>=40)&&(m<=54))
        printf("\nGrade : D");
    else
        printf("\nGrade : Fail");

    return 0;
}
