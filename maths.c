
#include<stdio.h>
#include<math.h>
void main(){
			double a,b,c,x1,x2;
			printf("Enter a,b,c");
			scanf("%d %d %d",&a,&b,&c);
			x1=(double)(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(double)(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("Hey the answer is X1=%lf X2=%lf",x1,x2);
}
