// a.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// implementar "esc" al codigo para volver atras.

#include <iostream>
#include <time.h>
#include <ctime>
#include <Windows.h>
#include <string.h>
#include "Discord.h"

using namespace std;

Discord* g_Discord;

int op1, op2, op3, op4, op5, subOp1, subOp2, subOp3;
int affirm, affirm2, affirm3, affirm4;
int qS = 650; // Quimica Sanguinia
int bP = 850; // Biopsia
int uT = 1250; // Ultrasonido
int cB = 15; // Cubrebocas
int gT = 17; // Guantes
int gA = 35; // Gel Antibacterial

#define MAXLEN 100

typedef char nombres[MAXLEN];

void menu()
{
    int eleccion;
    string usuarioName;
    char c;
    nombres array[5];
    reinicio:
    cout << "BIENVENIDO AL LABORATORIO Vida y Salud" << endl;
    //
    // hour and fecha
    //
    cout << "\n";
    cout << "Por favor ingrese su nombre: "; cin >> usuarioName;
    system("cls");
        cout << "BIENVENIDO AL LABORATORIO Vida y Salud" << endl;
        cout << "\nBienvenido/a, " + usuarioName << endl;
        cout << "\nPor favor eliga un estudio o insumo: \n";
        cout << "\n1.- estudio 1\n";
        cout << "2.- estudio 2\n";
        cout << "3.- estudio 3\n";
        cout << "4.- estudio 4\n";
        cout << "\n\n\nInfo New Update: here we go, we add DISCORD_RCP // external tool\n\n\n";
        cout << ""; cin >> eleccion;

        switch (eleccion) {
        case 1: system("cls");
            std::cout << "BIENVENIDO AL LABORATORIO Vida y Salud                                                             ID Sesion: " + usuarioName;
            std::cout << "\nUsted a seleccionado el primer estudio. Eliga que desea: " << endl;
            cout << "1. Quimica sanquinia $650" << endl;
            cout << "2. Biopsia $850" << endl;
            cout << "3. Ultrasonido $1250" << endl;
            cout << "4. Cubrebocas $15" << endl;
            cout << "5. Guantes $17" << endl;
            cout << "6. Gel Antibacterial $35" << endl;
            cout << "\nSeleccione una opcion: ";
            cin >> op1;
            if (op1 == 1) {
                system("cls");
            snoRestart:
                    std::cout << "BIENVENIDO AL LABORATORIO Vida y Salud                                                             ID Sesion: " + usuarioName;
                    std::cout << "\n";
                    cout << "\nQuimica Sanguinea, es un examen que mide los niveles de ciertas sustancias en la sangre el cual";
                    cout << "\nsuministra informacion al medico por medio de una serie de pruebas acerca del metabolismo del";
                    cout << "\ncuerpo humano y el funcionamiento de ciertos organos.";
                    std::cout << "\n";
                    cout << "\nEl precio unitario es de $650";
                    cout << "\nCuantas muestras quiere comprar? (max 5): ";
                cin >> subOp1;
                if ((subOp1 >= 1) && (subOp1 <= 5)) {
                    cout << "\nUsted a seleccionado: " << subOp1;
                    cout << "\nEs correcto? \n1. Si \n2. No" << endl;
                    cin >> affirm;
                    if (affirm == 1) {
                    affRestart:
                        int total;
                        int monto;
                        system("cls");
                        total = qS * subOp1;
                        std::cout << "                                                                                                   ID Sesion: " + usuarioName;
                        cout << "\nQuimica Sanguinea, Seleccionado: " << subOp1;
                        std::cout << "\n";
                        cout << "\nTotal a Pagar: " << total;
                        std::cout << "\n";
                        cout << "Monto: "; cin >> monto;
                        if (monto >= total) {
                            cout << "El monto ingresado es correcto\n";
                            system("pause");
                        }
                        else if (monto <= total)
                        {
                            cout << "Usted ha ingresado menos de lo establecido\n";
                            system("pause");
                            system("cls");
                            goto affRestart;
                        }
                        //
                        // Crear un sistema de devolucion de dinero si entrega más de lo debido.
                        //
                        std::cout << "                                                                                                   ID Sesion: " + usuarioName;
                        system("cls");
                        cout << "Gracias por tu preferencia, te esperamos pronto!\n";
                        system("pause");
                        system("cls");
                        goto reinicio;
                    }
                    else {
                        system("cls");
                        goto snoRestart;
                    }
                }
                else {
                    cout << "El numero indicado no esta dentro del rango\n";
                    system("pause");
                    system("cls");
                    goto snoRestart;
                }

            }
            else if (op1 == 2) {
                system("cls");
                restart2:
                std::cout << "BIENVENIDO AL LABORATORIO Vida y Salud                                                             ID Sesion: " + usuarioName;
                std::cout << "\n";
                cout << "\nUna Biopsia es un procedimiento que se realiza para extraer una pequena muestra del tejido";
                cout << "\nO de celulas del cuerpo para su analisis en un laboratorio";
                std::cout << "\n";
                cout << "\nEl precio unitario es de $850";
                cout << "\nCuantas muestras quiere comprar? (max 5): ";
                cin >> subOp2;
                if ((subOp2 >= 1) && (subOp2 <= 5)) {
                    cout << "\nUsted a seleccionado: " << subOp2;
                    cout << "\nEs correcto? \n1. Si \n2. No" << endl;
                    cin >> affirm2;
                    if (affirm2 == 1) {
                        aff2Restart:
                        int total2;
                        int monto2;
                        system("cls");
                        total2 = bP * subOp2;
                        std::cout << "                                                                                                   ID Sesion: " + usuarioName;
                        cout << "\nBiopsia, Seleccionado: " << subOp2;
                        std::cout << "\n";
                        cout << "\nTotal a Pagar: " << total2;
                        std::cout << "\n";
                        cout << "Monto: "; cin >> monto2;
                        if (monto2 >= total2) {
                            cout << "El monto ingresado es correcto\n";
                            system("pause");
                        }
                        else {
                            cout << "El monto ingresado no es correcto, vuelva a intentarlo\n";
                            system("pause");
                            system("cls");
                            goto aff2Restart;
                        }

                        std::cout << "                                                                                                   ID Sesion: " + usuarioName;
                        system("cls");
                        cout << "Gracias por tu preferencia, te esperamos pronto!\n";
                        system("pause");
                        system("cls");
                        goto reinicio;
                    }
                    else {
                        system("cls");
                        goto aff2Restart;
                    }
                }
                else {
                    system("cls");
                    goto restart2;
                }
            }
            else if (op1 == 3) {
            system("cls");
            restart3:
            std::cout << "BIENVENIDO AL LABORATORIO Vida y Salud                                                             ID Sesion: " + usuarioName;
            std::cout << "\n";
            cout << "\nLos ultrasonidos son una serie de ondas mecanicas. generalmente longitudinales, cuya";
            cout << "\nfrecuencia esta por encima de la capacidad del oido humano. En medicina, con fines de";
            cout << "\ndiagnostico, se emplean frecuencias entre 2 y 30MHz.";
            std::cout << "\n";
            cout << "\nEl precio unitario es $1250";
            cout << "\nCuantas muestras quiere comprar? (max 5): ";
            cin >> subOp3;
            if ((subOp3 >= 1) && (subOp3 <= 5)) {
                cout << "\nUsted a seleccionado: " << subOp3;
                cout << "\nEs correcto? \n1. Si \n2. No" << endl;
                cin >> affirm3;
                if (affirm3 == 1) {
                subMonto3:
                    int total3;
                    int monto3;
                    system("cls");
                    total3 = uT * subOp3;
                    std::cout << "                                                                                                   ID Sesion: " + usuarioName;
                    cout << "\nUltrasonido, Seleccionado: " << subOp3;
                    std::cout << "\n";
                    cout << "\nTotal a Pagar: " << total3;
                    std::cout << "\n";
                    cout << "Monto: "; cin >> monto3;
                    if (monto3 == total3) {
                        cout << "El monto ingresado es correcto\n";
                        system("pause");
                    }
                    else {
                        cout << "el monto ingresado no es correcto, por favor, vuelva a intentarlo\n";
                        system("pause");
                        system("cls");
                        goto subMonto3;
                    }

                    std::cout << "                                                                                                   ID Sesion: " + usuarioName;
                    system("cls");
                    cout << "Gracias por tu preferencia, te esperamos pronto!\n";
                    system("pause");
                    system("cls");
                    goto reinicio;
                }
                else {
                    system("cls");
                    goto restart3;
                }
            }
        }
    }
    
}

int main()
{
    g_Discord->Initialize();
    g_Discord->Update();
    menu();
    system("pause");
}