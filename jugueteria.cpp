/* Ejercicio: juguetería
Autor: Alejandro Toledo Cuenca	
Fecha creación: 09/02/2022
Descripción: simular el software para comprar en una juguetería */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int billete200, billete100, billete50, billete20, moneda1, moneda2, moneda5, moneda10, seleccion, monto, cambio, precio1 = 200, precio2 = 6500, precio3 = 125, precio4 = 185, precio5 = 210, precio6 = 200, precio7 = 130, precio8 = 99, precio9 = 1, precio10 = 299, precio11 = 300, precio12 = 3, precio13 = 245, precio14 = 187, precio15 = 350, acumulado, numero, par, impar, total; 
string quieroComprar, otro_producto;

int main ()
{
	printf("\nBienvenid@ al catálogo de la juguetería\n");
	printf(" Los productos disponibles son: \n\n");
	printf("1. Max Steel \n");
	printf("2. Xbox \n");
	printf("3. Hot wheels \n");
	printf("4. Beyblade \n");
	printf("5. Bakugan \n");
	printf("6. Barbie \n");
	printf("7. Bebote \n");
	printf("8. Peppa \n");
	printf("9. Chicas superpoderosas \n");
	printf("10. My little pony \n");
	printf("11. Twister \n");
	printf("12. Caras y gestos \n"); 
	printf("13. Jenga \n");
	printf("14. Adivina quien \n");
	printf("15. Monopoly  \n");
	cout << "\n¿Desea agregar algún producto al carrito? \nEscriba si o no \n";
	cin >> quieroComprar;
	if (quieroComprar == "si" or quieroComprar == "Si")
	{
		do
		{
			cout << "\nEscoja un producto introduciendo su repectivo número (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15):\n";
			cin >> seleccion;
			switch(seleccion)
			{
				case 1:
				{
					acumulado = precio1;
					break;
				}
				case 2:
				{
					acumulado = precio2;	
					break;
				}
				case 3:
				{
					acumulado = precio3;
					break;
				}
				case 4:
				{
					acumulado = precio4;
					break;
				}
				case 5:
				{
					acumulado = precio5;
					break;
				}
				case 6:
				{
					acumulado = precio6;
					break;
				}
				case 7:
				{
					acumulado = precio7;
					break;
				}
				case 8:
				{
					acumulado = precio8;
					break;
				}
				case 9:
				{
					acumulado = precio9;
					break;
				}
				case 10:
				{
					acumulado = precio10;
					break;
				}
				case 11:
				{
					acumulado = precio11;
					break;
				}
				case 12:
				{
					acumulado = precio12;
					break;
				}
				case 13:
				{
					acumulado = precio13;
					break;
				}
				case 14:
				{
					acumulado = precio14;
					break;
				}
				case 15:
				{
					acumulado = precio15;
					break;
				}
				default:
				{
					acumulado = 0;
					printf("Por favor, ingresa una opción válida.\n");
					break;
				}
			}
			total = total + acumulado;
			cout << "\n¿Deseas otro producto?\nEscribe si o no\n";	
			cin >> otro_producto;
			system("cls");
		}
		while (otro_producto == "si" or otro_producto == "Si");
		//Proceso de pago
		cout << "El total a pagar es: $" << total << "\n";
		cout << "\nIngrese el monto con el que desea pagar:\n";
		cin >> monto;
		cambio = monto - total;
		if (cambio < 0)
		{
			printf("Su compra no se ha podido realizar. Por favor intente más tarde.");
		}
		else
		{
			if (cambio >= 200)
			{
				billete200 = cambio / 200;
			}
			else if (cambio >= 100)
			{
				billete100 = cambio % 100;
			}
			else if (cambio >= 50)
			{
				billete50 = cambio % 50;
			}
			else if (cambio >= 20)
			{
				billete20 = cambio % 20;
			}
			cout << "\nSu cambio es: \n";
			cout << billete200 << " billetes de 200\n";
			cout << billete100 << " billetes de 100\n";
			cout << billete50 << " billetes de 50\n";
			cout << billete20 << " billetes de 20\n";
			printf("\n \n \nGracias por su compra.\nVuelva pronto.");
		}
		getch();
	    return 0;
		}
	else
	{
		printf("Vuelva pronto");
	}
}
