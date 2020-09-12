#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#endif
/**
 * @brief Pide el ingreso de un numero
 *
 * @param char[] Texto para pedir el dato
 *
 * @return float Un numero flotante
 */
float pedirNumero(char texto[]);

/**
 * @brief Suma los numeros flotantes ingresados
 *
 * @param float num1 1er operando
 * @param float num2 2do operando
 *
 * @return float resultado de la suma
 */

float sumarNumeros(float num1, float num2);

/**
 * @brief Resta los numeros flotantes ingresados
 *
 * @param float num1 1er operando
 * @param float num2 2do operando
 *
 * @return float resultado de la resta
 */

float restarNumeros(float num1, float num2);

/**
 * @brief Divide los numeros flotantes ingresados
 *
 * @param float num1 1er operando
 * @param float num2 2do operando
 *
 * @return float cociente de la division
 */

float dividirNumeros(float num1, float num2);

/**
 * @brief Multiplica los numeros flotantes ingresados
 *
 * @param float num1 1er operando
 * @param float num2 2do operando
 *
 * @return float producto de la multiplicacion
 */

float multiplicarNumeros(float num1, float num2);

/**
 * @brief Valida si el numero ingresado es natural
 *
 * @param float num, es el numero a analizar
 *
 * @return int, si es natural devuelve un 0, de lo contrario un 1.
 */

int validarNatural(float num);

/**
 * @brief Calcula el factorial del numero ingresado
 *
 * @param int num, el numero a aplicar el factorial
 *
 * @return double resultado del factorial del numero ingresado
 */

double factorial(int num);
