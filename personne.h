#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <iostream>
using namespace std;


class personne {
public:
    int id ;
    string nom;
    string prenom;
    string  mail;
    personne (){}
    personne(int i , string  n, string  p , string  m ){
    id=i;
    nom=n;
    prenom=p;
    mail=m;
    }
    friend ostream& operator<<(ostream& out ,  personne& e )
    {

        out<< e.nom<< e.prenom <<e.mail<<e.id;
	return out;
	}

};



#endif // PERSONNE_H_INCLUDED
