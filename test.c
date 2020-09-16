#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(int argc, char** argv){

	srand(time(NULL));
	printf("%d\n",rand()%100);
	printf("%d\n",rand()%100);
	//20201016 1058

	return 0;
}
