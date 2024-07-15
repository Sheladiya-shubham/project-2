#include<stdio.h>

main(){
	int score;
	
	printf("Enter Your marks= ");
	scanf("%d",&score);
	
	if(score>=80 &&score<=100)
	{
		printf("Your grade is A. Excellent work! You are eligible for the next level.");
	}
	else if(score>=60 &&score<=79)
	{
		printf("Your grade is B. Well done! You are eligible for the next level.");
	}
	else if(score>=50 &&score<=59)
	{
		printf("Your grade is C. Good Job You are eligible for the next level.");
	}
	else if(score>=40 &&score<=49)
	{
		printf("Your grade is D. You Passed, but you could do better you are eligible for the next level.");
	}
	else if(score>=33 &&score<=39)
	{
		printf("Your grade is E. please try again next time.");
	}
	else
	{
		printf("You are Fail");
	}
}













