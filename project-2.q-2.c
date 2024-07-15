#include<stdio.h>

main(){
	int score;
	
	
	printf("Enter Your Marks =");
	scanf("%d",&score);
	
	switch(score)
	{
		case 80 ... 100 :
		printf("Your Grade is A. Excellent work !");
		break;
		
		case 60 ... 79 :
		printf("Your Grade is B. Well Done. ");
		break;
		 
		case 50 ... 59 :
		printf("Your Grade is C. Good Job. ");
		break;
		
		case 33 ... 49 :
		printf("Your Grade is D. Your Passed, But You Could Do Better. ");
		break;
		
		case 1 ... 32 :
		printf("Your Grade is E. You Are Fail.");
		break;
		
		default :
			printf(" Enter Valid Marks.");
	}
}