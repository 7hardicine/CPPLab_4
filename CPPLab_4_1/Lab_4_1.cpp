#include <clocale>
#include <Windows.h>
#include <iostream>
#define MAXSIZE 101

using namespace std;

char* input(char* string)
{
	cout << "Введите строку:" << endl;
	cin.getline(string, MAXSIZE);
	return string;
}
void output(char* string, int i, int j)
{
	for (j; j <= i; j++)
	{
		cout << *(string + j);
	}
	cout << endl;
}
void task(char* string, char symbol)
{
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
			output(string, i, j);
		}
		i++;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* string = new char[MAXSIZE];
	string = input(string);

	char symbol;
	cout << "Задайте сивол, на который должно заканчиваться слово: ";
	cin >> symbol;

	task(string, symbol);

	delete[] string;

	system("pause");
	return 0;
}