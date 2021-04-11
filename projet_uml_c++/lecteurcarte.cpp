#include <iostream>
#include "lecteurcarte.h"
#include <unistd.h>
#include "timer.h"



using namespace std;
LecteurCarte::LecteurCarte()
{
}

void LecteurCarte::initialiser()
{
initialisations_ports();

}

void LecteurCarte::lire_carte()
{
int raz=0;
numcarte=0;
cout<<"Bienvenue: insérer votre carte"<<endl;
attente_insertion_carte();
cout<<"carte insérée"<<endl; 
numcarte=lecture_numero_carte();
cout<<"Le numero de la carte est:"<<numcarte<<endl;
if(obaseclients.authentifier(numcarte))
{
cout<<"authentification réussie"<<endl;
ovoyants.set_charge(VERT);
}
else{
cout<<"échec authentification, veuillez retirer votre carte"<<endl;
ovoyants.set_defaut(ROUGE);
otimer.timer_raz();
otimer.timer_valeur(raz);

}
}




