#include "Dll.h"
BOOL WINAPI DllMain()
{
	return TRUE;
}
int Sum(int a, int b)
{
    return a + b;
}
void PrintHelloWorld()
{
    printf("Hello world!\n");
}
