#include <stdio.h>

int main()
{
    int y, ly, td, d;
    char days[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    printf("Enter the year: ");
    scanf("%d", &y);
    ly = (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
    td = (y * 365) + ly;
    d = td % 7;
    if(y <= 2024)
	printf("The 1st January of %d was on %s\n", y, days[d]);
    else
	printf("The 1st January of %d will be on %s\n", y, days[d]);
    return 0;
}
