#ifndef UHISYSTEM_USER_H
#define UHISYSTEM_USER_H
typedef struct{
    char nick[10], password[10], curso[50];
    int id, idcurso;
}TipoUser;

void InicializaUser(TipoUser *user);//

void SetNick(TipoUser *user, char *Newnick);//
void SetPass(TipoUser *user, char *Newpass);//
void SetID(TipoUser *user, int Newid);//
void SetIdcurso(TipoUser *user, int Newcurso);//

char *GetNick(TipoUser user);//
char *GetPass(TipoUser user);//
int GetID(TipoUser user);//
int GetIdcurso(TipoUser user);//

char *Listacurso(TipoUser user,char *Newcurso);

void ImprimeUsuario(TipoUser user);
#endif //UHISYSTEM_USER_H