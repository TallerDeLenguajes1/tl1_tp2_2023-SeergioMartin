#include <stdio.h>
#include <stdlib.h>

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct pc
{
    int velocidad;
    int anio;
    int nucleos;
    char *tipos_cpu;
}typedef pc;

pc cargar();
void mostrar(pc aux);
void pcMasVieja(pc computadoras[5]);
void pcMasVeloz(pc computadoras[5]);

int main(){

    pc computadoras[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n-----PC[%d]:-----\n",(i+1));
        computadoras[i] = cargar();
    }

    puts("\n***************LISTADO DE PC's***************n");
    for (int i = 0; i < 5; i++)
    {
        mostrar(computadoras[i]);
    }

    pcMasVieja(computadoras);
    pcMasVeloz(computadoras);

    return 0;
}

pc cargar(){
    pc aux;

    printf("Ingrese Velocidad(entre 1 y 3 GHz):\n");
    scanf("%d",&aux.velocidad);
    printf("Ingrese Anio(entre 2015 y 2023):\n");
    scanf("%d",&aux.anio);
    printf("Ingrese Cantidad de Nucleos(entre 1 y 8):\n");
    scanf("%d",&aux.nucleos);
    aux.tipos_cpu = tipos[rand() % 6];

    return aux;
}

void mostrar(pc aux){
    printf("\n-----PC[%d]:-----\n",0+1);
    printf("Velocidad: %d\n",aux.velocidad);
    printf("Anio: %d\n",aux.anio);
    printf("Cantidad de Nucleos: %d\n",aux.nucleos);
    printf("Tipos de CPU: %s\n",aux.tipos_cpu);
}

void pcMasVieja(pc computadoras[5]){
    pc vieja = computadoras[0];
    for (int i = 0; i < 5; i++)
    {
        if (vieja.anio > computadoras[i].anio)
        {
            vieja = computadoras[i];
        }
    }
    printf("\n***************PC MAS VIEJA***************\n");
    printf("Velocidad: %d\n",vieja.velocidad);
    printf("Anio: %d\n",vieja.anio);
    printf("Cantidad de Nucleos: %d\n",vieja.nucleos);
    printf("Tipos de CPU: %s\n",vieja.tipos_cpu);
}

void pcMasVeloz(pc computadoras[5]){
    pc veloz = computadoras[0];
    for (int i = 0; i < 5; i++)
    {
        if (veloz.velocidad < computadoras[i].velocidad)
        {
            veloz = computadoras[i];
        }
    }
    printf("\n***************PC MAS VELOZ***************\n");
    printf("Velocidad: %d\n",veloz.velocidad);
    printf("Anio: %d\n",veloz.anio);
    printf("Cantidad de Nucleos: %d\n",veloz.nucleos);
    printf("Tipos de CPU: %s\n",veloz.tipos_cpu);
}