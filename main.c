#include <stdlib.h>
#include <stdio.h>

int main(){
	double nb1;
	double nb2;
	char symbole;
	double resultat;

	printf("Choisissez un opérateur (+, -, *, /, %%)\n");
	scanf("%c", &symbole);
	printf("Choisissez un premier nombre\n");
	scanf("%lf", &nb1);
	printf("Choisissez un second nombre\n");
	scanf("%lf", &nb2);
	
	if(symbole == '+'){
		resultat = nb1 + nb2;
	}
	else if(symbole == '-'){
		resultat = nb1 - nb2;
	}
	else if(symbole == '*'){
		resultat = nb1 * nb2;
	}
	else if(symbole == '/'){
		resultat = nb1 / nb2;
	}
	else if(symbole == '%'){
		resultat =(int)  nb1 % (int) nb2;
	}
	else{
		printf("Symbole inconnue");
	}
	printf("%.2f %c %.2f = %.2f\n", nb1, symbole, nb2, resultat);
	return(0);
}
