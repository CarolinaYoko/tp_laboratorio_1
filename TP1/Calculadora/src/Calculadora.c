/*
 ============================================================================
 Name        : Calculadora.c
 Author      : Carolina Yokoyama
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main(void) {

	setbuf(stdout, NULL);

	float a;
	float b;
	float suma;
	float resta;
	float producto;
	float cociente;
	double factorial1;
	double factorial2;
	int opcion;
	char respuesta;
	int flagOp1 = 0;
	int flagOp2 = 0;
	int flagOp3 = 0;

	do {

		printf("  �Bienvenido! \n");
		printf("\n MENU DE OPCIONES: \n\n");
		printf("1. Ingresar el 1er operando (A = %.2f)\n", a);
		printf("2. Ingresar el 2do operando (B = %.2f) \n", b);
		printf("3. Calcular todas las operaciones \n");
		printf("4. Informar resultados \n");
		printf("5. Salir \n");
		printf("\nIngrese una opcion: ");
		scanf("%d", &opcion);

		while (!(opcion >0 && opcion < 6)) {
			printf("\nLa opcion ingresada no es valida. Ingrese una opcion: ");
			fflush(stdin);
			scanf("%d", &opcion);
		}

		switch (opcion) {
		case 1:
			system("cls");
			if (flagOp1 == 0) {
				flagOp1 = 1;
				a = pedirNumero("\nPor favor, ingrese el primer operando: ");
			}
			system("pause");
			break;
		case 2:
			system("cls");
			if (flagOp1 == 1) {
				flagOp2 = 1;
				b = pedirNumero("\nPor favor, ingrese el segundo operando: ");

			} else {
				printf("Debe ingresar el 1er operando \n");
			}
			system("pause");
			break;
		case 3:
			system("cls");

			if (flagOp2 == 1) {
				flagOp3 = 1;
				suma = sumarNumeros(a, b);
				resta = restarNumeros(a, b);
				producto = multiplicarNumeros(a, b);
				cociente = dividirNumeros(a, b);
				factorial1 = factorial(a);
				factorial2 = factorial(b);
			} else if (flagOp1 == 0 && flagOp2 == 0) {
				printf("Debe ingresar los operando antes de calcular \n");
			} else {
				printf("Falta ingresar el primer operando \n");
			}
			system("pause");
			break;
		case 4:
			system("cls");

			if (flagOp3 == 1) {

				printf("\n A = %.2f \n",a);
				printf("\n B = %.2f \n",b);

				// SUMA
				printf("\n El resultado de A+B es = %.2f \n", suma);

				//RESTA
				printf("\n El resultado de A-B es = %.2f \n", resta);

				//DIVISION
				if (b == 0) {
					printf("\n Error. No es posible la division por cero \n");
				} else {
					printf("\n El resultado de A/B es = %.2f \n", cociente);
				}

				//MULTIPLICACION
				printf("\n El resultado de A*B es = %.2f \n", producto);

				//FACTORIAL DE A
				if (validarNatural(a)) {
					printf("\n Error. %.2f no es un numero natural o cero\n", a);
				} else {
					printf("\n El factorial de A es: %.0lf \n", factorial1);
				}

				// FACTORIAL DE B
				if (validarNatural(b)) {
					printf("\n Error. %.2f no es un numero natural o cero\n", b);
				} else {
					printf("\n El factorial de B es: %.0lf \n\n", factorial2);
				}

				flagOp1 = 0;
				flagOp2 = 0;
				flagOp3 = 0;
			}

			else if (flagOp1 == 0 || flagOp2 == 0) {
				printf("\n Primero debe ingresar ambos operando antes de informar el resultado \n");
			} else if (flagOp3 == 0) {
				printf("\n Primero debe calcular las operaciones antes de infromarlos \n");

			}
			system("pause");
			break;
		case 5:
			system("cls");
			printf("\n �Desea salir? s/n ");
			fflush(stdin);
			scanf("%c", &respuesta);
			if (respuesta == 's') {
				break;
			}
		}
		system("cls");

	} while (respuesta != 's');

	return EXIT_SUCCESS;
}



