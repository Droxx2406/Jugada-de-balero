#include<stdio.h>
#include"num_mayor.h"
#include "anio_bisiesto.h"
#include"suma_de_tres_num.h"
#include<math.h>

#include"caracteres.h"
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
        
        
    
    
    
    
    /*char caracter1;
    
    caracteres car;
    
    printf("Dame un caracter: ");
    fflush(stdout);
    scanf("%c", &caracter1); 
    
    
    
    if(car.CaracterRespectom(caracter1));

    if(car.caracterIgual(caracter1));
     * /
   
    
    
   /* char c1, c2, enter;
    caracteres car;
    
    
    printf("Dame un caracterer:");
    fflush(stdout);
    scanf("%c%c", &c1, &enter);
            
    
    printf("Dame un caracterer:");
    fflush(stdout);
    scanf("%c%c", &c2, enter);
    
    
    
   
    if(car.OrdenCaracteres(c1, c2))
    {
        
        printf("Los caracteres %c y %c estan ordenados", c1, c2);
    }
    
    else 
    
        printf("Los caracteres no estan ordenados"); */
    
    
    /*double X1, X2, X, x;
    
    
    
    printf("Dame x1= ");
    fflush(stdout);
    scanf("%if", &X1);
    
    printf("Dame x2= ");
    fflush(stdout);
    scanf("%if", &X2);
    
    
    printf("Dame X= ");
    fflush(stdout);
    scanf("%if", &X);
    
    printf("Dame x= ");
    fflush(stdout);
    scanf("%if", &x);
    
    SenXRaiz f; 
            if(f.sacarFunciones(X1, X2, X, Sen, &sen_2, &sen_1))
            {
            
            }
            
            else
            {
            
                printf("nO TIENE SOLUCION!! "); 
            }
    
            
                
    
    */
    /*int num1, num2, num3;
    
    printf("Dame Un numero: ");
    fflush(stdout);
    scanf("%d", &num1);  
    
  
    
    printf("Dame Un numero: ");
    fflush(stdout);
    scanf("%d", &num2);  
    
   
    
    printf("Dame Un numero: ");
    fflush(stdout);
    scanf("%d", &num3);
    
    
    referencia f; 
    
    if(f.numMayor(num1, num2, num3));
    
    if(f.SacarNumMayor(num1, num2, num3));
    
    */
    /*float a,b,c;
    float *rl, *r2;
    
    printf("dame A: ");
    fflush(stdout);
     scanf("f", &a)
             
             
    printf("dame b: ");
    fflush(stdout);
     scanf("f", &b)
             
             
             
    printf("dame c: ");
    fflush(stdout);
    scanf("f", &c);
    
    chicharronera suma_de_tres_num;
    
    
    if(chicharronera())
        printf("Las raices de la ecuacion som %f y %f", );
     * 
    
    else
        printf("No da resultado");
     */
     
    
    /*int num1, num2, num3;
    
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d", &num1);
    
    
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d", &num2);
    
    
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d", &num3 );
    
    suma_de_tres_num f;
    
    if(f.Sacar_suma_caso1(num1, num2, num3));
    
    
    */
    /*int num1, num2, num3;
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d", &num1);
    
    
    printf("Dame un numero: ");
    fflush(stdout);
    
    scanf("%d", &num3);
    
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d", &num2);
    
    
    
    num_mayor f;
    if(f.Sacar_num_mayor1(num1,num2,num3))
    {
        printf("El numero %d es mayor.", num1);
    }
    
    if(f.Sacar_num_mayor2(num1,num2,num3))
    {
        
        printf("El numero %d es mayor.", num2);
    }
    
    if(f.Sacar_num_mayor1(num1,num2,num3))
    {
        printf("El numero %d es mayor.", num3); 
     * 
     * 
    }
      */
    /*int anio;
    
    
    printf("Dame la fecha: ");
    fflush(stdout);
    scanf("%d", anio);
    
    
    anio_bisiesto f;
    
    if(f.sacar_Anio(anio))
        printf("Bisiesto");
    
    else
        printf("No es bisiesto");*/
                        

    return 0;
}

