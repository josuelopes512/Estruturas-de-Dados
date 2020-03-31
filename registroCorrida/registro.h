typedef struct RegistroCorrida TRegistroCorrida;
TRegistroCorrida *criar();
void ListarRegistroCorrida(TRegistroCorrida *rc, int n, int info);
float CalculaMedia(TRegistroCorrida *rc, int n);
float CalculaMaior(TRegistroCorrida *rc, int n);
