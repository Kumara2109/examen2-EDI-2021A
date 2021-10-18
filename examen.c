#include <stdio.h>
#include <string.h>

#define N 3
#define M 2
#define Col_Es 0
#define Col_S 1

void leeArreglos(int C[N], char nom[N][20], float ES[N][M]);
void ordenarTodo(int c[N], char nom[N][20], float ES[N][M]);
void imprimeTodo(int c[N], char nom[N][20], float ES[N][M]);
int empleadoAlto(float ES[N][M]);

int main()
{
    int clave[N];
    char nombres[N][20];
    float estatusueldo[N][M];
    int pos;

    leeArreglos(clave, nombres, estatusueldo);

    ordenarTodo(clave, nombres, estatusueldo);

    imprimeTodo(clave, nombres, estatusueldo);

    pos = empleadoAlto(estatusueldo);

    printf("Empleado mas alto: %s\n", nombres[pos]);
    printf("Y su estatura es: %f\n", estatusueldo[pos][Col_Es]);

    return 0;
}

void imprimeTodo(int c[N], char nom[N][20], float ES[N][M])
{
    int i;

    printf("Clave      Nombre       Estatura       Sueldo");

    for ( i = 0; i < N; i++)
    {
        printf("%d\t", c[i]);
        printf("%s\t", nom[i]);
        printf("%f\t", ES[i][Col_Es]);
        printf("%f\t", ES[i][Col_S]);

    }
    
}




void ordenarTodo(int c[N], char nom[N][20], float ES[N][M])
{
    int i, j;
    float aux;
    int auxClave;
    char auxNom[20];

    for ( i = 0; i < N - 1; i++)
    {
        for ( j = 0; j < N -1; j++)
        {
            if (ES[j][Col_S] < ES[j + 1][Col_S])
            {
                //Sueldo
                aux = ES[j][Col_S];
                ES[j][Col_S] = ES[j + 1][Col_S];
                ES[j + 1][Col_S] = aux;

                //Estatura
                aux = ES[j][Col_Es];
                ES[j][Col_Es] = ES[j + 1][Col_Es];
                ES[j + 1][Col_Es] = aux;

                //Clave 
                auxClave = c[j];
                c[j] = c[j + 1];
                c[j + 1] = auxClave;

                //Nombre
                strcpy(auxNom, nom[j]);
                strcpy(nom[j], nom[j + 1]);
                strcpy(nom[j + 1], auxNom);

            }
            
        }
        
    }
    
    
}

int empleadoAlto(float ES[N][M])
{
    int pos = -1;
    float mayor = ES[0][0];

    for (int i = 0; i < N; i++)
    {
        if (ES[i][0] > mayor)
        {
            mayor = ES[i][0];
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
        scanf("%s", nom[i]);

        printf("Dame la estatura del empleado: ");
        scanf("%f", &ES[i][0]);

        printf("Dame el suledo del empleado: ");
        scanf("%f", &ES[i][1]);
        
        

    }
    
}
