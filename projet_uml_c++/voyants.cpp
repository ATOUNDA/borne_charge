#include <unistd.h> 
#include "voyants.h" 
#include "timer.h" 

Voyants::Voyants()
{int shmid; 
io=acces_memoire(&shmid);}
 
void Voyants::set_charge(led etat)
{ 
io->led_charge=etat; 
}
void Voyants::set_dispo(led etat) 
{ 
io->led_dispo=etat; 
} 
void Voyants::set_prise(led etat) 
{ 
io->led_prise=etat; 
} 
void Voyants::set_trappe(led etat) 
{ 
io->led_trappe=etat; 
} 
void Voyants::set_defaut(led etat) 
{ 
io->led_defaut=etat; 
}
