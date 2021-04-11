/*!
* \file lecteurcarte.h
* \brief lire les cartes des utilisateurs
* \version 20
* \author DIOUME_NOUPIAN
* \date 11/04/2021

*/
#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H
#include <lcarte.h>
#include "memoire_borne.h"
#include "donnees_borne.h"
#include "baseclients.h" 
#include "voyants.h"
#include "timer.h"
#include "prise.h"
#include "mem_sh.h"
  

class LecteurCarte
{
  public : 
   /*!
	* \fn LecteurCarte()
	* \brief constructeur
	* \param vide
	* \return vide
	* le constructeur pour initialiser
	*/
  	LecteurCarte();
  				/*!
	* \fn void initialiser()
	* \brief permet d'initialiser la carte
	* \param vide
	* \return  vide
	*/
	void initialiser();
				/*!
	* \fn void lire_carte()
	* \brief permet de lire la carte de l'utilisateur
	* \param vide
	* \return  vide
	*/
	void lire_carte();
	unsigned int numcarte;
	Baseclients obaseclients;
	Voyants ovoyants;
	Timer otimer;
	//Prise oprise;
	//Boutons oboutons;
	//Generateur_save ogenerateur_save;
};


#endif // LECTEURCARTE_H
