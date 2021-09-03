#include <stdio.h>

int prime (int);		//Function Declaration

int main () {
	int p;
	printf ("Enter the number for check prime or not\n");
	scanf ("%d",&p);
	prime (p);			//Function Calling
}

int prime (int x) {		//Function Definition
	int i;
	char flag = 0;
	
	for (i = 2; i <= x - 1; i++) {
		if (x % i == 0) {
			flag++;
			break;
		}
	}
	if (flag == 0) {
		printf ("%d Is Prime Number\n",x);
	}
	else{
		printf ("%d Is Not Prime Number\n",x);
	} 
}
