/*!
* \file prise.h
* \brief pour permettre le chargement des voitures
* \version 20
* \author DIOUME_NOUPIAN
* \date 11/04/2021

*/
#ifndef PRISE_H 
#define PRISE_H 
#include <lcarte.h> 
#include "mem_sh.h"
#include "donnees.h"
#include "memoire_borne.h"
#include "donnees_borne.h"
#include "voyants.h"


class Prise

{
	public:
	 /*!
	* \fn Prise()
	* \brief constructeur
	* \param vide
	* \return vide
	* le constructeur pour initialiser
	*/
	Prise();
				/*!
	* \fn void deverrouiller_trappe()
	* \brief permet montrer que la trappe est dévérouillée
	* \param vide
	* \return  vide
	*/
	void deverrouiller_trappe(); 
				/*!
	* \fn void verrouiller_trappe()
	* \brief permet montrer que la trappe est vérouillée
	* \param vide
	* \return  vide
	*/
	void verrouiller_trappe();
	entrees *io; 
	

};
#endif
