#include <iostream>
#include"groupe.h"
#include"groupemodule.h"
#include"matiere.h"
#include"note.h"
#include"personne.h"
#include"enseignant.h"
#include"etudiant.h"
using namespace std;
/*int existemat (string idmat ,vector<note> n , int nb){
for (int i=0 ; i < nb ; i++)
            if (n[i].mat.idmat==idmat){
                    return 1;
            }
return 0;
}*/
float moy(vector<note> n ,vector<matiere> m, int nb ){
    float k =0;
    for (int i=0 ; i < nb ; i++){
            //if (existemat(n[i].mat.idmat,n,nb)==1){
                    k= k+(n[i].notee);

            //}
        //k= k+(n[i].notee * n[i].mat.coef);
    }
    return k/nb ;

}
float moygm( ){
return 0 ;
}

void ajoutmat (    vector <matiere> mat , matiere m  ){
cout<<"donner l'id de matiere"<< endl;
cin>>m.idmat;
cout<<"donner coef de matiere"<< endl;
cin>>m.coef;
cout<<"donner nom de matiere"<< endl;
cin>>m.nommat;
mat.push_back(m);
operator<<(cout ,m);
}
void ajoutnote(vector<note>no , note n ){
cout<<"donner l'id de matiere"<< endl;
cin>>n.mat.idmat;
cout<<"donner coef de matiere"<< endl;
cin>>n.mat.coef;
cout<<"donner nom de matiere"<< endl;
cin>>n.mat.nommat;
    cout<<("donner id etudiant")<<endl;
    cin>>n.etu.id;
    cout<<"donner nom etudiant"<<endl;
    cin>>n.etu.nom;
    cout<<"donner prenom etudiant"<<endl;
    cin>>n.etu.prenom;
    cout<<"donner mail etudiant"<<endl;
    cin>>n.etu.mail;
    cout<<("donner numinsc etudiant")<<endl;
    cin>>n.etu.numinsc;
    no.push_back(n);
    operator<<(cout ,n);

}
void ajoutpers (vector<personne> p, personne per){
    cout<<("donner id personne")<<endl;
    cin>>per.id;
    cout<<"donner nom personne"<<endl;
    cin>>per.nom;
    cout<<"donner prenom personne"<<endl;
    cin>>per.prenom;
    cout<<"donner mail personne"<<endl;
    cin>>per.mail;
   p.push_back(per);
   operator<<(cout,per);
}
void ajoutetudiant(vector<etudiant> e , etudiant et ){
    cout<<("donner id etudiant")<<endl;
    cin>>et.id;
    cout<<"donner nom etudiant"<<endl;
    cin>>et.nom;
    cout<<"donner prenom etudiant"<<endl;
    cin>>et.prenom;
    cout<<"donner mail etudiant"<<endl;
    cin>>et.mail;
    cout<<("donner numinsc etudiant")<<endl;
    cin>>et.numinsc;
operator<<(cout ,et);
 e.push_back(et);

}
void ajoutenseignant (vector <enseignant> ens, enseignant en){

 ens.push_back(en);
 operator<<(cout ,en);
}
int main()
{
    vector <matiere> mat ;
    vector <note> n;
    vector <personne> pers;
    vector <etudiant> et ;
    vector <enseignant> ens ;
    vector <groupe> grp ;
    vector < groupemodule> grpmd ;
    etudiant e;
    enseignant en(12,"kamel","tt","mat",1212);
    ajoutenseignant(ens,en);
    ajoutetudiant(et,e);

    return 0;
}
