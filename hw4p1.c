#include <stdio.h>
#include<stdlib.h>

char fileLetter;

/*int fmod(int x, int y) {
	while (x < 0) {
		x += y;
	}
	return x%y;
}*/
int ascii = 26;
char decrypt_fun(num, fileLetter) {
	FILE *inp;
	inp = fopen("encrypted.txt", "r");
		while(fscanf(inp, "%c", &fileLetter)!=EOF){
			int secretLetter = fileLetter;

			secretLetter = fileLetter + num;
			int fmod(secretLetter, ascii); {
				while (secretLetter < 0) {
					secretLetter += ascii;
				}
				return secretLetter % ascii;
			}
			printf("%c", secretLetter);
			fclose(inp);

		}
		printf("Decrypt complete\n");


}


int main(void) {
	int num;

	FILE *inp, *outp;

	inp = fopen("encrypted.txt", "r");
	if (inp == NULL) {
		printf("The input file does not exist\n");
	}
	outp = fopen("decrypted.txt", "w");
	if (outp == NULL) {
		printf("The output file does not exist\n");
	}
	printf("Please enter the key: ");
	scanf("%d", &num);

	char decrypt_fun(int shift, char letter);




}
//char decrypt fun(int shift, char letter);

//char encrypt fun(int shift, char letter);

/*int mod (int x, int y)f
while(x < 0)f
x+ = y;
g
return x%y;
g*/