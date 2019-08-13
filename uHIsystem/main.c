#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.c"

int main() {
    TipoUser user;
    int opcheck, Newid, Newidcurso;
    char Newnick[10], Newpass[10], Newcurso[50];
    do{
        printf("*****************************************\n");
        printf("|    uHI - Bem Vindo ao Nosso Mundo!    |\n");
        printf("|                                       |\n");
        printf("| fazer login ou registrar?             |\n");
        printf("| 1 - Fazer login                       |\n");
        printf("| 2 - Registrar-se                      |\n");
        printf("| 3 - Ver Perfil                        |\n");
        printf("| 0 - Encerrar Programa                 |\n");
        printf("*****************************************\n");
        fflush(stdin);
        scanf("%d", &opcheck);
        if (opcheck == 1){


        }
        else if (opcheck == 2){
            InicializaUser(&user);
            printf("Entre com os dados de usuario\n");
            printf("*****************************************\n");
            printf("| Codigos de curso:                     |\n");
            printf("| 1 - Administracao                     |\n");
            printf("| 2 - Educacao fisica                   |\n");
            printf("| 3 - Direito                           |\n");
            printf("| 4 - Ciencia da computacao             |\n");
            printf("| 5 - Matematica                        |\n");
            printf("*****************************************\n");
            scanf("%s %s %d", &Newnick, &Newpass, &Newidcurso);
            if(Newidcurso > 10){
                while (Newidcurso > 10) {
                    printf("Digite um codigo de curso de 1 a 10\n");
                    scanf("%d", &Newidcurso);
                }
            }
            Newid = rand()%100;
            SetNick(&user, Newnick);
            SetPass(&user, Newpass);
            SetIdcurso(&user, Newidcurso);
            Listacurso(user, &Newcurso);
            SetCurso(&user, Newcurso);
            SetID(&user, Newid);
            printf("\n");
        }
        else if (opcheck == 3){
            ImprimeUsuario(user);
        }
    } while (opcheck != 0);


    system("pause");
    return 0;
}