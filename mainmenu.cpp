#include "Flower.h"
#include <iostream>
#include <conio.h>
using namespace std;


using namespace std;
int glavmenu;

void Menu()
{
	cout << "Введите номер и нажмите Enter" << endl;
	cout << " 0 - Выход" << endl;
	cout << " 1 - Ввод данных" << endl;
	cout << " 2 - Вывод" << endl;
	cout << " 3 - Изменить" << endl;
	cout << " 4 - Удалить" << endl;
	cout << " 5 - Добавить" << endl;
	cout << " 6 - Cортировка" << endl;
	cout << " 7 - Сохранение" << endl;
	cout << " 8 - Поиск" << endl;
	cout << "Ваш выбор: ";
	cin >> glavmenu;
}


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Menu();
	//иницилизация данных
	int actions;

	//int* pn = &n;
	int kol = 0;

	//Массив
	Flower* data = new Flower[kol];

	while (glavmenu != 0)
	{
		switch (glavmenu)
		{
		case 1:
			system("cls");//очистка консоли
			cout << "Ввод вручную или из файла (1 если вручную):";
			cin >> actions;
			system("cls");
			if (actions == 1) {
				data->Add(data, kol);

			}
			else {
				//ввод из файла
			   ///cout << "Введите название из файла";
			   //cin >> fileName; // "Input.txt"
				data->Load(data, kol);
			}
			system("pause");
			system("cls");
			Menu();
		case 2:
			system("cls");
			if (kol != 0) {
				data->Print(data, kol);
			}
			else
				cout << "Данные пусты" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 3:
			system("cls");
			if (kol != 0) {
				data->Edit(data, kol);


			}
			else
				cout << "Данные пусты " << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 4:
			system("cls");
			if (kol != 0) {
				data->Delete(data, kol);
			}
			else
				cout << "Данные пусты" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 5:
			system("cls");
			if (kol != 0) {
				data->Add(data, kol);

				kol++;
			}
			else
				cout << "Данные пусты" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 6:
			system("cls");
			if (kol != 0) {
				data->Sort(data, kol);
			}
			else
				cout << "Данные пусты" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 7:
			system("cls");
			//cout << "Введиет навзание файла :";
		//	cin >> fileName;
			if (kol != 0) {
				data->Save(data, kol);
			}
			else
				cout << "Данные пусты" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 8:
			system("cls");
			if (kol != 0) {
				data->Search(data, kol);
			}
			else
				cout << "Данные пусты" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		default:
			cout << "Номер введен неверно!!!" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		}
		cin.get();
	}
	return 0;
}
