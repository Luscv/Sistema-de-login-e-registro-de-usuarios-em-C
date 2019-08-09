#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"

void InicializaUser(TipoUser *user){
    strcpy(user -> nick, "\0");
    strcpy(user -> password, "\0");
    user -> id = 0;
    user -> curso = 0;
}

void SetNick(TipoUser *user, char *Newnick){
    strcpy(user -> nick, Newnick);
    printf("%s\n", user-> nick);
}
void SetPass(TipoUser *user, char *Newpass){
    strcpy(user -> password, Newpass);
    printf("%s\n", user-> password);
}
void SetID(TipoUser *user, int Newid){
    user -> id = Newid;
    printf("%d\n", user-> id);
}
void SetCurso(TipoUser *user, int Newcurso){
    user -> curso = Newcurso;
    printf("%d\n", user-> curso);

}

char *GetNick(TipoUser user){
    return user.nick;
}
char *GetPass(TipoUser user){
    return user.password;
}
int GetID(TipoUser user){
    return user.id;
}
int GetCurso(TipoUser user){
    return user.curso;
}

void ImprimeUsuario(TipoUser user){
    char impnick[10], imppassword[10];
    int impid, impcurso;
    strcpy(impnick, GetNick(user));
    strcpy(imppassword,GetPass(user));
    impid = GetID(user);
    impcurso = GetCurso(user);
    printf("ID: #%d\n", impid);
    printf("Nick: %s\n", impnick);
    printf("Password: %s\n", imppassword);

    printf("Curso: %d\n", impcurso);
}
