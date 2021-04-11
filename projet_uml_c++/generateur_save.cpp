#include "generateur_save.h"
#include <iostream>
using namespace std;

Generateur_save::Generateur_save()
{
int shmid; 
io=acces_memoire(&shmid);
}
void Generateur_save::generer_PWM(pwm etat) 

{ 
io->gene_pwm=etat; 
}
void Generateur_save::charge(int numcarte)
 { 
 
 ovoyants.set_charge(ROUGE); 
 ogenerateur_save.generer_PWM(DC); 
 oprise.deverrouiller_trappe(); 
 while(io->gene_u!=9) 
 {
 sleep(1);
 cout<<"attente 9V\n"<<endl;
 } 
 oprise.verrouiller_trappe(); 
 ovoyants.set_prise(VERT); 
 ogenerateur_save.generer_PWM(AC_1K); 
 while(io->gene_u!=6) 
 {
 sleep(1);
 cout<<"attente 6V\n"<<endl;
 } 
 io->contacteur_AC=1;
 
 if(gen->gene_u==9) 
 {
  gen->contacteur_AC=0; 
  ovoyants.set_charge(VERT); 
  ogenerateur_save.generer_PWM(DC); 
  } 
  else 
  { 
  while(gen->gene_u!=9 && !gen->bouton_stop) {
  ogenerateur_save.generer_PWM(AC_CL);
  } 			       
  ogenerateur_save.generer_PWM(STOP); 
  ogenerateur_save.generer_PWM(DC); 
  ovoyants.set_charge(VERT); 
  } 
  gen->contacteur_AC=0;
   while(1) 
   { 
   attente_insertion_carte(); 
   if(numcarte==lecture_numero_carte()) 
   {
    cout<<"Carte authentifiée veuillez la retirer"<<endl; attente_retrait_carte(); break; } 
    else cout<<"Rentrer la bonne carte"<<endl;
     }
      prise_deverrouiller_trappe(); 
      while(gen->gene_u!=12) 
      {
      sleep(1);
       cout<<"attente 6V\n"<<endl;
      } 
      ovoyants.set_prise(OFF); 
      ovoyants.set_dispo(VERT); 
      }
