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
void easterEGG();
void JogoOver();
void escondercursor();
void limparTela();

int choice;
int voltar;
int i,j;

void limparTela() {
    COORD coord = {0, 0};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void esconderCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

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

void easterEGG(){
    system("cls");
    title();
    char tecla;
    int a = 11;
    int l = 11;
    int y = 8;
    int x = 1;
    int NPCY = 5;
    int NPCX = 9;
    int CY = 5;
    int CX = 5;
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
            mapa [CY][CX] = ' ';
            system("cls");
            printf("A porta nao esta abrindo...\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }        
        if(mapa[9][9] == '='){
            if(y == 9 && x == 9){
                printf("aperte i para interagir\n");
            
                tecla = getch();  // Espera o jogador ler

        
            }
        }
        if (NPCY == y && NPCX == x) {
        printf("Aperte 'i' para interagir\n");
        
        tecla = getch();  // Espera nova tecla

        if (tecla == 'i') {
        system("cls");
        printf(" Artur-Cabeca-Oca:\n");
        printf("A porta nao esta abrindo, ne?\n");
        printf("e nao ira abrir nunca mais pra voce...ADEUS!\n");
        printf("Artur-Cabeca-Oca MATOU voce.\n");
        printf("Nunca mais roube chaves de Artur-Cabeca-Oca.\n");
        printf("\nPressione qualquer tecla para continuar...");
        getch();  // Espera o jogador ler
        main();
        
        }
                                    }   
        

        mapa[y][x] = '&';
        mapa[NPCY][NPCX] = 'P';
        mapa [CY][CX] = '@';
        
        system("cls");
        
        
    }
    
}

void JogoOver(){
    system("cls");
    title();
    choice = 0;
    printf("Parabens pelo fim do jogo\n");
    printf("nos temos mais uma fase se voce desejar. du du du du....");
    printf("(1) - Ester Egg\n");
    printf("Qualquer outro numero para sair\n");
    scanf("%d", &choice);
    if(choice == 1){
        easterEGG();
    }
}

void phaseOne()
{
    esconderCursor();
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
    esconderCursor();
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

            phaseTwo();
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

            phaseTwo();
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
    esconderCursor();
    system("cls");
    char tecla;
    int a = 41;
    int l = 41;
    int y = 39;
    int x = 1;
    int NPCY = 30;
    int NPCX = 1;
    int PY = 1;
    int PX = 39;
    int CY = 19;
    int CX = 1;
    int BBY = 21;
    int BBX = 19;
    int BY = 1;
    int BX = 1;
    int inimigoY = 39;
    int inimigoX = 39;
    int TTY = 21;
    int TTX = 39;
    int TY = 19;
    int TX = 19;
    int monstroY = 1;
    int monstroX = 19;
    char mapa[a][l];
    for (i = 0; i < a; i++){
        for(j = 0; j < l; j++){
            if (i == 0 || j == 0 || i == a-1 || j == l-1 || (i && j == 20) || (i == 20 &&  j)){
                mapa[i][j] = '*';
            }else if((i == 1 && j == 30) || (i == 2 && j == 30) || (i == 3 && j == 30) || (i == 4 && j == 30) || (i == 5 && j == 30) || (i == 6 && j == 30) || (i == 7 && j == 30) || (i == 8 && j == 30) || (i == 9 && j == 30) || (i == 11 && j == 30) || (i == 12 && j == 30) || (i == 13 && j == 30) || (i == 14 && j == 30) || (i == 15 && j == 30) || (i == 16 && j == 30) || (i == 17 && j == 30) || (i == 18 && j == 30) || (i == 19 && j == 30) || (i == 18 && j == 18) || (i == 16 && j == 16) || (i == 17 && j == 17) || (i == 17 && j == 16) || (i == 18 && j == 16) || (i == 16 && j == 19) || (i == 22 && j == 19) || (i == 22 && j == 18) || (i == 22 && j == 17) || (i == 19 && j == 18)){
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
    mapa [BBY][BBX] = 'O';
    mapa [BY][BX] = 'O';
    mapa [TTY][TTX] = '>';
    mapa [TY][TX] = '>';
    mapa [monstroY][monstroX] = 'V';

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
        mapa[monstroY][monstroX] = ' ';

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
            system("cls");
            printf("A porta abriu\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }

        if(BBY == y && BBX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler
            
            if(tecla == 'i'){
            mapa[21][20] = ' ';
            mapa[22][20] = ' ';
            mapa[23][20] = ' ';
            mapa[24][20] = ' ';
            mapa[25][20] = ' ';
            mapa[26][20] = ' ';
            mapa[27][20] = ' ';
            mapa[28][20] = ' ';
            mapa[29][20] = ' ';
            mapa[30][20] = ' ';
            mapa[31][20] = ' ';
            mapa[32][20] = ' ';
            mapa[33][20] = ' ';
            mapa[34][20] = ' ';
            mapa[35][20] = ' ';
            mapa[36][20] = ' ';
            mapa[37][20] = ' ';
            mapa[38][20] = ' ';
            mapa[39][20] = ' ';
            system("cls");
            printf("A parede caiu.\n");
            printf("tem um monstro la....\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }

         if(BY == y && BX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler
            
            if(tecla == 'i'){
            mapa[1][20] = ' ';
            mapa[2][20] = ' ';
            mapa[3][20] = ' ';
            mapa[4][20] = ' ';
            mapa[5][20] = ' ';
            mapa[6][20] = ' ';
            mapa[7][20] = ' ';
            mapa[8][20] = ' ';
            mapa[9][20] = ' ';
            mapa[10][20] = ' ';
            mapa[11][20] = ' ';
            mapa[12][20] = ' ';
            mapa[13][20] = ' ';
            mapa[14][20] = ' ';
            mapa[15][20] = ' ';
            mapa[16][20] = ' ';
            mapa[17][20] = ' ';
            mapa[18][20] = ' ';
            mapa[19][20] = ' ';
            system("cls");
            printf("A parede caiu.\n");
            printf("tem um monstro la....\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();  // Espera o jogador ler
            }
        }

        if((y == 1 && x == 30) || (y == 2 && x == 30) || (y == 3 && x == 30) || (y == 4 && x == 30) || (y == 5 && x == 30) || (y == 6 && x == 30) || (y == 7 && x == 30) || (y == 8 && x == 30) || (y == 9 && x == 30) || (y == 11 && x == 30) || (y == 12 && x == 30) || (y == 13 && x == 30) || (y == 14 && x == 30) || (y == 15 && x == 30) || (y == 16 && x == 30) || (y == 17 && x == 30) || (y == 18 && x == 30) || (y == 19 && x == 30) || (y == 18 && x == 18) || (y == 16 && x == 16) || (y == 17 && x == 17) || (y == 17 && x == 16) || (y == 18 && x == 16) || (y == 16 && x == 19)  || (y == 22 && x == 19) || (y == 22 && x == 18) || (y == 22 && x == 17) || (y == 19 && x == 18)){
            system("cls");
            printf("Voce nao sabe andar, volte pra o incio e aprenda\n");
            printf("clique qualquer botao para continuar\n");
            tecla = getch();  // Espera o jogador ler

            phaseThree();
        }

        if(mapa[1][39] == '='){
            if(y == 1 && x == 39){
                printf("aperte i para interagir\n");
            
                tecla = getch();  // Espera o jogador ler

                if(tecla == 'i'){
            system("cls");
            printf("Parabens, voce conseguiu encontrar o tesouro.\n");
            printf("aqui esta o seu 10 em algoritimos e codificacoes de sistemas");
            printf("\nmas tem mais uma fase se voce quiser...");
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
        printf("estou impressionado que voce chegou ate aqui\n");
        printf("meu amigo monstro da ultima fase nao conseguiu lhe parar.\n");
        printf("dessa vez tem ele e o seu irmao mais velho\n");
        printf("boa sorte, Du du du du du...\n");
        printf("\nPressione qualquer tecla para continuar...");
        getch();  // Espera o jogador ler
        }
                                    }   

        if(mapa[9][1] == ' '){
            inimigoY = 21 + rand() % (39 - 21 + 1);
            inimigoX = 21 + rand() % (39 - 21 + 1);
            if(mapa[inimigoY][inimigoX] != '*'){

            }
        
            if(inimigoY == y && inimigoX == x){
            system("cls");
            printf("O monstro te comeu cara, melhore\n");
            printf("clique qualquer botao para continuar\n");
            tecla = getch();  // Espera o jogador ler

            phaseThree();
            }  
        }

        if(TTY == y && TTX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler
            if(tecla == 'i'){
                y = 19;
                x = 19;
            }
        }

        if(TTY == y && TTX == x){
            printf("aperte i para interagir\n");
            
            tecla = getch();  // Espera o jogador ler
            if(tecla == 'i'){
                y = TTY;
                x = TTX;
            }
        }

        if(y < 20){
            if(rand() % 2 == 0){
            if (monstroY < y) {
            if (mapa[monstroY + 1][monstroX] == ' ') monstroY++;
            } else if (monstroY > y) {
            if (mapa[monstroY - 1][monstroX] == ' ') monstroY--;
            }
            }else{
            if (monstroX < x && mapa[monstroY][monstroX + 1] == ' ') {
            monstroX++;
            } else if (monstroX > x && mapa[monstroY][monstroX - 1] == ' ') {
            monstroX--;
            }
        }
            if(monstroY == y && monstroX == x ){
                printf("O monstro te comeu cara, melhore\n");
                printf("clique qualquer botao para continuar\n");
                tecla = getch();  // Espera o jogador ler

            phaseThree();
            }
        }

        mapa[y][x] = '&';
        mapa[NPCY][NPCX] = 'P';
        mapa [CY][CX] = '@';
        mapa [BY][BX] = 'O';
        mapa [BBY][BBX] = 'O';
        mapa[inimigoY][inimigoX] = 'X';
        mapa [TTY][TTX] = '>';
        mapa [TY][TX] = '>';
        mapa [monstroY][monstroX] = 'V';
        limparTela();



    }
    JogoOver();
}

void tutorial()
{
    esconderCursor();
     
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

                                                                                                                                                                                            
                                                                                                                                                                            