#include "prise.h" 

Prise::Prise()
{
int shmid; 
io=acces_memoire(&shmid);
}


void Prise::deverrouiller_trappe() 
{ 
io->led_trappe=VERT; 
} 
void Prise::verrouiller_trappe() 
{ 
io->led_trappe=OFF; 
} 
