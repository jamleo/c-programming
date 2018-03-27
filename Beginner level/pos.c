#include <stdio.h>
 
int main(void) {
	int i;
	printf("\nenter a number");
	scanf("%d",&i);
	if(i>0)
	printf("\npositive");
	else if(i==0)
	printf("\ninvalid(zero)");
	else
	printf("\nnegative");
 
 
 
	return 0;
	getch();
}
 
