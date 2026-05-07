#include <stdio.h>


/* Have an encrypted flag 
	xor'd with a certain value
	asks the user for a string 
	they have to give enough to overwrite the value on the stack 
	meaning it has to be scanf
	then use the int, decrypt and see if its right
*/
char flag[] = {83, 69, 95, 117, 76, 69, 95, 68, 78, 117, 71, 79, 11, 32};


int main(int argc, char** argv) { 
	char usrinput[8];
	int decrypt = 8;
	for(int i = 0; i<8; i++) {
		usrinput[i] = 0;
	}
	printf("How do you break this program?\n");
	scanf("%s", &usrinput);
	if(decrypt != 42) {
		printf("Not like that...\n");
	} else {
		for(int i = 0; i<14; i++) {
			flag[i] = flag[i] ^ decrypt;
			flag[i] = flag[i] ^ decrypt;
			printf("%c", flag[i]^decrypt);
		}
	}

}