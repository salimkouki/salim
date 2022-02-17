#ifndef MATIERE_H_INCLUDED
#define MATIERE_H_INCLUDED
#include"personne.h"
class matiere {
public :
    string idmat;
    string nommat;
    float coef;
    enseignant ens;
    matiere (){}
    matiere(string id , string nom , float co , enseignant e){
        idmat=id;
        nommat=nom;
        coef=co;
        ens=e;
    }
    ostream& operator<<( A& x )
{
        ostream& out;
	out << x.y << endl;
	return out;
}
};


#endif // MATIERE_H_INCLUDED
