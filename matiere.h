#ifndef MATIERE_H_INCLUDED
#define MATIERE_H_INCLUDED
#include <iostream>

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
friend    ostream& operator<<( ostream& out ,const matiere m  ){

        out << m.idmat<< m.nommat<<m.coef ;
        return out;
    }
};
#endif // MATIERE_H_INCLUDED
