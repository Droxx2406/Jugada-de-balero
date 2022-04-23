#include<stdio.h>
#include<math.h>
#include <string.h>
#include "JugadaBalero.h"

//Tarea 3 

    

int main (){
    
        int puntos, total;
        int juegos;
    
        printf("Presione ENTER para observar el menu.\n\n");
   
        printf("¿Quieres seguir jugando?\n1.si\n2.no\nEscriba el numero de la opcion que escoja:");
        fflush(stdout); 
        scanf("%d", & juegos);
    
    
       while(juegos==1)
        {
                printf(" \n\nMENU: \n1. Sencillo \n");
                printf("2. Capirucho sencillo. \n");
                printf("3. Clásico \n");
                printf("4. Capirucho complicado.\n");
                printf("5. Cruzado \n");
                printf("6. Reves \n");
                printf("7. Jalon \n");
                printf("8. Invertida \n");
    
    
    
            printf("\n Seleccione el numero equivalente al tipo de ensarte para obtener su puntaje: ");
            fflush(stdout); 
            scanf("%d", & puntos);
            
            JugadaBalero P;
            if(P.SacarPuntos(puntos,juegos));
            
            
            
            
   
            printf("¿Quieres seguir jugando?\n1.si\n2.no\nEscriba el numero de la opcion que escoja:");
            fflush(stdout); 
            scanf("%d", & juegos);
           
            
    
        }
    
    
    
            JugadaBalero c;
            total=  c.SacarPuntos(puntos,juegos);
            printf("Tu puntaje es:  %d ", total);
        
        
    
    
    
    
   

    return 0;
}

