#include <stdio.h>
#include "mylib.h"

int main(void){
	int a =3, b=5;

	printf("(initial) a=%d, b=%d\n",a,b);

	swap(&a,&b);
	printf("(swapped) a=%d, b=%d\n",a,b);
	
	printf("(subtract) a-b = %d - %d = %d\n"a,b,subtract(a,b);
	return 0;


}
