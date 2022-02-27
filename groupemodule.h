#ifndef GROUPEMODULE_H_INCLUDED
#define GROUPEMODULE_H_INCLUDED
#include <iostream>
#include"matiere.h"
class groupemodule {
public :
    string idgm;
    string nomgmt;
    float coefgm;
    vector<matiere> listemat;
    groupemodule(){}
    groupemodule(string id , string n , float c , vector<matiere> l){
    idgm=id;
    nomgmt=n ;
    coefgm=c;
    listemat=l;
    }
friend ostream& operator<<( ostream& out , const groupemodule& g )
{
	out << g.idgm << g.nomgmt<< g.coefgm;
	return out;
}
};


#endif // GROUPEMODULE_H_INCLUDED
