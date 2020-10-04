//But :D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//     affiche son salaire. Entrez - 1 � la valeur des ventes pour quitter le programme.
//Auteur : Jonathan Carrier
//Date : 

/*Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
repr�sentants re�oivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire. Entrez -1 � la valeur des ventes pour quitter le programme.
*/

#include <iostream>          // on ajoute une biblioth�que
using namespace std;         // permet d'�viter les std::

int main()                  // indique un panneau d'instructions
{
	setlocale(LC_ALL, ""); // Permet d'utilis� les caract�res accentu�s


	const int SEMAINE = 250;         // Le salaire est une constante modifiable dans le futur
	const float COMISSION = 7.5 / 100; // la comission est une constante modifiable dans le futur
	const int NEG = -1; // si le futur programmeur d�cide de changer les param�tres


	float vente;           // La valeur qui sera entr�e par l'utilisateur , float pour permettre d'entr� des d�cimales
	float salaire;       // la valeur qui sera indiqu�e par le programme, float pour permettre d'entr� des d�cimales

	// Le programme demande � l'utilisateur d'entr�e une valeur

	cout << " Veuillez entrer le montant de vos ventes pour la semaine" << endl;

	/// On indique � l'utilisateur la valeur � entr� pour quitter le programme

	cout << " Pour quitter le programme entrez la valeur -1"<< endl;
	// L'utilisateur entre une valeur

	cin >> vente;



	while (vente !=  NEG && vente >= 0)  // La boucle while pour permettre � l'utilisateur de r�-entr� une autre valeur
	{
		// Le calcul qui d�termine le salaire de l'utilisateur
		salaire = SEMAINE + (vente * COMISSION);

		// Le programme indique � l'utilisateur son salaire
		cout << " Votre salaire consistera de " << salaire << " dollars canadiens." << endl;

		// Le programme est pr�t � demander une autre valeur � l'utilisateur
		cout << " Veuillez entrer le montant de vos ventes pour la semaine" << endl;
		
		cin >> vente;
		
		cout << " Pour quitter le programme entrez la valeur -1" << endl;


	}
	// pour la fonction de quitter
	
	if (vente == NEG)
{

	   cout << "Merci d'avoir utilis� le programme de d�termination de salaire" << endl;
	 

}
	// Nous pr�voyons une mauvaise semaine o� l'utilisateur ne vendra aucun produit chimique


	if (vente <= -2)
	{
		cout << " Merci d'entr� un nombre positif, il vous est impossible de faire une quantit� n�gative de ventes" << endl;

		cin >> vente; 
			
			while (vente != -1 && vente >= 0)  // La boucle while pour permettre � l'utilisateur de r�-entr� une autre valeur
			{
				// Le calcul qui d�termine le salaire de l'utilisateur
				salaire = SEMAINE + (vente * COMISSION);

				// Le programme indique � l'utilisateur son salaire
				cout << " Votre salaire consistera de " << salaire << " dollars canadiens." << endl;

				// Le programme est pr�t � demander une autre valeur � l'utilisateur
				cout << " Veuillez entrer le montant de vos ventes pour la semaine" << endl;

				cin >> vente;
				
				cout << " Pour quitter le programme entrez la valeur -1" << endl;


			}

	}
	


	// fin du programme

	return 0;
}




/* PLAN DE TESTS                        vente                       TOTAL       

                                         5000                         625 $
                                         1000                         325 $ 
                                         -1                           quitte 
										 -100                         veuillez entrer un nombre positif
										 1 000 000                    75 250 $


*/