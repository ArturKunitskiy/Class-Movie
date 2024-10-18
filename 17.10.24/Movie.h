#pragma once
#include <iostream>
using namespace std;

class Movie
{
	char* name;
	char* genre;
	char* director;
	char* date;
	double time;
	int year;

public:
	Movie(); // constructor without params
	Movie(const char* n, double t, int y, const char* g,const char* d, const char* dt); //constructor by params
	Movie(const Movie & obj); // copy constructor
	~Movie(); // destructor
	void Print();
};