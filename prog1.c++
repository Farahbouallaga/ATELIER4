// EXE1
#include<iostream>
using namespace std;
class complexe{
public:
 int rel;
int img;   

 void afficher(){
    cout<<"entre la partie reelle ";
    cin>>rel;
    cout<<"entre la partie imaginaire  ";
    cin>>img;
}
void operator+(complexe r){
   
  int m=rel+r.rel;
  int n=img+r.img;

  cout<<"la somme est " <<m<<" +i"<<n<<endl;
}
void operator-(complexe r){
   
  int m=rel-r.rel;
  int n=img-r.img;

  cout<<"la soustraction est " <<m<<" +i"<<n<<endl;
}
void operator*(complexe r){
   
  int m=rel*r.rel;
  int n=img*r.img;

  cout<<"la multiplication est " <<m<<" +i"<<n<<endl;
}
void operator/(complexe r){
   
  float m=rel/r.rel;
  float n=img/r.img;

  cout<<"la division est " <<m<<" +i"<<n;
}
};
int main(){

complexe r1;
r1.afficher();
complexe r2;
r2.afficher();
r1+r2;
r1-r2;
r1*r2;
r1/r2;
return 0;

}