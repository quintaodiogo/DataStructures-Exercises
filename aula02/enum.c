#include <stdio.h>
#include <windows.h>

enum Status
{
    LOW = 15,
    MEDIUM = 50,
    HIGH = 80
};
enum Semana
{
    Seg = 1,
    Ter,
    Qua,
    Qui,
    Sex,
    Sab,
    Dom
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    enum Status resultado = MEDIUM;
    enum Semana dia = Ter;
    switch (dia)
    {
    case Seg:
        printf("Segunda \n");
        break;
    case Ter:
        printf("Terça \n");
        break;
    case Qua:
        printf("Quarta \n");
        break;
    case Qui:
        printf("Quinta \n");
        break;
    case Sex:
        printf("Sexta \n");
        break;
    case Sab:
        printf("Sabado \n");
        break;
    case Dom:
        printf("Domingo \n");
        break;

    default:
        printf("Inválido !");
        break;
    }

    switch (resultado)
    {
    case LOW:
        printf("Nível da bateria: %d", resultado);
        break;
    case MEDIUM:
        printf("Nível da bateria: %d", resultado);
        break;
    case HIGH:
        printf("Nível da bateria: %d", resultado);
        break;

    default:
        break;
    }
}