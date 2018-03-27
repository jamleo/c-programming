
 #include <stdio.h>
 
int main(void) {
	int i;
	printf("\nenter a number");
	scanf("%d",&i);
	if(i>0&&i<100000)
	printf("\npositive");
	else if(i==0)
	printf("\ninvalid(zero)");
	else if(i<0)
	printf("\nnegative");
        else 
        printf("\ninvalid input");
 
 
 
	return 0;
	getch();
}
 
