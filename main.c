#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.c"

int main() {
    TipoUser user;
    int opcheck, Newid, Newcurso;
    char Newnick[10], Newpass[10];
    do{
        printf("*****************************************\n");
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
            scanf("%s %s %d", &Newnick, &Newpass, &Newcurso);
            Newid = rand()%100;

            SetNick(&user, Newnick);
            SetPass(&user, Newpass);
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
