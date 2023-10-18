#include <stdio.h> /* esto es inclusion de la biblioteca estandar */
	int main()
{	
	int n = 0; /* esta es la variable que le asignaremos el valor aleatorio */

		if (n > 0) 
	{
		printf("%d is positivive/n", n); /* si "n" es mayor que 0 imprime que es positivo */
	}
		else if (n < 0) 
	{
		printf("%d is negative/n", n); 
	}
		else 
	{
		printf("%d is zero/n", n); /* si ninguna de las dos anteriores se cumple 'n' debe ser 0 */
	} 
return 0; /* indica que el programa termino con exito */
}
