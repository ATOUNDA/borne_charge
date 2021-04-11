/*!
* \file boutons.h
* \brief deux boutons charge et stop permettant la charge et l'arret de charge
* \version 20
* \author DIOUME_NOUPIAN
* \date 11/04/2021

*/

#ifndef BOUTON_H 
#define BOUTON_H #
#include <lcarte.h> 
#include "mem_sh.h"
#include "donnees.h"
#include "memoire_borne.h"
#include "donnees_borne.h"


class Boutons
{
	public:
	/*!
	* \fn Boutons()
	* \brief constructeur
	* \param vide
	* \return vide
	* le constructeurpour initialiser
	*/
	Boutons();
		/*!
	* \fn 	int charge()
	* \brief permet de vérifier l'état en charge du bouton
	* \param vide
	* \return 1 si appui réussi sinon 0
	*/
	int charge(); 
			/*!
	* \fn 	int stop()
	* \brief permet de vérifier l'état en stop du bouton
	* \param vide
	* \return 1 si appui réussi sinon 0
	*/
	int stop(); 
	entrees *io; /*! <gère la connexion avec les boutons du simulateur*/

	
}

#endif 
