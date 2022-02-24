#include<stdio.h>
#include<math.h>
#define BASE_SALARY 1500.0
#define BONUS_RATE 200.00
#define COMMISSION 0.02
int main(){
		int quantity;
		float gross_salary,price;
		float bonus,commisssion;
		
		printf("Enter number sold and price\n");
		scanf("%d %f",&quantity,&price);
		
		bonus=BONUS_RATE *quantity;
		commission=COMMISSION * quantity*price;
		gross_salary=BASE_SALARY * bonus +commission;
		
		printf("\n");
		printf("Bonus   =%6.2f")	
}
