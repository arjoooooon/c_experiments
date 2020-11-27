#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	if(argc != 2){
		printf("Numerical input required\n");
		return 1;
	}
	
	uint8_t number = atoi(argv[1]);
	char rValue[9];
    rValue[8] = '\0';

    for(int iter = 7; iter >= 0; iter--){
        int ans = number & (1 << iter);
        if(ans == 0){
            rValue[7-iter] = '0';
        } else {
            rValue[7 - iter] = '1';
        }
    }

    printf("%s\n", rValue);

	return 0;
}
