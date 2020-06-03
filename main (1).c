#include <conio.h>
#include <stdio.h>

int main()
{
    int opcion;
   
    printf(" \t       Champions    \n");
    printf(" \t  1- 8vos de final \n");
    printf(" \t  2- 4tos de final \n");
    printf(" \t  3- Semifinal \n");
    printf(" \t  4- Final \n");
    printf(" \t  5- Campeon \n");
    printf("\nPor favor introduce una opcion: \n");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
        {
        	printf(" \t  8vos de final \n");
        	printf("\nPSG y Atlético de Madrid\n");
           
            break;
        }

        case 2:
        {
        	printf(" \t   4tos de final \n");
            printf("\nChelsea,Nápoles,Juventus,Real Madrid\n");

    
            break;
        }
        case 3:
        {
        	printf("\nSemifinal\n");
           printf("\ barcelona y ajax\n");
            break;
        }

        case 4:
        {
        	printf("\nfinal\n");
           printf("\ntottenham y liverpool\n");
           
            break;
        }

  case 5:
        {
        	printf("\ncampeon\n");
           printf("\n liverpool\n");
           
            break;
        }
        default:
            printf("\nLa opcion no es correcta");
    }
}
