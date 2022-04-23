

#include "JugadaBalero.h"
#include <stdio.h>

int JugadaBalero :: SacarPuntos(int puntos, int juegos)
{
    int suma_puntos;
    if(juegos==1)
    {
        

            switch(puntos)
            {
                case 1:
                    suma_puntos=suma_puntos +1; 
                
                break; 
            
            
                case 2:
                    suma_puntos=suma_puntos +5; 
                
                break; 
            

                case 3:
                    suma_puntos=suma_puntos +10; 
                
                break; 

                case 4:
                    suma_puntos=suma_puntos +50; 
                
                break; 
            
            
                case 5:
                    suma_puntos=suma_puntos +100; 
                
                break; 
            
            
                case 6:
                    suma_puntos=suma_puntos +250; 
                
                break; 
              
            
                case 7:
                    suma_puntos=suma_puntos +250; 
                
                break; 
            
            
                case 8:
                    suma_puntos=suma_puntos +500; 
                
                break; 
                
            }
    
           
    }
    
    
 return suma_puntos; 
}
