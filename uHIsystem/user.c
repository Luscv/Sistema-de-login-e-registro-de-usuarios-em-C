#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"

void InicializaUser(TipoUser *user){
    strcpy(user -> nick, "\0");
    strcpy(user -> password, "\0");
    user -> id = 0;
    user -> idcurso = 0;
}

void SetNick(TipoUser *user, char *Newnick){
    strcpy(user -> nick, Newnick);
}
void SetPass(TipoUser *user, char *Newpass){
    strcpy(user -> password, Newpass);
}
void SetID(TipoUser *user, int Newid){
    user -> id = Newid;
}
void SetIdcurso(TipoUser *user, int Newidcurso){
    user -> idcurso = Newidcurso;
}
void SetCurso(TipoUser *user, char *Newcurso) {
    strcpy(user->curso, Newcurso);
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
int GetIdcurso(TipoUser user){
    return user.idcurso;
}
char *GetCurso(TipoUser user){
    return user.curso;
}

void ImprimeUsuario(TipoUser user){
    char impnick[10], imppassword[10], impcurso[50];
    int impid, impidcurso;
    strcpy(impnick, GetNick(user));
    strcpy(imppassword,GetPass(user));
    strcpy(impcurso, GetCurso(user));
    impid = GetID(user);
    impidcurso = GetIdcurso(user);
    printf("ID: #%d\n", impid);
    printf("Nick: %s\n", impnick);
    printf("Password: %s\n", imppassword);
    printf("Curso: #%d - %s\n ", impidcurso, impcurso);
}

char *Listacurso(TipoUser user,char *Newcurso){
    int idcurso;
    char nomecurso[50];
    idcurso = GetIdcurso(user);
    if(idcurso == 1){
        strcpy(nomecurso, "Administracao");
    }
    else if(idcurso == 2){
        strcpy(nomecurso, "Educacao Fisica");
    }
    else if(idcurso == 3){
        strcpy(nomecurso, "Ciencias Biologicas");
    }
    else if(idcurso == 4){
        strcpy(nomecurso, "Ciencia da Computacao");
    }
    else if(idcurso == 5){
        strcpy(nomecurso, "Matematica");
    }
    else if(idcurso == 6){
        strcpy(nomecurso, "Fisica");
    }
    else if(idcurso == 7){
        strcpy(nomecurso, "Engenharia de Alimentos");
    }
    else if(idcurso == 8){
        strcpy(nomecurso, "Quimica");
    }
    else if(idcurso == 9){
        strcpy(nomecurso, "Gestao Ambiental");
    }
    else if(idcurso == 10){
        strcpy(nomecurso, "Agronomia");
    }
    strcpy(Newcurso, nomecurso);
}