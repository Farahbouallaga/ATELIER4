#include<iostream>
using namespace std;
class A{
    public:
int J;

string M;
string A;
string H;
string N;
void g(){ 

cout<<"entrer votre chaine"<<endl;

 }
void display( ){

cin>>J;
cin>>M;
cin>>A;
cin>>H;
cin>>N;   
cout<<J<<M<<A<<H<<N<<endl; 

if(M=="01"){M="JANVIER";}
if(M=="02"){M="FEVRIER";}
if(M=="03"){M="MARS"; }
if(M=="04"){M="AVRIL";}
if(M=="05"){M="MAi";}
if(M=="06"){M="JUIN";}
if(M=="07"){M="JUILLET";}
if(M=="08"){M="AOUT ";}
if(M=="09"){M="SEPTEMBRE";}
if(M=="10"){M="OCTOBRE";}
if(M=="11"){M="NOVEMBRE";}
if(M=="12"){M="DECEMBRE";}

cout<<J<<"  "<<M<<" "<<A<<" à "<<H<<":"<<N;





}


};
int main(){
A b;
b.g();
b.display();
return 0;

}