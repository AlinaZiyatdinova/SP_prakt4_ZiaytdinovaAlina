#include <iostream>
#include <stdio.h>
using namespace std;
struct Book
{
	char author[100];
	char book_name[100];
	int year;
};
int main()
{
	setlocale(LC_ALL, "rus");
	char line[225];
	FILE* file = fopen("Bibl.txt","r");
	cout << "Вывод книг, выпущенных после 1960 года" << endl;
	while (!feof(file))
	{
		Book book;
		while (fscanf(file, "%s %s %d", book.author, book.book_name, &book.year) != EOF)
		{
			if (book.year > 1960)
			{
				cout << book.author << endl;
				cout << book.book_name << endl;
				cout << book.year << endl;
				cout << endl;
			}
		}
	}
	fclose(file);
}

