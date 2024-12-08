#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	if(argc != 3){
		printf("Incorrect number of arguments\n");
		return 1;
	}
	int a = atoi(argv[1]), b = atoi(argv[2]);	
	printf("a = %i, b = %i\n",a,b);
	printf("a = %x, b = %x\n",a,b);
	bool aSign = (a < 0);
	bool BSign = (b < 0);
	return 0;
}
