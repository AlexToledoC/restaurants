/* Ejercicio: pizza planeta
Autor: Alejandro Toledo Cuenca	
Fecha creación: 19/01/2022
Descripcion: representar el proceso de venta de una compra en pizza planeta */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
//Variables
int tamano_pizza, pizza_mediana = 289, pizza_familiar = 310, familiar_queso = 350, precio_ensalada = 110, total_sinIVA, 
precio_spaghetti = 139, seleccion, monto, cambio, acumulado, personas, x = 0, totalPagar; 
string otro_producto, factura, RFC;
int main ()
{
	printf("Este programa es para escoger tus alimentos en pizza planeta. ¡Provecho!\n");
	getch();
	system("cls");
	cout << "¿Cuántas personas son en tu mesa?\n";
	cin >> personas;
	if (personas > 4)
	{
		printf("Por favor pide ayuda humana");
	}
	else
	{
		for (x = 0; x <= personas; x++)
		{
			printf("El menú se mostrará una para cada persona en la mesa. Favor de escoger sus alimentos.");
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
				printf("8. A la boloñesa\n");
				cout << "\nEscoja un producto introduciendo su repectivo número (1, 2, 3, 4, 5, 6, 7, 8):\n";
				cin >> seleccion;
				switch(seleccion)
				{
					case 1:
					{
						cout << "\nEscoge el tamaño para tu pizza de queso\nIngresa el respectivo número\n1. Mediana\n2. Familiar\n3. Familiar con orilla de queso\n";
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
						cout << "\nEscoge el tamaño para tu pizza de pepperoni\nIngresa el respectivo número\n1. Mediana\n2. Familiar\n3. Familiar con orilla de queso\n";
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
						cout << "\nEscoge el tamaño para tu pizza hawaiana\nIngresa el respectivo número\n1. Mediana\n2. Familiar\n3. Familiar con orilla de queso\n";
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
						cout << "\nEscoge el tamaño para tu pizza mexicana\nIngresa el respectivo número\n1. Mediana\n2. Familiar\n3. Familiar con orilla de queso\n";
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
						cout << "\nEscoge el tamaño para tu pizza de nutella\nIngresa el respectivo número\n1. Mediana\n2. Familiar\n";
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
						printf("\nEnsalada de pollo anadida al carrito");
						acumulado = precio_ensalada;
						break;
					}
					case 7:
					{
						printf("\nEnsalada de atun anadida al carrito");
						acumulado = precio_ensalada;
						break;
					}
					case 8:
					{
						printf("\nEspagueti a la bolonesa anadido al carrito");
						acumulado = precio_spaghetti;
						break;
					}
					default:
					{
						acumulado = 0;
						printf("Por favor, ingresa una opción válida.\n");
						break;
					}
				}
				total_sinIVA += acumulado;
				cout << "\n¿Deseas otro producto?\nEscribe si o no\n";
				cin >> otro_producto;
				system("cls");
			}
			while (otro_producto == "si");
		}
		//Proceso de pago
		totalPagar = total_sinIVA * 1.16;
		cout << "El total a pagar es: $" << totalPagar << "\n";
		cout << "\nIngrese el monto con el que desea pagar:\n";
		cin >> monto;
		cambio = monto - totalPagar;
		if (cambio < 0)
		{
			printf("Su compra no se ha podido realizar. Por favor intente más tarde.");
		}
		else
		{
			cout << "\nSu cambio es: $" << cambio << "\nGracias por su compra.";
			cout << "\n\n¿Requiere factura?\nEscriba si o no\n";
			cin >> factura;
			if (factura == "si" or factura == "Si")
			{
				cout << "\nSu cuenta desglosada es:\n\nSubtotal: $" << total_sinIVA;
				cout << "\nEl IVA es: $" << total_sinIVA * .16;
				cout << "\nTotal pagado: $" << totalPagar;
				cout << "\nPor favor ingrese su RFC\n";
				cin >> RFC;
				printf("Vuelva pronto :)");
			}
			else 
			{
				printf("Vuelva pronto :)");
			}
		}
	}
}
