#include "Header.h"
int main()
{
	system("chcp 1251>nul");
	HINSTANCE hDll = LoadLibrary(L"ExamDLL.dll");
	PrintHelloWorld printHelloWorld = (PrintHelloWorld)GetProcAddress(hDll, "PrintHelloWorld");
	Sum sum = (Sum)GetProcAddress(hDll, "Sum");

	printf("����� ����� = %d\n", sum(1, 2));
	printHelloWorld();
	FreeLibrary(hDll);
}