#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
#include <iostream>

#include"personne.h"
#include"personne.h"
class note{
public :
    matiere mat ;
    etudiant etu ;
    float notee ;
    string type;
    note(){}
    note(matiere m , etudiant e, float n , string t){
    mat =m ;
    etu = e ;
    notee = n ;
    type = t ;}
friend    ostream& operator<<( ostream& out , const note& n  )
{

	out << n.notee <<n.type;
	return out;
}
float moymat (float nbnote){
return notee*mat.coef/nbnote;
cout<<notee*mat.coef/nbnote;
}
    };


#endif // NOTE_H_INCLUDED
