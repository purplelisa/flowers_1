#include "Flower.h"
#include <iostream>
#include <conio.h>
using namespace std;


using namespace std;
int glavmenu;

void Menu()
{
	cout << "������� ����� � ������� Enter" << endl;
	cout << " 0 - �����" << endl;
	cout << " 1 - ���� ������" << endl;
	cout << " 2 - �����" << endl;
	cout << " 3 - ��������" << endl;
	cout << " 4 - �������" << endl;
	cout << " 5 - ��������" << endl;
	cout << " 6 - C���������" << endl;
	cout << " 7 - ����������" << endl;
	cout << " 8 - �����" << endl;
	cout << "��� �����: ";
	cin >> glavmenu;
}


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Menu();
	//������������ ������
	int actions;

	//int* pn = &n;
	int kol = 0;

	//������
	Flower* data = new Flower[kol];

	while (glavmenu != 0)
	{
		switch (glavmenu)
		{
		case 1:
			system("cls");//������� �������
			cout << "���� ������� ��� �� ����� (1 ���� �������):";
			cin >> actions;
			system("cls");
			if (actions == 1) {
				data->Add(data, kol);

			}
			else {
				//���� �� �����
			   ///cout << "������� �������� �� �����";
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
				cout << "������ �����" << endl;
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
				cout << "������ ����� " << endl;
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
				cout << "������ �����" << endl;
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
				cout << "������ �����" << endl;
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
				cout << "������ �����" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		case 7:
			system("cls");
			//cout << "������� �������� ����� :";
		//	cin >> fileName;
			if (kol != 0) {
				data->Save(data, kol);
			}
			else
				cout << "������ �����" << endl;
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
				cout << "������ �����" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		default:
			cout << "����� ������ �������!!!" << endl;
			system("pause");
			system("cls");
			Menu();
			break;
		}
		cin.get();
	}
	return 0;
}
