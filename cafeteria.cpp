/* Ejercicio: cafetería
Autor: Alejandro Toledo Cuenca	
Fecha de creación: 27/04/2022
Descripción: simular la compra de un café */

#include <iostream>
#include <conio.h>

using namespace std;

int main(), i = 0, eleccion_leche, cantidad, eleccion_cafe, aditivos(), pago(), matriz(), columnas = 0, filas = 0, otra_orden();
float ventas[100][4], importe, metodo_pago; 
string crema_batida, chispas, leche, otro_pedido;


int otra_orden()
{
	cout << "\nDesea hacer otro pedido? Escriba si o no: \n";
	cin >> otro_pedido;
	if (otro_pedido == "si" or otro_pedido == "Si" or otro_pedido == "si ")
	{
		main();
	}
	else
	{
		for (i = 0; i < columnas; i++)
		{
			cout << "Clave Cantidad Importe Tipo pago \n";
			cout << "|  ";
			cout << ventas[i][0] << " |    ";
			cout << ventas[i][1] << "   | $";
			cout << ventas[i][2] << "    |  ";
			cout << ventas[i][3] << "    | \n";
		}
		printf("\nGracias por su visita.");
		getch();
	}
}


float matriz(int eleccion_cafe, int cantidad, float importe, float metodo_pago)
{
	ventas[columnas][0] = eleccion_cafe;
	ventas[columnas][1] = cantidad;
	ventas[columnas][2] = importe;
	ventas[columnas][3] = metodo_pago;
	columnas += 1;
}


int pago(float importe, int cantidad, int eleccion_cafe)
{
	cout << "El importe a pagar es: $" << importe << endl;
	printf("Escoja el método de pago: \n");
	printf("1. Efectivo \n");
	printf("2. Tarjeta de débito \n");
	printf("3. Tarjeta de crédito \n");
	cout << "Ingrese el respectivo número (1-3): \n";
	cin >> metodo_pago;
	switch (metodo_pago)
	{
		case 1:
			matriz(eleccion_cafe, cantidad, importe, 1.1);
			break;
		case 2:
			matriz(eleccion_cafe, cantidad, importe, 1.2);
			break;
		case 3:
			matriz(eleccion_cafe, cantidad, importe, 1.3);
			break;
		default:
			printf("Por favor, ingresa una opción válida");
	}
	otra_orden();
	
}


int aditivos(int importe, int eleccion_cafe)
{
	cout << "¿Cuántos cafés desea? \n";
	cin >> cantidad;
	importe = cantidad * importe;
	system("cls");
	printf("Escriba si o no: \n");
	cout << "¿Desea agregar crema batida? " << endl;
	cin >> crema_batida;
	if (crema_batida == "si")
	{
		importe += (10 * cantidad);
	}
	cout << "¿Desea agregar chispas de chocolate? " << endl;
	cin >> chispas;
	if (chispas == "si")
	{
		importe += (10 * cantidad);
	}
	cout << "¿Desea cambiar el tipo de leche? " << endl;
	cin >> leche;
	if (leche == "si")
	{
		printf("1. Entera...................+ $12.00 \n");
		printf("2. Light....................+ $15.00 \n");
		printf("3. Almendra.................+ $20.00 \n");
		printf("4. Coco.....................+ $20.00 \n");
		printf("5. No deseo cambiar.........+ $0.00 \n");
		cout << "Ingrese el respectivo número (1-5):" << endl;
		cin >> eleccion_leche;
		switch (eleccion_leche)
		{
			case 1:
				importe += (12 * cantidad);
				break;
			case 2:
				importe += (15 * cantidad);
				break;
			case 3:
				importe += (20 * cantidad);
				break;
			case 4:
				importe += (20 * cantidad);
				break;
			case 5:
				break;
			default:
				printf("Por favor, ingresa una opción válida.");
		}
	}
	pago(importe, cantidad, eleccion_cafe);
}


int main()
{	
	printf("Bienvenid@ al café jarocho. \n \n");
	printf("1. Capuchino..........$45.00 \n");
	printf("2. Moka...............$50.30 \n");
	printf("3. Mokachino..........$65.00 \n");
	printf("4. Latte vainilla.....$50.30 \n");
	printf("5. Americano..........$35.00 \n");
	cout << "Ingresa el respectivo número del café que desea ordenar (1-5): \n";
	cin >> eleccion_cafe;
	switch (eleccion_cafe)
	{
		case 1:
			aditivos(45, 1);
			break;
		case 2:
			aditivos(50.3, 2);
			break;
		case 3:
			aditivos(65, 3);
			break;
		case 4:
			aditivos(50.3, 4);
			break;
		case 5:
			aditivos(35, 5);
			break;
		default:
			printf("Por favor, ingrese una opción válida.");
			main();
			break;
	}
}
