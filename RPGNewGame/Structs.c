#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "header.h"



void combat(player *player1, monsters *orc){
    player1->maxlife = 20;
    orc->maxlife = 10;
    while(player1->maxlife > 0 || orc->maxlife > 0){
        player1->damage = (rand() % 6) + (1);
        orc->damage = (rand()%6) + (1);
        orc->maxlife = orc->maxlife - player1->damage;
        player1->maxlife = player1->maxlife - orc->damage;
    }
    return player1;
}


void firstChapter(player *y,monsters *orc){

int confirm;

printf("Ola Jogador! Seja bem vindo a sua nova aventura!!!\n\n");
printf("Qual seria o seu nome?\n");
fflush(stdin);
gets(y->name);

printf("Eh um prazer %s, sua jornada sera derrotar os orcs que sequestraram sua esposa e filhas!\n\n", y->name);
printf("Vamos la, vou te guiar nessa jornada!\n\n");
getch();
system("cls");

printf("Fiquei sabendo que elas foram para a floresta amaldicoada, gostaria de ir atras delas?\n\n");
printf("Digite 1 para sim e 2 para nao:");
scanf("%d",&confirm);

if(confirm==1){
    system("cls");
    printf("Muito bem, vamos la entao!\n\nA floresta ta a sua direita, so entrar nela!");
    system("cls");
    printf("*Ao adentrar na floresta voce percebe um ar rarefeito e muita neblina,\n bem dificil de ver, mas decide continuar mesmo assim*\n\n");
    printf("*Voce escuta passos a sua frente e logo consegue perceber que sao os orcs que raptaram a sua familia!*\n\n");

    getch();
    system("cls");
    printf("\nVoce entra em combate com eles?\n");
    printf("Digite 1 para sim e 2 para nao:");
    scanf("%d",&confirm);

    if(confirm==1){
        combat(y,orc);
        printf("Apos o combate sua vida eh: %d\n\n", y->maxlife);
        if(y->maxlife > 0){
            printf("Parabens, voce derrotou o orc e consegiu salvar a sua familia!");
            getch();
            return ;
        }else{
            printf("Tu morreu meu camarada, nao foi dessa vez!");
            getch();
            return ;
        }
    }else{
        system("cls");
        printf("Sacanagem com sua familia, saia daqui agora!");
        getch();
        return ;
    }
}else{
    system("cls");
    printf("Sacanagem com sua familia, saia daqui agora!");
    getch();
    return ;
    ;
}
}
