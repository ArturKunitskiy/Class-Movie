#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie()
{
	name = nullptr;
	genre = nullptr;
	director = nullptr;
	date = nullptr;
	time = 0.0;
	year = 0;
}

Movie::Movie(const char* n, double t, int y, const char* g, const char* d, const char* dt)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	genre = new char[strlen(g) + 1];
	strcpy_s(genre, strlen(g) + 1, g);

	director = new char[strlen(d) + 1];
	strcpy_s(director, strlen(d) + 1, d);

	date = new char[strlen(dt) + 1];
	strcpy_s(date, strlen(dt) + 1, dt);

	time = t;
	year = y;
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);

	genre = new char[strlen(obj.genre) + 1];
	strcpy_s(genre, strlen(obj.genre) + 1, obj.genre);

	director = new char[strlen(obj.director) + 1];
	strcpy_s(director, strlen(obj.director) + 1, obj.director);

	date = new char[strlen(obj.date) + 1];
	strcpy_s(date, strlen(obj.date) + 1, obj.date);

	time = obj.time;
	year = obj.year;
}

Movie::~Movie()
{
	delete[] name;
	delete[] genre;
	delete[] director;
	delete[] date;
	cout << "Destructor" << endl;
}

void Movie::Print()
{
	cout << "Name: " << name << "\t"
		 << "Genre: " << genre << "\t"
		 << "Director: " << director << "\t"
		 << "Date: " << date << "\t"
		 << "Time: " << time << "\t"
		 << "Year: " << year << endl;
}