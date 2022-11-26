#include<stdio.h>

main(){
	
	int count = 0;
	int n;
	
	
		printf("Enter the number:- ");
		scanf ("%d",&n);
		
	while(n>0){
	
		n = n / 10;
		
		
		
		
		count++;
		
	
	}
	
	printf("%d",count);
}
