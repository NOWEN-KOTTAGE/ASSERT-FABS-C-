#include<stdio.h>
#include<assert.h>
#include<math.h>
float calcAnnualIntrest(float interestRate, float amount);
float findTotalAmount(float intrestRate, float amount);
void testTotalAmount();
int main(void){
	
	float ir,amt;
	printf("Enter the intrest rate : ");
	scanf("%f",&ir);
	printf("Enter the amount : ");
	scanf("%f",&amt);
   	for (int i = 1 ; i <= 5 ; i++)
	{
		float total = findTotalAmount(ir,amt);
		
		printf("Amount after year %d : %.2f\n" , i , total);
		
		float amount = total;
	}
	testTotalAmount();
	
	return 0;
}
float calcAnnualIntrest(float interestRate,float amount){
float intrest;
if(amount>1000000.00){
	float annualinterest=(amount*interestRate/100);
	float additionalintrest=(amount*0.5/100);	
	return intrest=additionalintrest+annualinterest;
}
else{
	float intrest=(amount*interestRate/100);
}
}
float findTotalAmount(float interestRate, float amount){
	 interestRate=calcAnnualIntrest(interestRate,amount);
	return interestRate+amount;
}
void testTotalAmount()
{
	assert(fabs(findTotalAmount(10 , 10000) - 11000) < 0.01);
	assert(fabs(findTotalAmount(10 , 2000000) - 2210000) < 0.01);
	
	printf("Unit tests passed()\n\n");
}
