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

void phaseOne()
{
    system("cls");
    char tecla;
    int a = 11;
    int l = 11;
    int y = 8;
    int x = 1;
    int NPCY = 1;
    int NPCX = 8;
    int PY = 9;
    int PX = 9;
    int CY = 1;
    int CX = 9;
    char mapa[a][l];
    for (i = 0; i < a; i++){
        for(j = 0; j < l; j++){
            if (i == 0 || j == 0 || i == a-1 || j == l-1 || (i == 9 && j ==5) || (i == 8 && j == 5) || (i == 7 && j == 5) || (i == 6 && j == 5) || (i == 5 && j == 5) || (i == 4 && j ==5) || (i == 3 && j == 5) || (i == 2 && j == 5)){
                mapa[i][j] = '*';
            } else {
                mapa[i][j] = ' ';
            }
        }
    }
    
    mapa[y][x] = '&';
    mapa[NPCY][NPCX] = 'P';
    mapa[PY][PX] = 'D';
    mapa [CY][CX] = '@';

    while(1){
        title();
        for (i = 0; i < a; i++){
            for(j = 0; j < l; j++){
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }

        tecla = getch();

        mapa[y][x] = ' ';
        mapa[NPCY][NPCX] = ' ';
        if (tecla == 'w'){  
            if (mapa[y-1][x] != '*' && mapa[y-1][x] != 'D'){
                y--;
            }
        }

        if (tecla == 'a'){
            if (mapa[y][x-1] != '*' && mapa[y][x-1] != 'D'){
                x--;
            }
        }

        if (tecla == 's'){
            if (mapa[y+1][x] != '*' && mapa[y+1][x] != 'D'){
                y++;
            }
        }

        if (tecla == 'd'){
            if (mapa[y][x+1] != '*' && mapa[y][x+1] != 'D'){
                x++;
            }
        }
       
        if(CY == y && CX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler

            if(tecla == 'i'){
            mapa[PY][PX] = '=';
            mapa [CY][CX] = ' ';
            system("cls");
            printf("Artur-Cabeca-Oca: O que voce esta fazendo com a minha chave preferida, nao, VOLTA AQUI\n");
            printf("A porta abriu\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }        
        if(mapa[9][9] == '='){
            if(y == 9 && x == 9){
                printf("aperte i para interagir\n");
            
                tecla = getch();  // Espera o jogador ler

                if(tecla == 'i'){
            system("cls");
            printf("fase 2 esta por vir...\n");
            printf("voce vai conhcer alguem (X)");
            getch();  // Espera o jogador ler
        
            break;
                }
            }
        }

        if (NPCY == y && NPCX == x) {
        printf("Aperte 'i' para interagir\n");
        
        tecla = getch();  // Espera nova tecla

        if (tecla == 'i') {
        system("cls");
        printf("Artur-Cabeca-Oca:\n");
        printf("eu ja nao falei pra ti tudo que tinha pra falar, sai daqui.\n");
        printf("eu estou com a minha chave preferida. Du du du du du...\n");
        printf("\nPressione qualquer tecla para continuar...");
        getch();  // Espera o jogador ler
        }
                                    }   


        mapa[y][x] = '&';
        mapa[NPCY][NPCX] = 'P';
        mapa [CY][CX] = '@';
        system("cls");
    }

    
    phaseTwo();
}

void phaseTwo(){
     system("cls");
    char tecla;
    int a = 21;
    int l = 21;
    int y = 19;
    int x = 1;
    int NPCY = 19;
    int NPCX = 3;
    int PY = 19;
    int PX = 19;
    int CY = 1;
    int CX = 1;
    int BY = 1;
    int BX = 19;
    int inimigoY = 6;
    int inimigoX = 6;

    char mapa[a][l];
    for (i = 0; i < a; i++){
        for(j = 0; j < l; j++){
            if (i == 0 || j == 0 || i == a-1 || j == l-1 || (i == 9 && j == 1) || (i == 9 && j == 2) || (i == 9 && j == 3) || (i == 9 && j == 4) || (i == 9 && j == 5) || (i == 9 && j == 6) || (i == 9 && j == 7) || (i == 9 && j == 8) || (i == 9 && j == 9) || (i == 1 && j == 9) || (i == 2 && j == 9) || (i == 3 && j == 9) || (i == 4 && j == 9) || (i == 5 && j == 9) || (i == 6 && j == 9) || (i == 7 && j == 9) || (i == 8 && j == 9)){
                mapa[i][j] = '*';
            }else if((i == 4 && j == 11) || (i == 4 && j == 12) || (i == 4 && j == 13) || (i == 4 && j == 14) || (i == 4 && j == 15) || (i == 4 && j == 16) || (i == 4 && j == 17) || (i == 4 && j == 18)|| (i == 4 && j == 10) || (i == 2 && j == 19) || (i == 2 && j == 18) || (i == 2 && j == 17) || (i == 2 && j == 16) || (i == 2 && j == 15) || (i == 2 && j == 14) || (i == 2 && j == 13) || (i == 2 && j == 12) || (i == 2 && j == 11) || (i == 18 && j == 18) || (i == 16 && j == 16) || (i == 17 && j == 17) || (i == 17 && j == 16) || (i == 18 && j == 16) || (i == 16 && j == 19)){
                mapa[i][j] = '#';
            } else {
                mapa[i][j] = ' ';
            }
        }
    }

    mapa[y][x] = '&';
    mapa[NPCY][NPCX] = 'P';
    mapa[PY][PX] = 'D';
    mapa [CY][CX] = '@';
    mapa [BY][BX] = 'O';

    while(1){
         title();
        for (i = 0; i < a; i++){
            for(j = 0; j < l; j++){
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }

        tecla = getch();
        printf("[%d][%d]", y, x);
        mapa[y][x] = ' ';
        mapa[NPCY][NPCX] = ' ';
        mapa[inimigoY][inimigoX] = ' ';

        if (tecla == 'w'){  
            if (mapa[y-1][x] != '*' && mapa[y-1][x] != 'D'){
                y--;
            }
        }

        if (tecla == 'a'){
            if (mapa[y][x-1] != '*' && mapa[y][x-1] != 'D'){
                x--;
            }
        }

        if (tecla == 's'){
            if (mapa[y+1][x] != '*' &&  mapa[y+1][x] !='D'){
                y++;
            }
        }

        if (tecla == 'd'){
            if (mapa[y][x+1] != '*' && mapa[y][x+1] != 'D'){
                x++;
            }
        }

        if(CY == y && CX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler

            if(tecla == 'i'){
            mapa[PY][PX] = '=';
            mapa [CY][CX] = ' ';
            system("cls");
            printf("A porta abriu\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }

        if(BY == y && BX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler
            
            if(tecla == 'i'){
            mapa[9][1] = ' ';
            mapa[9][2] = ' ';
            mapa[9][3] = ' ';
            mapa[9][4] = ' ';
            mapa[9][5] = ' ';
            mapa[9][6] = ' ';
            mapa[9][7] = ' ';
            mapa[9][8] = ' ';
            mapa[9][9] = ' ';
            
            system("cls");
            printf("A parede caiu.\n");
            printf("tem um monstro la....\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }

        if(((y == 4 && x == 11) || (y == 4 && x == 12) || (y == 4 && x == 13) || (y == 4 && x == 14) || (y == 4 && x == 15) || (y == 4 && x == 16) || (y == 4 && x == 17) || (y == 4 && x == 18)|| (y == 4 && x == 10) || (y == 2 && x == 19) || (y == 2 && x == 18) || (y == 2 && x == 17) || (y == 2 && x == 16) || (y == 2 && x == 15) || (y == 2 && x == 14) || (y == 2 && x == 13) || (y == 2 && x == 12) || (y == 2 && x == 11)) || (y == 18 && x == 18) || (y == 16 && x == 16) || (y == 17 && x == 17) || (y == 17 && x == 16) || (y == 18 && x == 16) || (y == 16 && x == 19)){
            system("cls");
            printf("Voce nao sabe andar, volte pra o incio e aprenda\n");
            printf("clique qualquer botao para continuar\n");
            tecla = getch();  // Espera o jogador ler

            iniciar();
        }

        if(mapa[19][19] == '='){
            if(y == 19 && x == 19){
                printf("aperte i para interagir\n");
            
                tecla = getch();  // Espera o jogador ler

                if(tecla == 'i'){
            system("cls");
            printf("caraca, voce fugiu do monstro, mas tambem, ele andando que nem um idiota.\n");
            printf("ve se voce consegue ganhar desse");
            printf("\ncarregando terceira e ultima fase...");
            getch();  // Espera o jogador ler
        
            break;
                }
            }
        }

        if (NPCY == y && NPCX == x) {
        printf("Aperte 'i' para interagir\n");
        
        tecla = getch();  // Espera nova tecla

        if (tecla == 'i') {
        system("cls");
        printf("Artur-Cabeca-Oca:\n");
        printf("nao fale comigo, voce pegou a minha chave preferida\n");
        printf("falei para meus amigos monstros.\n");
        printf("provavelmente voce ira esbarrar num por ai\n");
        printf("boa sorte, Du du du du du...\n");
        printf("\nPressione qualquer tecla para continuar...");
        getch();  // Espera o jogador ler
        }
                                    }   

        if(mapa[9][1] == ' '){
            inimigoY = 1 + rand() % (8);
            inimigoX = 1 + rand() % (8);
            if(mapa[inimigoY][inimigoX] != '*'){

            }
        
            if(inimigoY == y && inimigoX == x){
            system("cls");
            printf("O monstro te comeu cara, melhore\n");
            printf("clique qualquer botao para continuar\n");
            tecla = getch();  // Espera o jogador ler

            iniciar();
            }  
        }

        mapa[y][x] = '&';
        mapa[NPCY][NPCX] = 'P';
        mapa [CY][CX] = '@';
        mapa [BY][BX] = 'O';
        mapa[inimigoY][inimigoX] = 'X';
        
        system("cls");



    }
    phaseThree();
}

void phaseThree(){
    
}

void tutorial()
{
     
    system("cls");
    char tecla;
    int a = 11;
    int l = 11;
    int y = 8;
    int x = 1;
    int NPCY = 5;
    int NPCX = 5;
    int PY = 9;
    int PX = 9;
    int CY = 1;
    int CX = 1;
    char mapa[a][l];

     for (i = 0; i < a; i++){
        for(j = 0; j < l; j++){
            if (i == 0 || j == 0 || i == a-1 || j == l-1 || (i == 9 && j ==5) || (i == 8 && j == 5) || (i == 7 && j == 5) || (i == 6 && j == 5)){
                mapa[i][j] = '*';
            } else {
                mapa[i][j] = ' ';
            }
        }
    }

    mapa[y][x] = '&';
    mapa[NPCY][NPCX] = 'P';
    mapa[PY][PX] = 'D';
    mapa [CY][CX] = '@';

    while (1)
    {
        title();
        for (i = 0; i < a; i++){
            for(j = 0; j < l; j++){
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }

        tecla = getch();

        mapa[y][x] = ' ';
        mapa[NPCY][NPCX] = ' ';
        if (tecla == 'w'){  
            if (mapa[y-1][x] != '*' && mapa[y-1][x] != 'D'){
                y--;
            }
        }

        if (tecla == 'a'){
            if (mapa[y][x-1] != '*' && mapa[y][x-1] != 'D'){
                x--;
            }
        }

        if (tecla == 's'){
            if (mapa[y+1][x] != '*' &&  mapa[y+1][x] !='D'){
                y++;
            }
        }

        if (tecla == 'd'){
            if (mapa[y][x+1] != '*' && mapa[y][x+1] != 'D'){
                x++;
            }
        }
        
    
       

        if(CY == y && CX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler

            if(tecla == 'i'){
            mapa[PY][PX] = '=';
            mapa [CY][CX] = ' ';
            system("cls");
            printf("A porta abriu\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }        
        if(mapa[9][9] == '='){
            if(y == 9 && x == 9){
                printf("aperte i para interagir\n");
            
                tecla = getch();  // Espera o jogador ler

                if(tecla == 'i'){
            system("cls");
            printf("Voce esta entrando na caverna, UUUUUUUUUUUUUUUU\n");
            printf("prepare-se para primeira fase");
            getch();  // Espera o jogador ler
        
            break;
                }
            }
        }
        if (NPCY == y && NPCX == x) {
        printf("Aperte 'i' para interagir\n");
        
        tecla = getch();  // Espera nova tecla

        if (tecla == 'i') {
        system("cls");
        printf("Ola, meu nome e Artur-Cabeca-Oca.\n");
        printf("Ali e a entrada da caverna. Dizem que la tem monstros,\n");
        printf("mas tambem ha um tesouro antigo. Du du du du du...\n");
        printf("AH, voce ainda nao foi embora, tem que pegar aquela chave ali (@)\n");
        printf("Quando voce pegar a chave a porta abre (=)\n");
        printf("e quando voce ver um (O), interaja tambem, ele derruba paredes\n");
        printf("\nPressione qualquer tecla para continuar...");
        getch();  // Espera o jogador ler
        }
                                    }   
        

        mapa[y][x] = '&';
        mapa[NPCY][NPCX] = 'P';
        mapa [CY][CX] = '@';
        
        system("cls");
        
    }
    phaseOne();
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

                                                                                                                                                                                            
                                                                                                                                                                            