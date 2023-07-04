#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Funcion para invocar las diferentes carreras
void carreras(int i){
 switch (i + 1) {
            case 1:
                printf("\nIngenieria en Software\n");
                break;
            case 2:
                printf("\nAdministracion\n");
                break;
            case 3:
                printf("\nEconomia\n");
                break;
            case 4:
                printf("\nRelaciones internacionales\n");
                break;
            case 5:
                printf("\nMatematicas\n");
                break;
            case 6:
                printf("\nContabilidad\n");
                break;
            case 7:
                printf("\nIngenieria industrial\n");
                break;
        }
}




int main() {

    
    //definicion de variables
    int alumnos[7][5], periodo[5]={0, 0, 0, 0, 0};  
    int num_mayor=0, carrera_mayor=0, software_mayor=0;


    srand(time(NULL)); 
    printf("El numero de alumnos de cada carrera es:\n");

//ciclo for para determinar el numero de alumnos de cada periodo anual por carreras
    for (int i = 0; i < 7; i++) {
       carreras(i);
        for (int j = 0; j < 5; j++) {
            alumnos[i][j] = rand() % 101;
            printf("Periodo anual %d: %d\n", j + 1, alumnos[i][j]);
            periodo[j]+=alumnos[i][j];
            
    }

    }


printf("\n");


//ciclo for para responder el literal a: Año en que ingresó la mayor cantidad de alumnos a la universidad.
      for (int j = 0; j < 5; j++)
      
  {
     if (periodo[j]>periodo[num_mayor])
            {
                num_mayor=j;
            }
 printf("total del periodo anual %d es de %d\n",j+1, periodo[j]);
  }
   printf("\na) El periodo anual con mas estudiantes fue %d\n", num_mayor+1);




//ciclo for para responder el literal b:La Carrera que recibió la mayor cantidad de alumnos en el último año.
for (int i = 0; i < 7; i++)
{
       if (alumnos[i][4]>alumnos[carrera_mayor][4])
       {
        carrera_mayor=i;
       }
       
  
}

printf("b) La carrera con mas ingresos en el ultimo periodo anual fue ");
carreras(carrera_mayor);



//Ciclo for para responder la preguta c:¿En qué año la carrera de Ingeniería de Software 
//recibió la mayor cantidad de alumnos?
for (int j = 0; j < 5; j++)
{
    if(alumnos[0][j]>alumnos[0][software_mayor]){
        software_mayor=j;
    }
}

printf("c) El periodo anual en el que Software tuvo mas alumnos fue el %d", software_mayor+1);

    return 0;
}