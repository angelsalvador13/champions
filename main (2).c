#include <conio.h>
#include <stdio.h>

int main()
{
    int opcion=0;
   do
    {
    printf(" \t       Champions    \n");
    printf(" \t  1- 8vos de final \n");
    printf(" \t  2- 4tos de final \n");
    printf(" \t  3- Semifinal \n");
    printf(" \t  4- Final \n");
    printf(" \t  5- Campeon \n");
     printf("6- Salir");
    printf("\nPor favor introduce una opcion: \n");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
        {
        	printf(" \t  8vos de final \n");
                printf("1- SCHALKE 04 VS M.CITY\n");
                printf("2- ATLETICO VS JUVENTUS\n");
                printf("3- M.UNITED VS PARIS\n");
                printf("4- TOTTENHAM Vs B.DORTMUND \n");
                printf("5- LYON VS BARCELONA\n");
                printf("6- Roma VS OPORTO\n");
                printf("7- AJAX VS REAL MADRID\n");
                printf("8- LIVERPOOL VS BAYREN\n");
           
            break;
        }

        case 2:
        {
        	printf(" \t   4tos de final \n");
             printf("1- TOTTENHAM VS MAN.CITY\n");
                printf("2- AJAX VS JUVENTUS \n");
                printf("3- MAN.UNITED VS BARCELONA\n");
                printf("4- LIVERPOOL VS PORTO\n");
    
            break;
        }
        case 3:
        {
        	printf("\nSemifinal\n");
           printf("1- TOTTENHAM VS AJAX\n");
                printf("2- FC BARCELONA VS LIVERPOOL\n");
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

    while(opcion<=5&&opcion>0);
    return 0;
}