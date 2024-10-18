#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
	Movie obj1("LOTR", 4.26, 2002, "Action", "Peter Jackson", "1 of February, 2002");
	obj1.Print();

	Movie arr[3]{ {"Titanic", 1.32, 1992, "Chupapi", "Munyanyu", "Chupapi, 666"},{"Hobbit", 3.12, 2012, "Chupapi", "Munyanyu", "Chupapi, 666"}, {"Avatar", 2.11, 2009, "Chupapi", "Munyanyu", "Chupapi, 666"}};
	for (int i = 0; i < 3; i++)	
	{
		arr[i].Print();
	}
}