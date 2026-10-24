#include<stdio.h>
void withdraw(float *balance,float amount){
	if(amount <= *balance){
		*balance=*balance-amount;
		printf("Withdrawal Successful\n");
	}
	else{
		printf("Transaction Declined:Insufficient Balance\n");
	}
}
void deposit(float *balance,float amount){
	*balance=*balance+amount;
	printf("Deposit Successful\n");
	printf("Updated Balance:%.2f",*balance);
}
int main(){
	float balance=10000;
	float amount;
	int choice;
	printf("Initial Account Balance:%.2f\n",balance);
	printf("Select Transaction Type:\n ");
	printf("1.Debit(Withdraw)\n");
	printf("2.Credit(Deposit)\n");
	printf("Select your choice\n");
	scanf("%d",&choice);
	printf("Enter your amount in PKR: ");
	scanf("%f",&amount);
	if(amount<=0){
		printf("Invalid Amount\n");
	}
	else if (choice==1){
		withdraw(&balance,amount);
	}
	else if (choice==2){
		deposit(&balance,amount);
	}
	else{
		printf("Invalid Transaction Type\n");
	}
	printf("Final Account Balance:%.2f\n",balance);
	return 0;
	
	
}
