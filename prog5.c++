#include<iostream>
#include<set>
#include<iterator>
#include<list>
#include<vector>
using namespace std;
template<class t> t RECHERE(t i)//la  fonction qui recherche en Template de façon à ce qu'elle marche peu importe le type d'itérateur 
 { 
cin >>i;
if(i=1 and i<=100 ){ 
   cout<<"le nombre est existe"<<endl; 
}else{
    cout<<"non il n\'existe pas"<<endl;
}
 }
int main(){
    int i;
    
 set<int, greater<int> > s1;
for ( i = 1; i <=100; i++)
{
    s1.insert(i);
    
}
set<int, greater<int> > ::iterator itr;
for( itr=s1.begin();itr!=s1.end();itr++){
    cout<<*itr<<" " ;
   
}
cout<<"\n";
set<int, greater<int> > ::iterator it;//iterator de set
for( it=s1.end();it!=s1.begin();it--){
    
    cout<<*it<<" " ;

}
cout<<"\n entrer le nombre rechercher "<<endl;

 RECHERE(i);
vector<string>  vectr(100,"string");
for (int i = 1; i <= 100; i++)
{
//cout<< vectr[i]<<" ";


}
for(vector<string>::iterator itr=vectr.begin();itr!=vectr.end();++itr)//iterator de vector string
{ 
cout<<*itr<<" ";}
cout<<"\n entrer le nombre de string rechercher "<<endl;
RECHERE(*itr);

 
list<int> list;
for (int i = 1; i <= 100; i++) {
    list.push_back(i);}


std:: list <int> :: iterator iti;//iterator de list
for(iti = list.begin(); iti != list.end(); ++iti){
std:: cout << *iti<<" ";
}

cout<<"\n entre le nombre rechercher "<<endl;
RECHERE(*iti);
return 0;
}