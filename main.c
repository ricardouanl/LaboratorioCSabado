#include<stdio.h>

int main(int argc, char *argv[]) {
	int num, sum;
	char more;
	sum = 0;

	while(more != 'n'){
		printf("Introduzca un numero entero: ");
		scanf("%d", num);
		sum = sum + num;
		printf("Desea introducir otro(s/n)?: ");
		scanf("%c", &more);
	}

	printf("La suma de los numeros introducidos es: %d", sum);

	return 0;
}
