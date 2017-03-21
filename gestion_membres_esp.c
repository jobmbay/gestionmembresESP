#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * cheminauth = "fichiers/authentification.txt";
char * cheminmembres = "fichiers/membres.txt";

typedef struct formation
{
	char * code;
	char * intitule;
	int annee;	
} formation;

typedef struct membre
{
	char * numero;
	char * nom;
	char * prenom;
	char * adresse;
	int nombreClasse;
	formation * classe;
	struct membre * suiv;
} * membre;

 //cette fonction nous permet de creer une liste vide des membres
Membres creerListeMembreLC(){
	membre l = (membre)malloc(sizeof(struct membre));
	l = NULL;
	return l;
}

//insertion d'une classe de formation pour un mebmre
struct membre inserrerClasseLC(struct membre m, formation f)
{
	m.classe[m.nombreClasse]=f;
	m.nombreClasse++;
	return m;
	//for(i=0;i<m.nombreClasse;i++)
}

//creer un nouveau membre

struct membre creerMembreLC (char * numero, char * nom, char * prenom, char * adresse)
{
	struct membre m;
	m.numero=numero;
	m.nom=nom;
	m.prenom=prenom;
	m.adresse = adresse;
	m.nombreClasse = 0;
	return m;
}

//inserer un membre dans la liste
liste insererMembreLC(membre l, struct membre m)
{
	membre tete = l;
	while(tete->suiv != NULL)
		tete = tete->suiv;
	tete->suiv = m;
        m->suiv = NULL;
	return l;
}

Membre ajouterMembreLC(Membres l,char * numero)
{

}



int main(int argc, char const *argv[])
{
	membre l = creerListeMembreLC(); 
	//FILE * auth = fopen(cheminauth, "a+");
	//FILE * membres = fopen(cheminmembres, "a+");
	return 0;
}
