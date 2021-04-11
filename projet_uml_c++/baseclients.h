/*!
* \file baseclients.h
* \brief pour stocker les données des utilisateurs
* \version 20
* \author DIOUME_NOUPIAN
* \date 11/04/2021

*/
#ifndef BASECLIENTS_H
#define BASECLIENTS_H
#include "memoire_borne.h"
#include "donnees_borne.h"


class Baseclients
{
  public : 
  /*!
	* \fn Baseclients()
	* \brief constructeur
	* \param vide
	* \return vide
	* le constructeur pour initialiser
	*/
  	Baseclients();
  			/*!
	* \fn int authentifier(int numcarte)
	* \brief permet à l'utilisateur de mettre son numéro de carte pour s'authentifier
	* \param numcarte
	* \return  vide
	*/
	int authentifier(int numcarte);
};


#endif // BASECLIENTS_H

