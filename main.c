#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int main();
void title();
void iniciar();
void tutorial();
void controls();
void credits();
void exit();
void phaseOne();
void phaseTwo();
void phaseThree();

int choice;
int voltar;
int i,j;


void title()
{
    printf("\t\t\t\t\t\t\t\t _____     _                      ___    _   _          ____                \n");                                                              
    printf("\t\t\t\t\t\t\t\t|   __|___| |_ ___ ___ ___    ___|  _|  | |_| |_ ___   |    | ___ ___ ___   \n");  
    printf("\t\t\t\t\t\t\t\t|   __|  _|   | . | -_|_ -|  | . |  _|  |  _|   | -_|  |  |  | -_| -_| . |  \n");  
    printf("\t\t\t\t\t\t\t\t|_____|___|_|_|___|___|___|  |___|_|    |_| |_|_|___|  |____/|___|___|  _|  \n");  
    printf("\t\t\t\t\t\t\t\t                                                                     |_|    \n");    
    printf("\n");      
    printf("\n");                                                                                                                                                                      
}

void iniciar()
{
    system("cls");
    choice = 0; 
    title();
    printf("\t\t\t\t\t\t\t\t\t\t\t\t[1] tutorial\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t[2] 1 fase\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t[3] voltar\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tescolha:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        tutorial();
        break;
    case 2:
        phaseOne();
        break;
    case 3:
        main();
        break;
    default:
        printf("\t\t\t\t\t\t\t\t\t\tescolha invalida, pode escolher de novo em 3 segundos");
        Sleep(3000);
        iniciar();
        break;
    }
}

void tutorial()
{
     system("cls");
}
   
void phaseOne()
{

}

void credits()
{
    system("cls");
    title();
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    voltar = 0;
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEchoes of the Deep\n");
    printf("\n");
    printf("Jogo de aventura no qual o jogador assume o papel de protagonista em uma história interativa impulsionada pela exploração e resolução de quebra-cabeças\n");
    printf("\n");
    printf("Criadores: Felipe Alho e Arthur Angelim\n");
    printf("\n");
    printf("clique 4 para voltar\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tescolha:");
    scanf("%d", &voltar);
    if(voltar == 4)
    {
         main();
    }else
    {
        printf ("escolha invalida");
    }
}

void controls()
{
    system("cls");
    title();
    
    voltar = 0;
    printf("frente: w\n");
    printf("esquerda: a\n");
    printf("direita: d\n");
    printf("para tras: s\n");
    printf("intergarir: i \n");
    printf("\n");
    printf("clique 4 para voltar\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tescolha:");
    scanf("%d", &voltar);
    if(voltar == 4)
    {
         main();
    }else
    {
        printf ("escolha invalida");
    }
}


int main()
{
    system("cls");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));
    title();
    choice = 0;
    
    printf("\t\t\t\t\t\t\t\t\t\t\t\t[1] iniciar\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t[2] controles\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t[3] creditos\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t[4] sair\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tescolha:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        iniciar();
        break;
    case 2:
        controls();
        break;
    case 3:
        credits();
        break;
    case 4:
        printf("Saindo do jogo....");
        break;
    default:
        main();
        break;
    }



    return 0;
}

                                                                                                                                                                                            
                                                                                                                                                                            