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