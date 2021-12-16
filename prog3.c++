#include <iostream>
#include <list>
#include <iterator>
using namespace std;
//function for printing the elements in a list
void showlist(list <int> g)
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << '\t' << *it;

}
int main()

{
 cout<<"entrer les elements de votre liste :"<<endl;    
list <int> gqlist1;
for (int i = 0; i < 10; ++i)
   

{
   
    cin>>i;// entrer les elements de la liste
gqlist1.push_back(i * 1);
}


cout << "c'est votre list : "<<endl;//affichage de la liste 


showlist(gqlist1);

cout << "\nvotre liste triee est : "<<endl;
gqlist1.pop_front();//TRI LES ELEMENTS CROISSANTE
showlist(gqlist1);

return 0;
}