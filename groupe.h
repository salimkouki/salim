#ifndef GROUPE_H_INCLUDED
#define GROUPE_H_INCLUDED
#include <iostream>
#include<vector>
#include"personne.h"
#include"etudiant.h"
#include"enseignant.h"
#include"matiere.h"
#include"groupemodule.h"
#include"groupe.h"
class groupe {
public :
    string idgrp;
    string niveau;
    string diplome;
    string specialite;
    int numg;
    vector<groupemodule> listemodule;
    vector<etudiant> listeetudiant;
    groupe(){}
    groupe(string i , string n, string d , string s , int num ,vector<groupemodule> m,vector<etudiant> e){
    idgrp=i;
    niveau= n;
    diplome= d;
    specialite= s ;
    numg = num ;
    listemodule=m;
    listeetudiant=e;


    };
friend    ostream& operator<<( ostream& out , const groupe& g )
{

	out << g.idgrp << g.niveau<<g.diplome<< g.specialite<< g.numg;
	return out;
}
};


#endif // GROUPE_H_INCLUDED
