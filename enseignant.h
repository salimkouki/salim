#ifndef ENSEIGNANT_H_INCLUDED
#define ENSEIGNANT_H_INCLUDED
#include"personne.h"

class enseignant :public personne{
public :
    int cnss;
    enseignant(){};
    enseignant(int i , string  n, string  p , string  m,int cn): personne(i,n,p,m){
    cnss=cn;
    };
friend    ostream& operator<<( ostream& out , enseignant& e )
{

        out<< e.nom<< e.prenom <<e.mail<<e.id;
	return out;
}
};

#endif // ENSEIGNANT_H_INCLUDED
