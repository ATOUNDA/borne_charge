/*!
* \file voyants.h
* \brief pour connaitre l'état de fonctionnement du système 
* \version 20
* \author DIOUME_NOUPIAN
* \date 11/04/2021

*/
#ifndef VOYANTS_H 
#define VOYANTS_H 
#include "memoire_borne.h"
#include "donnees.h"
#include "mem_sh.h"




class Voyants
{
  public : 
  	/*!
	* \fn Voyants()
	* \brief constructeur
	* \param vide
	* \return vide
	* le constructeur pour initialiser
	*/
  	Voyants();
  			/*!
	* \fn void set_charge(led etat)
	* \brief permet de vérifier l'état en charge de la voiture
	* \param etat
	* \return  vide
	*/
	void set_charge(led etat); 
			/*!
	* \fn void set_dispo(led etat)
	* \brief permet de vérifier si la prise est disponible
	* \param etat
	* \return  vide
	*/
	void set_dispo(led etat); 
			/*!
	* \fn void set_prise(led etat)
	* \brief permet de vérifier si la prise est connectée
	* \param etat
	* \return  vide
	*/
	void set_prise(led etat); 
			/*!
	* \fn void set_trappe(led etat)
	* \brief permet de vérifier si la prise est dévérouillée
	* \param etat
	* \return  vide
	*/
	void set_trappe(led etat); 
			/*!
	* \fn void set_defaut(led etat)
	* \brief permet de vérifier si la prise est à l'état défaut
	* \param etat
	* \return  vide
	*/
	void set_defaut(led etat); 
	entrees *io;
	
};
 
#endif
