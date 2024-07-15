#include<stdio.h>

main()
{
	int score;
	
	printf("Enter your marks =");
	scanf("%d",&score);
	
	(score>=80 && score<=100)?printf("Your Grade is A")
							:(score>70 && score<=79)?printf("Your Grade is B")
							:(score>60 && score<=69)?printf("Your Grade is C")
							:(score>51 && score<=59)?printf("Your Grade is D")
							:(score>40 && score<=50)?printf("Your Grade is E")
							:(score>33 && score<=39)?printf("Your Grade is f")
							:printf("You are is Fail");
}