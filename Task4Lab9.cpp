#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int multiply(int a,int b){
	return a*b;
}
int findmax(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int compute(int a,int b,int(*operation)(int,int)){
	return operation(a,b);
}
int main(){
	int num1,num2;
	int sum,product,max;
	printf("Enter two integers: ");
	scanf("%d%d",&num1,&num2);
	sum=compute(num1,num2,add);
	product=compute(num1,num2,multiply);
	max=compute(num1,num2,findmax);
	
	printf("Sum=%d\n",sum);
	printf("Product=%d\n",product);
	printf("Maximum=%d\n",max);
	return 0;
}
