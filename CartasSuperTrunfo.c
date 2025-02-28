#include <stdio.h>
#include <string.h>

    int main(){

        // Variavies da primeira carta.
        char Estado[50];
        char CodCarta[5];
        char Cidade[50];

        int População;
        int Pturistico;

        float PIB;
        float Area;
        // Variaveis da segunda carta.
        char Estado_2[50];
        char CodCarta_2[5];
        char Cidade_2[50];

        int População_2;
        int Pturistico_2;

        float PIB_2;
        float Area_2;

            //Lendo a entrada de dados da primeira carta que o usuário cadastrar.

            printf("Cadastre sua carta.\n");
            printf("Digite o nome do estado: \n");
            fgets(Estado,50, stdin);
            Estado[strcspn(Estado, "\n")] = 0;

            printf("Digite o código da carta: \n");
            scanf(" %s", &CodCarta);
            getchar();
    
            printf("Digite o nome da cidade: \n");
            fgets(Cidade,65, stdin);
            Cidade[strcspn(Cidade, "\n")] = 0;

            printf("Digite a quantidade da população: \n");
            scanf("%d", &População);

            printf("Quantidade pontos turisticos: \n");
            scanf("%d", &Pturistico);
            
            printf("Digite o PIB: \n");
            scanf("%f", &PIB);

            printf("Digite a area: \n");
            scanf("%f", &Area);
            getchar(); // limpando buffer do enter

             //Lendo a segunda entrada de dados da carta que o usuário cadastrar.

             printf("Digite a segunda carta! \n");
             printf("Digite o nome do estado: \n");
             fgets(Estado_2,50, stdin);
             Estado_2[strcspn(Estado_2, "\n")] = 0;
             
             printf("Digite o código da carta: \n");
             scanf("%s", &CodCarta_2);
             getchar();  // limpando buffer do enter
             
             printf("Digite o nome da cidade: \n");
             fgets(Cidade_2,65, stdin);
             Cidade_2[strcspn(Cidade_2, "\n")] = 0;
 
             printf("Digite a quantidade da população da cidade: \n");
             scanf("%d", &População_2);
 
             printf("Quantidade pontos turisticos: \n");
             scanf("%d", &Pturistico_2);
             
             printf("Digite o PIB: \n");
             scanf("%f", &PIB_2);
 
             printf("Digite a area: \n");
             scanf("%f", &Area_2);

            printf(" \n"); //pulando linha para o terminal ficar mais legivel
 
             //Lendo a saida de dados da primeira carta.
                printf("<< CARTA 01 >>\n");
                printf("Estado: %s\n", Estado);
                printf("Código da carta: %s\n",CodCarta);
                printf("Nome da cidade: %s\n",Cidade);
                printf("População: %d\n", População);
                printf("Pontos turisticos: %d\n",Pturistico);
                printf("PIB: %f\n", PIB);
                printf("Area em km: %f\n", Area);

            printf(" \n");//pulando linha para o terminal ficar mais legivel

             //Lendo a segunda saida de dados da segunda carta.
                printf("<< CARTA 02 >>:\n");
                printf("Estado: %s\n", Estado_2);
                printf("Código da carta: %s\n",CodCarta_2);
                printf("Nome da cidade: %s\n",Cidade_2);
                printf("População: %d\n", População_2);
                printf("Pontos turisticos: %d\n",Pturistico_2);
                printf("PIB: %f\n", PIB_2);
                printf("Area em km: %f\n", Area_2);   


            return 0;
            
    }