#include "timer.h"
#include<iostream>
#include<unistd.h>


Timer::Timer()
{
int shmid;
raz = 0;
depart_timer = 0;
io = acces_memoire(&shmid);}
  
 int Timer::timer_raz()
{
depart_timer = io->timer_sec;
 return depart_timer;}
 
 int Timer::timer_valeur(int raz)
 {
 int valeur = 0;
 valeur = (io->timer_sec) - raz;
 return valeur;
 }
	
