#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    printf("The sides are %d %d %d \n",a,b,c);
    if(a==b && b==c){
      printf("Equilateral triangle");
    }
    else if(a==b || b==c || c==a){
      printf("Isosceles traingle");  
    }
    else{
        printf("Scalene triangle");
    }
    return 0;
}
