// But:
// Auteur:
// Date:







#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int iRandom;
	// permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0));
	// pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	// La variable qui sera entrée par l'utilisateur
	int valeur;

	// on doit créer une boucle qui aura une limite, la fonction for est la mieux adapté à cela
	
	// à l'intérieur du for, on initialise un compteur et on lui donne une limite de 5 fois
	for (int compteur = 1; compteur <= 5; compteur++)
	{
		// on demande ici à l'utilisateur d'entrer la valeur qui sera vérifiée
		cout << " Bienvenue, vous avez 5 chances pour déterminer si votre chiffre est un des chiffres choisi par l'algorithme : " << endl;
		cin >> valeur;

		// Si la valeur entrée par l'utilisateur est la bonne, il a gagné
		if (valeur == iRandom)
		{
			cout << "Vous avez gagné!";
			// Le programme indique le nombre d'essais que l'utilisateur avait encore pour deviner la valeur de iRandom
			cout << " Vous aviez toujours " <<  ( 5- compteur) << " essais, félicitations!!"<<endl;

		}
		else
		{
			// Si l'utilisateur entre une valeur plus grande, le programme le lui indique avec son nombre d'essais restant
			if (valeur > iRandom)
			{
				cout << "Vous avez perdu, le nombre aléatoire est inférieur au vôtre." << endl;
				cout << " Il vous reste " << (5- compteur) << " essais!" << endl;
			}
			// Si l'utilisateur entre une valeur plus petite, le programme le lui indique avec son nombre d'essais restant
			else
			{
				cout << "Vous avez perdu, le nombre aléatoire est supérieur au vôtre." << endl;
				cout << " Il vous reste " << (5 - compteur) << " essais!" << endl;
			}


		}



	}


	return 0;// fin du programme
}

/* Plan de test?             *** Je ne comprends pas comment faire un plan de test pour ce programme
* 






*/

