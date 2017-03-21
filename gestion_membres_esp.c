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
	membrs l = (membre)malloc(sizeof(struct membre));
	l = NULL;
	return l;
}

//insertion d'une classe de formation
void inserrerClasseLC(struct membre m)

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
	FILE * auth = fopen(cheminauth, "a+");
	FILE * membres = fopen(cheminmembres, "a+");
	return 0;
}
