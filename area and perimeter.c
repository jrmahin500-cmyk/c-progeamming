#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,perimeter,area;
printf("enter the three sides of the triangle : ");
scanf("%f %f %f", &a,&b,&c);




perimeter =a+b+c;
s=a+b+c/2;
area =sqrt(s*(s-a)*(s-b)*(s-c));
printf("perimeter =%.2f\n",perimeter);
printf("area = %.2f\n",area);
return 0;	
		
}