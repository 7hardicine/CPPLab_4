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

	cout << "Введите строку:" << endl;
	char* string = new char[MAXSIZE];
	cin.getline(string, MAXSIZE);

	char symbol;
	cout << "Задайте сивол, на который должно заканчиваться слово: ";
	cin >> symbol;

	int i = 0;
	while (*(string + i) != '\0')
	{
		if (*(string + i) == symbol && (*(string + i + 1) == ' ' || *(string + i + 1) == '\0'))
		{
			int j = i;
			while (*(string + j - 1) != ' ')
			{
				j--;
				if (j == 0)
				{
					break;
				}
			}
			for (j; j <= i; j++)
			{
				cout << *(string + j);
			}
			cout << endl;
		}
		i++;
	}

	delete[] string;

	system("pause");
	return 0;
}