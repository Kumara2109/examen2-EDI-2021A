#include <stdio.h>

#define N 5
#define M 2

void leeArreglos(int C[N], char nom[N][20], float ES[N][M]);
void ordenarTodo(int c, char nom, float ES[N][M]);
void imprimeTodo(int c, char nom, float ES[N][M]);
int empleadoAlto(float ES[N]);

int main()
{
    int clave[N];
    char nombres[N][20];
    float estatusueldo[N][M];
    int pos;

    leeArreglos(clave, nombres, estatusueldo);
    ordenarTodo(clave, nombres, estatusueldo);
    imprimeTodo(clave, nombres, estatusueldo);
    pos = empleadoAlto(estatusueldo[N]);



    return 0;
}

void imprimeTodo(int c, char nom, float ES[N][M])
{

}


void Intercambio(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenarTodo(int c, char nom, float ES[N][M])
{
    int i, j, b;

    for ( i = 1; i < M; i++)
    {
        b = 0;
        for ( j = 0; i < M-1; j++)
        {
            if (ES[1][j] < ES[1][j + 1])
            {
                Intercambio(&c[j], &c[j + 1]);
                Intercambio(&)


            }
            
        }
        
    }
    
}

int empleadoAlto(float ES[N])
{
    int pos = -1;
    int menor = ES[0];

    for (int i = 0; i < N; i++)
    {
        if (ES[N] < menor)
        {
            menor = ES[i];
            pos = i;

        }
        
    }

    return pos;
}

void leeArreglos(int C[N], char nom[N][20], float ES[N][M])
{
    int i;

    for ( i = 0; i < N; i++)
    {
        printf("Dame la clave del empleado: ");
        scanf("%d", &C[i]);

        printf("Dame el nombre del empleado: ");
        scanf("%s", &nom[i]);

        for (int s = 0; s < M; s + 2)
        {
            printf("Dame la estatura del empleado: ");
            scanf("%f", &ES[i][s]);
        }

        for (int s = 1; s < M; s + 2)
        {
            printf("Dame el sueldo del empleado: ");
            scanf("%f", &ES[i][s]);
        }
        
        

    }
    
}
