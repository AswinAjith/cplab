#include<stdio.h>
int main()
{ int i,j,a[100][100],b[100][100],r,c,count=0;
   printf("enter number of row and column\n");
   scanf("%d%d",&r,&c);
   if(r!=c)
   {
       printf("cant find symetry");
       
   }
   else
   {
      
   for(i=0;i<r;++i)
   {
       for(j=0;j<c;++j)
       {
           printf("enter element a%d%d:\n",i,j);
          scanf("%d",&a[i][j]);
       }
       
   }
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("element a%d%d=%d\n",i,j,a[i][j]);
          
       }
   }
   for(i=0;i<c;i++)
   {
       for(j=0;j<r;j++)
       {
           b[i][j]=a[j][i];
          
       }
   }
   for(i=0;i<c;i++)
   {
       for(j=0;j<r;j++)
       {
          printf("element b%d%d=%d\n",i,j,b[i][j]);
          
       }
   }
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if (a[i][j]!=b[i][j])
           {
               count++;
               break;
           }
       }
   }
   if(count==0)
   {
       printf("symetry");
   }
   else
   {
       printf("not");
   }
   }
}
