#include <clocale>
#include <Windows.h>
#include <iostream>
#define MAXSIZE 101

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "¬ведите строку:" << endl;
	char* string = new char[MAXSIZE];
	cin.getline(string, MAXSIZE);

	int i = 0;
	while (*(string + i) != '\0')
	{
		if (*(string + i) == 't' && *(string + i + 1) == 'w' && *(string + i + 2) == 'o')
		{	
			*(string + i) = '2';
			int j = i;
			while (*(string + j) != '\0')
			{
				*(string + j + 1) = *(string + j + 3);
				j++;
			}
		}
		i++;
	}

	cout << string << endl;

	delete[] string;

	system("pause");
	return 0;
}