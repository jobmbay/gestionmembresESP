#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * cheminauth = "fichiers/authentification.txt";
char * cheminmembres = "fichiers/membres.txt";


int main(int argc, char const *argv[])
{
	FILE * auth = fopen(cheminauth, "a+");
	FILE * membres = fopen(cheminmembres, "a+");
	return 0;
}
