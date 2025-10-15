/*
 * MemCrash - C Experiment
 *
 * ⚠️ WARNING / ADVERTENCIA
 *
 * This program repeatedly calls malloc() in an infinite loop to experiment
 * with pointers and memory management. Its execution may crash your system
 * or cause irreversible data loss.
 *
 * Este programa realiza malloc() de manera indefinida para experimentar
 * con punteros y manejo de memoria. Su ejecución puede bloquear el sistema
 * o causar pérdida irreversible de datos.
 *
 * USE AT YOUR OWN RISK / USAR BAJO SU PROPIO RIESGO
 * Recommended: virtual machines or isolated test environments only.
 * Recomendado: máquinas virtuales o entornos de prueba aislados únicamente.
 */
#include <stdio.h>
#include <stdlib.h>

void Memcrash(unsigned long long int size);
int main()
{
    while(1)
       Memcrash(12000000);
    return 0;
}
void Memcrash(unsigned long long int size) {
    int *a = malloc(size);
}
