#include <unistd.h> 
#include "baseclients.h"

Baseclients::Baseclients()
{} 

int Baseclients::authentifier(int numcarte) 
{ 
int number[10]={3,5,7,9,11,13,15,17,19,21}; 
int i=0; int test=0; 
for(i=0;i<10;i++) 
{ 
if(number[i]==numcarte) test=1; 
} 
if(test==1) 
return 1; 
else return 0; 
}
