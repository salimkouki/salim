#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include"personne.h"
class etudiant :public personne{
public :
    int numinsc;
    etudiant(){};
    etudiant(int i , string  n, string  p , string  m,int num): personne(i,n,p,m){
    numinsc=num;
    };
    friend ostream& operator<<( ostream& out ,const etudiant &e )
{
	out<<"|"<<e.numinsc <<"|"<< e.nom<<"|"<< e.prenom <<"|"<<e.mail<<"|"<<e.id;
	return out;
}

};

#endif // ETUDIANT_H_INCLUDED
