#include <stdio.h>
#include "suma_digitos.h"

int suma_digitos(int n1)
{
	return((n1%10)+digitos(n1/10)); //caso recursivo
}
