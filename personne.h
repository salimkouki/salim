#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED

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
    ostream& operator<<( A& x )
{
        ostream& out;
	out << x.y << endl;
	return out;
}

};
class etudiant :public personne{
public :
    int numinsc;
    etudiant(){};
    etudiant(int i , string  n, string  p , string  m,int num): personne(i,n,p,m){
    numinsc=num;
    };
    ostream& operator<<( A& x )
{
        ostream& out;
	out << x.y << endl;
	return out;
}

};
class enseignant :public personne{
public :
    int cnss;
    enseignant(){};
    enseignant(int i , string  n, string  p , string  m,int cn): personne(i,n,p,m){
    cnss=cn;
    };
    ostream& operator<<( A& x )
{
        ostream& out;
	out << x.y << endl;
	return out;
}
};

#endif // PERSONNE_H_INCLUDED
