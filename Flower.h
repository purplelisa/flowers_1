#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <istream>
#include <cmath>
using namespace std;
#define Size 256
class Flower
{
private:
	char* name;
	char type[15];
	double price;
	int day, month, year;
	//Flower* data;
	//int count;

	//int n;
	int  Correct(char* str, int mode);
public:
	bool is_equal(double x, double y) {
		return std::fabs(x - y) < std::numeric_limits<double>::epsilon();
	}
	//void Print();
	Flower();
	//~Flower();
	void Copy(Flower* (&d_n), Flower* (&d_o), int count);
	bool IsEmpty();
	//void Copy(int n, Flower* org, Flower* res, int excl);
	Flower(const Flower*& data);
	//Flower(char*, char, double, int, int, int);
	void Input();
	void Add(Flower*& data, int& count);
	void Delete(Flower*& data, int& count);
	void Edit(Flower*& data, int count);
	void Sort(Flower*& data, int count);
	void Search(Flower*& data, int count);
	//void Printed(Flower*& data, int count);
	void Save(Flower*& data, int count);
	void Load(Flower*& data, int& count);
	void Print(Flower*& data, int count);
	void FlowerEntry(char* name, char* type, double price, int day, int month, int year);
	void Copy1(int n, Flower* org, Flower* res, int excl);
	void Dispose();
	/*int GetCount()
	{

		return count;
	}*/

};


