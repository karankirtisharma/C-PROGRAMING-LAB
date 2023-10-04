#include<stdio.h>
void main(){
    int n;
    printf("Program to find area and perimeter of circle,square and rectangle.\n");
    printf("Type 1 for circle, 2 for square, 3 for rectangle\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==1){
        printf("Enter radius of circle: ");
        float r;
        scanf("%f",&r);
        printf("Perimeter of circle is %.2f \nArea of  circle is %.2f",2*3.14*r,3.14*r*r);
    }
    else if(n==2){
        printf("Enter side of square: ");
        float s;
        scanf("%f",&s);
        printf("Perimeter of square is %.2f \nArea of square is %.2f",4*s,s*s);
    }
    else if(n==3){
        float l,b;
        printf("Enter length of rectangle: ");
        scanf("%f",&l);
        printf("Enter breadth of rectangle: ");
        scanf("%f",&b);
        printf("Perimeter of rectangle is %.2f \nArea of rectangle is %.2f",2*(l+b),l*b);
    }
}
        
        
    
    
