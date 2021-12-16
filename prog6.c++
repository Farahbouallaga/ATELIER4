#include <iostream> 
using namespace std; 
class Test{ 
public:
 static int tableau[] ; 
public :
 static int division(int indice, int diviseur){ 
 return tableau[indice]/diviseur; 
 }
 static int multiplication(int indice, int indice2)// les 3 fonctions ajouter 
 { 
 return tableau[indice]*tableau[indice2]; 
 }
  static int somme(int indice, int indice2){ 
 return tableau[indice]+tableau[indice2]; 
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() 
{ 
 int x, y; 
 cout << "Entrez l’indice de l’entier à diviser: " << endl; 
 cin >> x ;
cout << "Entrez le diviseur: " << endl; 
 cin >> y ;
 cout << "Le résultat de la division est: "<< endl; 
 cout <<Test::division(x,y) << endl; 
 cout<<"entrer l'indice de l'entier a multiplier: "<<endl;//la partie d'affichage ajouter dans int main
 cin>>x;
 cout<<"entrer l'indice de 2eme entier a muliplier: "<<endl;
 cin>>y;
 cout<<"le resultat de multiplication est: "<<endl;
 cout<<Test::multiplication(x,y) << endl; 
 cout<<"entrer l'indice de 1ER entier : "<<endl;
 cin>>x;
 cout<<"entrer l'indice de 2eme entier: "<<endl;
 cin>>y;
 cout<<"le resultat de la somme est: "<<endl;
 cout<<Test::somme(x,y) << endl; 

 return 0; 
}