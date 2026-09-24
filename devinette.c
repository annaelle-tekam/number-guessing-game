#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
    int nombreMystere=rand()%100+1;
    int t;
    int essai;
    printf("Bienvenue dans le jeu de devinette!\n");
    printf("je vais penser a un nombre entre 1 et 100\n");
    printf("vous devez le trouver en moins de tentatives possible\n");
    do {
	    printf("entrez votre essai: ");
        scanf("%d",&essai);
        t++;
        if(essai < nombreMystere){
            printf("trop petit ! Essayez encore \n");
        }
        if(essai>nombreMystere){
            printf("trop grand!Essayez encore \n");
        }
    }while(essai!=nombreMystere);
    printf("Felicitations, vous avez trouve le nombre mystere en %d tentatives\n", t);
    return 0;
}

