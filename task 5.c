#include<stdio.h>

main(){
	
	int factorial = 1;
	int n;
	int a = 1;
	
	
		printf("Enter the number:- ");
		scanf ("%d",&n);
		
	while(a<=n){
	
		factorial = factorial * a;
		
		a++;
		
	
	}
	
	printf("%d",factorial);
}
