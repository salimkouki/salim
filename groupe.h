#ifndef GROUPE_H_INCLUDED
#define GROUPE_H_INCLUDED
#include"personne.h"
#include"personne.h"
class groupe {
public :
    string idgrp;
    string niveau;
    string diplome;
    string specialite;
    int numg;
    groupemodule listemodule[50];
    etudiant listeetudiant[50];
    groupe(){}
    groupe(string i , string n, string d , string s , int num ,groupemodule m[50],etudiant e[50]){
    idgrp=i;
    niveau= n;
    diplome= d;
    specialite= s ;
    numg = num ;
    for (int i=0;i<50;i=i+1){
        listemodule[i]=m[i];
    }
       for (int i=0;i<50;i=i+1){
        listeetudiant[i]=e[i];
    }

    }
    ostream& operator<<( A& x )
{
        ostream& out;
	out << x.y << endl;
	return out;
}
};


#endif // GROUPE_H_INCLUDED
