#include <iostream>
#include <stdio.h> //lib para usar switch
#include <conio.h> //lib para usar getch
#include "string" //lib para uso de variables string

using namespace std;

int main ()
{
    int opcion, numA, numB;
    float Total;
    string opera;
    cout << "Operaciones Matematicas Basicas" << "\n\n" << endl;
    printf("Ingrese primer numero (A): ");
    scanf("%d", &numA);
    printf("\nIngrese segundo numero (B): ");
    scanf("%d", &numB);
    printf("\n");
    cout << "1.- SUMA" << endl;
    cout << "2.- RESTA" << endl;
    cout << "3.- MULTIPLICACION" << endl;
    cout << "4.- DIVISION" << "\n" << endl;
    printf("Elija una opcion: ");
    scanf("%d", &opcion);
    switch (opcion)
    {
        case 1: Total = numA + numB; opera = "A + B";
        break;
        case 2: Total = numA - numB; opera = "A - B";
        break;
        case 3: Total = numA * numB; opera = "A x B";
        break;
        case 4: Total = (numA + 0.0) / numB; opera = "A / B";
        break;
        default: cout << "Ha ingresado una opcion incorrecta" << endl;
    }
    cout << "El resultado de " << opera << " es: " << Total << "\n" << endl;
    printf("Presione cualquier tecla para SALIR...");

    //Esto permite pausar la ejecucion hasta presionar un caracter
    char cad;
    cad = (char)getch();
    return 0;
}