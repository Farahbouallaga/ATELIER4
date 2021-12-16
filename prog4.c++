#include <iostream>
#include <list>
using namespace std;
class Personne {
public :
string nom;
string prenom;
int age ;
int j;
int u;
public :
Personne(){
    cout<<"entrer votre nom ";
    cin>>nom;
    cout<<"entrer votre prenom ";
    cin>>prenom;
    cout<<"entrer votre age ";
    cin>>age;
    //cout<<nom<<" "<<prenom<<" "<<age<<endl;
}
};
int main()
{
list<Personne> data;
data.push_back(Personne());
list <Personne> dat;
dat.push_back(Personne());
std::list<Personne>::iterator it;
for (it = data.begin(); it != data.end(); ++it){
std::cout << it->nom<<" ";
std::cout << it->prenom<<" ";
std::cout << it->age<<" ";
cout<<"\n";
}
std::list<Personne>::iterator i;

for (i = dat.begin(); i != dat.end(); ++i){
std::cout << i->nom<<" ";
std::cout << i->prenom<<" ";
std::cout << i->age<<" ";
cout<<"\n";

}




















 




return 0;
}