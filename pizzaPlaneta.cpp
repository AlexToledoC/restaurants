/* Ejercicio: pizza planeta
Autor: Alejandro Toledo Cuenca	
Fecha creaci�n: 19/01/2022
Descripcion: representar el proceso de venta de una compra en pizza planeta */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
//Variables
int tamano_pizza, pizza_mediana = 289, pizza_familiar = 310, familiar_queso = 350, precio_ensalada = 110, precio_spaghetti = 139, seleccion, total = 0, monto, cambio, acumulado, factura, IVA = 1.16, RFC; 
string otro_producto;

//Programa
int main ()
{
	printf("Este programa es para escoger tus alimentos en pizza planeta. �Provecho!\n");
	getch();
	system("cls");
	do 
	{
		printf("Nuestros productos disponibles son:\n\n\n");
		printf("PIZZAS................Mediana $289\n");
		printf("1. Queso              Familiar $310\n");
		printf("2. Pepperoni          Familiar con orilla de queso* $350\n");
		printf("3. Hawaiana  \n");
		printf("4. Mexicana \n");
		printf("5. Nutella* \n");
		printf("*No aplica \n\n");
		printf("ENSALADAS.............$110\n");
		printf("6. Pollo \n");
		printf("7. Atun \n\n");
		printf("Espagueti.............$139\n");
		printf("8. A la bolo�esa\n");
		cout << "\nEscoja un producto introduciendo su repectivo n�mero (1, 2, 3, 4, 5, 6, 7, 8):\n";
		cin >> seleccion;
		switch(seleccion)
		{
			case 1:
			{
				cout << "Escoge el tama�o para tu pizza de queso\nIngresa el respectivo n�mero\n1. Mediana\n2. Familiar\n3.Familiar con orilla de queso\n";
				cin >> tamano_pizza;
				if (tamano_pizza == 1)
				{
					acumulado = pizza_mediana;
				}
				else if (tamano_pizza == 2)
				{
					acumulado = pizza_familiar;
				}
				else if (tamano_pizza == 3)
				{
					acumulado = familiar_queso;
				}
				else
				{
					printf("Por favor ingresa una opcion valida\n");
					acumulado = 0;
				}
				break;
			}
			case 2:
			{
				cout << "Escoge el tama�o para tu pizza de pepperoni\nIngresa el respectivo n�mero\n1. Mediana\n2. Familiar\n3.Familiar con orilla de queso\n";
				cin >> tamano_pizza;
				if (tamano_pizza == 1)
				{
					acumulado = pizza_mediana;
				}
				else if (tamano_pizza == 2)
				{
					acumulado = pizza_familiar;
				}
				else if (tamano_pizza == 3)
				{
					acumulado = familiar_queso;
				}
				else
				{
					printf("Por favor ingresa una opcion valida\n");
					acumulado = 0;
				}
				break;
			}
			case 3:
			{
				cout << "Escoge el tama�o para tu pizza hawaiana\nIngresa el respectivo n�mero\n1. Mediana\n2. Familiar\n3.Familiar con orilla de queso\n";
				cin >> tamano_pizza;
				if (tamano_pizza == 1)
				{
					acumulado = pizza_mediana;
				}
				else if (tamano_pizza == 2)
				{
					acumulado = pizza_familiar;
				}
				else if (tamano_pizza == 3)
				{
					acumulado = familiar_queso;
				}
				else
				{
					printf("Por favor ingresa una opcion valida\n");
					acumulado = 0;
				}
				break;
			}
			case 4:
			{
			cout << "Escoge el tama�o para tu pizza mexicana\nIngresa el respectivo n�mero\n1. Mediana\n2. Familiar\n3.Familiar con orilla de queso\n";
				cin >> tamano_pizza;
				if (tamano_pizza == 1)
				{
					acumulado = pizza_mediana;
				}
				else if (tamano_pizza == 2)
				{
					acumulado = pizza_familiar;
				}
				else if (tamano_pizza == 3)
				{
					acumulado = familiar_queso;
				}
				else
				{
					printf("Por favor ingresa una opcion valida\n");
					acumulado = 0;
				}
				break;
			}
			case 5:
			{
				cout << "Escoge el tama�o para tu pizza de nutella\nIngresa el respectivo n�mero\n1. Mediana\n2. Familiar\n";
				cin >> tamano_pizza;
				if (tamano_pizza == 1)
				{
					acumulado = pizza_mediana;
				}
				else if (tamano_pizza == 2)
				{
					acumulado = pizza_familiar;
				}
				else
				{
					printf("Por favor ingresa una opcion valida\n");
					acumulado = 0;
				}
				break;
			}
			case 6:
			{
				printf("\nEnsalada de pollo a�adida al carrito");
				acumulado = precio_ensalada;
				break;
			}
			case 7:
			{
				printf("\nEnsalada de at�n a�adida al carrito");
				acumulado = precio_ensalada;
				break;
			}
			case 8:
			{
				printf("\nEspagueti a la bolo�esa a�adido al carrito");
				acumulado = precio_spaghetti;
				break;
			}
			default:
			{
				acumulado = 0;
				printf("Por favor, ingresa una opci�n v�lida.\n");
				break;
			}
		}
		total += acumulado;
		cout << "\n�Deseas otro producto?\nEscribe si o no\n";
		cin >> otro_producto;
		system("cls");
	}
	while (otro_producto == "si" or otro_producto == "Si" or otro_producto == "S�");
	
	//Proceso de pago
	total = total * IVA;
	cout << "El total a pagar es: $" << total << "\n";
	cout << "\nIngrese el monto con el que desea pagar:\n";
	cin >> monto;
	cambio = monto - total;
	if (cambio < 0)
	{
		printf("Su compra no se ha podido realizar. Por favor intente m�s tarde.");
	}
	else
	{
		cout << "\nSu cambio es: $" << cambio << "\nGracias por su compra.";
		cout << "\n\n�Requiere factura?\nEscoja con el respectivo n�mero\n 1. Si \n 2. No \n";
		cin >> factura;
		if (factura == 1)
		{
			cout << "Por favor ingrese su RFC\n";
			cin >> RFC;
			printf("Vuelva pronto :)");
		}
		else 
		{
			printf("Vuelva pronto :)");
		}
	}
	getch();
    return 0;
	}
