#include <stdio.h>

int main(){
		
	char vetor[100];

	vetor[0] = 'a';

	vetor[1] = 'b';

	vetor[2] = '\0';

	vetor[0] = '\0';

	// vetor[0] = '\0';

	strcat(vetor, "caraca");

	printf("%s\n", vetor);

	return 0;
}