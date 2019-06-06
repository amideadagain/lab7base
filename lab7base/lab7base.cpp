#include "pch.h"
#include <iostream>
#include <string>
#include <stack>

struct Book
{
	std::string name;
	int count;
	void show()
	{
		std::cout << "Name: " << name;
		std::cout << "\nPages: " << count << '\n';
	}
};
int main()
{
	std::stack<Book> books;
	books.push({ "Qwe",4 });
	books.push({ "Qwasfe",44 });
	books.push({ "Qwsfae",45 });
	std::cout << "book count =" << books.size() << '\n';

	while (!books.empty())
	{
		auto temp = books.top();
		books.pop();
		temp.show();
	}
}