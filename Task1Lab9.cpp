#include<stdio.h>
float calculatediscount(float amount,char membership){
	float rate;
	if(membership=='P'|| membership=='p'){
		rate=20;
	}
	else if(membership=='G'|| membership=='g'){
		rate=10;
	}
	else{
		rate=5;
	}
	if(amount>10000){
		rate=rate+2;
	}
	return amount*rate/100;
}
float calculatefinalbill(float discountedamount){
	float tax,shipping,finalbill;
	tax=discountedamount*15/100;
	if(discountedamount<=5000){
		shipping=300;
	}
	else{
		shipping=0;
	}
	finalbill=discountedamount+tax+shipping;
	return finalbill;
}
int main(){
	float amount,discount,discountedamount,finalbill;
	char membership;
	printf("Enter shopping amount in PKR: ");
	scanf("%f",&amount);
	printf("Enter membership type(P/G/S): ");
	scanf("  %c",&membership);
	if(membership!='P'&& membership!='p' && membership!='G'&& membership!='g'&&
	membership!='S'&& membership!='s'){
		printf("Invalid membership type!\n");
		return 0;
	}
	discount=calculatediscount(amount,membership);
	discountedamount=amount-discount;
	finalbill=calculatefinalbill(discountedamount);
	
	printf("\nOriginal Amount :%.2f",amount);
	printf("\nDiscount :%.2f",discount);
	printf("\nDiscounted Amount :%.2f",discountedamount);
	printf("\nFinal Payable Amount :%.2f",finalbill);
	
	return 0;
}
