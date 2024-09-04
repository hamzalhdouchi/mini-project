#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct
    {
        char T[20];
        char A[20];
        float prix;
        int quantite;
    }liver;

    liver livers[100];
    int cont=0;

    void ajouter()
    {
        printf("\n");
       printf("==============================================\n");
        printf("************************************************\n");
        printf("*                 ajoute                       *\n");
        printf("************************************************\n");
        printf("entre le num de liver : ");
        scanf(" %[^\n]", livers[cont].T);

        printf("entre le auteur de liver : ");
        scanf(" %[^\n]", livers[cont].A);

        printf("entre le prix liver : ");
        scanf("%f", &livers[cont].prix);

        printf("entre la quantitie des livers : ");
        scanf("%d", &livers[cont].quantite);

        cont++;
    }
    void afficher()
    {
        int i;
        printf("    num                   auture               prix             quantite\n");
        for(i=0;i<cont;i++){
        printf("%d : %-20s   %-20s   %.2f             %d\n",i+1,livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
    }

    }
        void recherch()
        {
            char nm[20];
            int i;
            int f = 0;
            printf("\n");
       printf("==============================================\n");
       printf("**********************************************\n");
       printf("*                   RECHERCH                 *\n");
       printf("**********************************************\n");
            printf("entre le num de livre :");
            scanf(" %[^\n]",nm);
            for(i=0;i<cont;i++)
            {
                if(strcmp(livers[i].T,nm)==0){
                        printf("\n");
            printf("liver trouve %s   %s   %.2f  %d\n",livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
            printf("\n");
            f=1;
            break;
                }
            }
            if(!f)
                printf("ne pas c est liver ");
        }
        void mettre()
        {
       printf("\n");
       printf("==============================================\n");
       printf("**********************************************\n");
       printf("*                   METTRE                   *\n");
       printf("**********************************************\n");
            char nom[20];
            int m;
            int c = 0;
            int i;
            printf("entre le num de livre :");
            scanf(" %[^\n]",nom);
            for(i=0;i<cont;i++)
            {
                if(strcmp(livers[i].T,nom)==0){
                        printf("\n");
            printf("liver trouve %s   %s   %.2f  %d\n",livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
            printf("\n");
            printf("entre la nuvelle valeur de quantite : ");
            scanf("%d",&m);
            livers[i].quantite = m;
            printf("loperqtion sucsse\n");
            c = 1;
            break;
                }
            }
            if(!c)
            {
                printf("ne trouve pas le liver");
            }
        }
    void  suprimer()
    {
        char nn[30];
        int i;
        int j,v;
          printf("\n");
       printf("==============================================\n");
       printf("**********************************************\n");
       printf("*                   suprimer                 *\n");
       printf("**********************************************\n");
        printf("entre le num de livre :");
            scanf(" %[^\n]",nn);
       for(i=0;i<cont;i++)
       {
           if(strcmp(livers[i].T,nn)==0)
           printf("trouver le liver ");
           printf("%s   %s   %.2f  %d\n",livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
           v=1;
            for(j=i;i<cont-1;i++)
       {
           livers[j] = livers[j+1];

       cont--;

       }

       }
       if(!v)
       {
           printf("pas trouve le liver");
       }

    }
    void nbt()
    {
          printf("\n");
       printf("==============================================\n");
       printf("**********************************************\n");
       printf("*          numbre de liver en sstock         *\n");
       printf("**********************************************\n");
        printf("le numbre des livre en stock est %d",cont);
    }

int main()
{
    int n;
     do{
       printf("**********************************************\n");
       printf("*                   minu                     *\n");
       printf("**********************************************\n");
       printf("1 : ajouter un liver au stock\n");
       printf("2 : afficher tout les livers disponibel\n");
       printf("3 : rechercher un liver\n");
       printf("4 : mettre a jour la quantite dun stock\n");
       printf("5 : supprimer un liver du stock\n");
       printf("6 : afficher le nombre total de livers en stock\n");
       printf("7 : exite le programme \n");
       printf("saisisse votre choix : ");
       scanf("%d",&n);

       switch(n)
       {
       case 1:
        ajouter();
        break;
       case 2:
          afficher();
          break;
       case 3:
        recherch();
        break;
       case 4:
        mettre();
        break;
       case 5:
        suprimer();
        break;
       case 6:
        nbt();
       case 7:
        printf("exite le programme");
        break;
       }
       }while(n!=7);


    return 0;
}
