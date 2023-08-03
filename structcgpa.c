#include <stdio.h>
int main()
{
    int i,j,tempr,tempg,n;
    char tempn[50];
    float tempgp;
    printf("Enter the number of students");
    scanf("%d",&n);
    struct student{
        int rno;
        char name[50];
        char gender[50];
        float gpa;
    }s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the Roll No.");
        scanf("%d",&s[i].rno);
        printf("Enter the Name");
        scanf("%s",s[i].name);
        printf("Enter the Gender");
        scanf("%s",s[i].gender);
        printf("Enter the gpa");
        scanf("%f",&s[i].gpa);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(s[j].gpa>s[j+1].gpa)
            {
                tempr=s[j].rno;
                s[j].rno=s[j+1].rno;
                s[j+1].rno=tempr;
                strcpy(tempn,s[j].name);
                strcpy(s[j].name,s[j+1].name);
                strcpy(s[j+1].name,tempn);
                strcpy(tempg,s[j].gender);
                strcpy(s[j].gender,s[j+1].gender);
                strcpy(s[j+1].gender,tempg);
                tempgp=s[j].gpa;
                s[j].gpa=s[j+1].gpa;
                s[j+1].gpa=tempgp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d \t %s \t %c \t %f",s[i].rno,s[i].name,s[i].gender,s[i].gpa);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(s[i].gpa<7.0)
        {
            printf("%d \t %s \t %c \t %f",s[i].rno,s[i].name,s[i].gender,s[i].gpa);
        printf("\n");
        }
    }
    return 0;
}
