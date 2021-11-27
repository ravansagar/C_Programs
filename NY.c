#include <stdio.h>
void past(int ,int );
void future(int ,int );
int main()
{
	int y, ly, td, rem, d;
	printf("Enter the year: ");
	scanf("%d", &y);
	rem = y;
	ly = (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
	td = (y * 365) + ly;
	d = td % 7;
    if(y <= 2021)
	    past(d,rem);
	else
	    future(d,rem);
    return 0;
}
void past(int d,int rem){
    if (d == 0){
        printf("The 1st january of %d was on Sunday\n", rem);
    }
	else if (d == 1){
		printf("The 1st january of %d was on Monday\n", rem);
	}
	else if (d == 2){
		printf("The 1st january of %d was on Tuesday\n", rem);
	}
	else if (d == 3){
		printf("The 1st january of %d was on Wednesday\n", rem);
	}
	else if (d == 4){
		printf("The 1st january of %d was on Thursday\n", rem);
	}
	else if (d == 5){
		printf("The 1st january of %d was on Friday\n", rem);
	}
	else if (d == 6){
		printf("The 1st january of %d was on Saturday\n", rem);
	}	
}
void future(int d,int rem){
    if (d == 0){
    	printf("The 1st january of %d year will be on Sunday\n", rem);
    }
	else if (d == 1){
		printf("The 1st january of %d year will be on Monday\n", rem);
	}
	else if (d == 2){
		printf("The 1st january of %d will be on Tuesday\n", rem);
	}
	else if (d == 3){
		printf("The 1st january of %d will be on Wednesday\n", rem);
	}
	else if (d == 4){
		printf("The 1st january of %d will be on Thursday\n", rem);
	}
	else if (d == 5){
		printf("The 1st january of %d will be on Friday\n", rem);
	}
	else if (d == 6){
		printf("The 1st january of %d will be on Saturday\n", rem);
	}
}
