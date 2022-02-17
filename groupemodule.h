#ifndef GROUPEMODULE_H_INCLUDED
#define GROUPEMODULE_H_INCLUDED
#include"matiere.h"
class groupemodule {
public :
    string idgm;
    string nomgmt;
    float coefgm;
    matiere listemat[50];
    groupemodule(){}
    groupemodule(string id , string n , float c , matiere l[50]){
    idgm=id;
    nomgmt=n ;
    coefgm=c;
    for (int i=0;i<50;i=i+1){
        listemat[i]=l[i];
    }
    }
ostream& operator<<( A& x )
{
        ostream& out;
	out << x.y << endl;
	return out;
}
};

#endif // GROUPEMODULE_H_INCLUDED
