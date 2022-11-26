#include<stdio.h>

main(){
	
	int sum = 0;
	int n;
	int firstDigit;
	int lastDigit;
	
		printf("Enter the number:- ");
		scanf ("%d",&n);
		
		lastDigit = n%10;
		
	//	12345 % 10 = 5
		
	while(n>=10){
	
		n = n / 10;
		
	/*	12345 / 10 => 1234
		
		1234 / 10 => 123
		
		123 / 10 => 12
		
		12 / 10 => 1 
	*/	
		 
		
	}
		firstDigit= n;
		
		sum = firstDigit + lastDigit;
	
	printf("%d",sum);
}
