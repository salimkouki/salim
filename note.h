#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
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
    ostream& operator<<( A& x )
{
        ostream& out;
	out << x.y << endl;
	return out;
}
    };


#endif // NOTE_H_INCLUDED
