#include<stdio.h>
int main(){
	int iNum,nSum,nSum2;
				for( iNum=2,nSum=0,nSum2=0;iNum <=20;iNum=iNum +2)
					nSum=nSum+iNum;
					nSum2=nSum2 +iNum *iNum;
	          			printf("\n Sum of the first 20 natual numbers=%d ",nSum);
	          			
	          			printf("\nSum of the square for the first 20 even natural numbers= %d",nSum2);
}

