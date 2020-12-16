/*
Una empresa de software tiene planificado comprar programas para el desarrollo de
aplicaciones móviles. El costo es variable según el fabricante elegido. También deberá
elegir el tipo de programa y si es Lenguaje de Programación debe elegir el dispositivo
(Celulares, Tablas y Otros)
*/
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int ingresenum()

{
	int num;
	cout << "ingrese numero: "; cin >> num;
	while (num <= 0)
	{
		cout << "ingrese numero: "; cin >> num;
	}
	return num;

}


int sumaimpares(int n)


{
	int i = 1, suma = 0;
	while (i <= n)
	{
		suma = suma + i;
		i = i + 2;
	}
	return suma;
}


int main()
{
	int n;
	n = ingresenum();
	cout << "la suma de los: "
		<<n<<"primeros nuemeros impares: "<< sumaimpares(n);
	_getch();

}
