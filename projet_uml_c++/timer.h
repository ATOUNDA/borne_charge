/*!
 * \file timer.h
 * \brief timer
 * \version 20
 * \date 11∕04∕2021
 *
 * 
 */
#ifndef TIMER_H
#define TIMER_H
#include <lcarte.h>
#include "memoire_borne.h"
#include "mem_sh.h"
#include "donnees.h"

class Timer
{
  public : 

        Timer();
        int timer_raz();
	    int timer_valeur(int raz);
	    
	    entrees *io; /*!< pour la connexion avec un boutons */
        int raz; 
        int depart_timer; 
};
#endif
