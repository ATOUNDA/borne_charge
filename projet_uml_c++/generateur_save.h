/*!
* \file generateur_save.h
* \brief pour alimenter le système 
* \version 20
* \author DIOUME_NOUPIAN
* \date 11/04/2021

*/
#ifndef CHARGE_H 
#define CHARGE_H 
#include "lecteurcarte.h" 
#include "prise.h" 
#include "timer.h" 
#include "voyants.h"  
#include "memoire_borne.h" 
#include "donnees_borne.h" 
#include "boutons.h" 


class Generateur_save
{
	public:
	/*!
	* \fn Generateur_save()
	* \brief constructeur
	* \param vide
	* \return vide
	* le constructeur pour initialiser
	*/
	Generateur_save();
			/*!
	* \fn void charge(int numcarte)
	* \brief met le voyant charge en rouge, génère l'alimentation et dévérouille la trappe
	* \param numcarte
	* \return  vide
	*/
	void charge(int numcarte); 
			/*!
	* \fn void generer_PWM(pwm etat)
	* \brief génère l'alimentation
	* \param etat
	* \return  vide
	*/
	void generer_PWM(pwm etat); 
	entrees *io;
	Voyants ovoyants;
	Prise oprise;
	Generateur_save ogenerateur_save;
};
#endif
