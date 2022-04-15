#include <iostream>
#include<windows.h> 
#include <stdio.h>
using namespace std;

struct  Student
{
	char name[100];
	char sex[2];
	int group;
	int idingroup;
	int gradesex[3];
	int gradestest[5];

};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int counterOfStudents = 5;
	int studentNumber;
	int a;
	char names[100];
	int male = 0;
	int female = 0;
	struct Student StudentsList[100] = { "Прищепа Анна Сергеевна", "Ж", 1324, 1, {4, 3, 5},{5, 4, 3, 5, 5} ,"Маринко Мария Сергеевна", "Ж", 1324, 4, {4, 5, 3},{3, 5, 4, 4, 5} ,"Иванов Сергей Иванович", "М", 1323, 10, {5, 5, 5},{5, 5, 5, 5, 5} ,"Жнец Надежда Андреевна", "Ж", 1323, 16, {5, 5, 5},{5, 4, 4, 4, 5},"Жданов Борис Валерьевич", "М", 1323, 40, {3, 3, 5},{5, 3, 3, 4, 5} };
	cout << "Задания: " << endl << "1. Создание новой записи о студенте" << endl << "2. Внесение изменений в уже имеющуюся запись" << endl << "3. Вывод данных о всех студентах" << endl << "4. Вывод информации обо всех студентах группы N" << endl << "5. Вывод топа самых успешных студентов с наивысшим по рейтингу средним баллом за прошедшую сессию." << endl << "6. Вывод количества студентов мужского и женского пола." << endl << "7. Вывод данных о студентах, которые не получают стипендию; учатся только на «хорошо» и «отлично»; учатся только на «отлично»." << endl << "8. Вывод данных о студентах, имеющих номер в списке – k." << endl;

	while (true)
	{

		cout << "Введите номер задания: ";
		cin >> a;
		switch (a)
		{
		case (1):
		{
			for (int i = counterOfStudents; i < counterOfStudents + 1; i++)
			{
				cout << "ФИО: ";
				cin.getline(StudentsList[i].name, 50, '\n');
				cin.getline(StudentsList[i].name, 50, '\n');
				cout << "Пол: ";
				cin >> StudentsList[i].sex;
				cout << "Группа: ";
				cin >> StudentsList[i].group;
				cout << "Номер в группе: ";
				cin >> StudentsList[i].idingroup;
				for (int j = 0; j < 3; j++)
				{
					cout << "Оценка за " << j + 1 << " экзамен: ";
					cin >> StudentsList[i].gradesex[j];
				}
				for (int f = 0; f < 5; f++)
				{
					cout << "Оценка за " << f + 1 << " диф зачёт: ";
					cin >> StudentsList[i].gradestest[f];
				}
			}
			counterOfStudents++;
		}
		break;



		case (2):
			cout << "Укажите номер студента в списке студентов, чьи данные Вы хотите измeнить: ";
			cin >> studentNumber;
			cout << "Укажите номер данных студента, которые вы хотите изменить." << endl << "1. ФИО" << endl << "2. Пол" << endl << "3. Группа" << endl << "4. Номер в группе" << endl << "5. Оценка за 1 экзамен" << endl << "6. Оценка за 2 экзамен" << endl << "7. Оценка за 3 экзамен" << endl << "8. Оценка за 1 диф зачёт" << endl << "9. Оценка за 2 диф зачёт" << endl << "10. Оценка за 3 диф зачёт" << endl << "11. Оценка за 4 диф зачёт" << endl << "12. Оценка за 5 диф зачёт" << endl;
			cin >> a;
			switch (a) {
			case(1):
				cin.getline(StudentsList[studentNumber - 1].name, 50, '\n'); break;
			case(2):
				cin >> StudentsList[studentNumber - 1].sex; break;
			case(3):
				cin >> StudentsList[studentNumber - 1].group; break;
			case(4):
				cin >> StudentsList[studentNumber - 1].idingroup; break;
			case(5):
				cin >> StudentsList[studentNumber - 1].gradesex[0]; break;
			case(6):
				cin >> StudentsList[studentNumber - 1].gradesex[1]; break;
			case(7):
				cin >> StudentsList[studentNumber - 1].gradesex[2]; break;
			case(8):
				cin >> StudentsList[studentNumber - 1].gradestest[0]; break;
			case(9):
				cin >> StudentsList[studentNumber - 1].gradestest[1]; break;
			case(10):
				cin >> StudentsList[studentNumber - 1].gradestest[2]; break;
			case(11):
				cin >> StudentsList[studentNumber - 1].gradestest[3]; break;
			case(12):
				cin >> StudentsList[studentNumber - 1].gradestest[4]; break;
			default:
				cout << "Ошибка" << endl;
				break;
			}

			break;

		case (3):

		{
			cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер в группе\t" << "Оценка за 1, 2, 3 экзамены\t" << "Оценка за 1, 2, 3, 4, 5 диф.зачеты\t" << endl;

			for (int i = 0; i < counterOfStudents; i++)
			{
				cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].idingroup << '\t' << '\t' << StudentsList[i].gradesex[0] << '\t' << StudentsList[i].gradesex[1] << '\t' << StudentsList[i].gradesex[2] << '\t' << '\t' << StudentsList[i].gradestest[0] << '\t' << StudentsList[i].gradestest[1] << '\t' << StudentsList[i].gradestest[2] << '\t' << '\t' << StudentsList[i].gradestest[3] << '\t' << StudentsList[i].gradestest[4] << endl << endl;
			}
		}
		break;


		case (4):

		{
			cout << "Укажите номер группы, студентов которой Вы хотите увидеть:";
			cin >> a;
			cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер в группе\t" << "Оценка за 1, 2, 3 экзамены\t" << "Оценка за 1, 2, 3, 4, 5 диф.зачеты\t" << endl;

			for (int i = 0; i < counterOfStudents; i++)
			{
				if (StudentsList[i].group == a)
				{
					cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].idingroup << '\t' << '\t' << StudentsList[i].gradesex[0] << '\t' << StudentsList[i].gradesex[1] << '\t' << StudentsList[i].gradesex[2] << '\t' << '\t' << StudentsList[i].gradestest[0] << '\t' << StudentsList[i].gradestest[1] << '\t' << StudentsList[i].gradestest[2] << '\t' << '\t' << StudentsList[i].gradestest[3] << '\t' << StudentsList[i].gradestest[4] << endl;
				}
			}
		}
		break;


		case (5):

		{
			for (int i = 0; i < counterOfStudents; i++)
			{
				for (int j = 1; j < (counterOfStudents - i); j++)
				{
					if ((StudentsList[j - 1].gradesex[0] + StudentsList[j - 1].gradesex[1] + StudentsList[j - 1].gradesex[2] + StudentsList[j - 1].gradestest[0] + StudentsList[j - 1].gradestest[1] + StudentsList[j - 1].gradestest[2] + StudentsList[j - 1].gradestest[3] + StudentsList[j - 1].gradestest[4]) / double(8) < (StudentsList[j].gradesex[0] + StudentsList[j].gradesex[1] + StudentsList[j].gradesex[2] + StudentsList[j].gradestest[0] + StudentsList[j].gradestest[1] + StudentsList[j].gradestest[2] + StudentsList[j].gradestest[3] + StudentsList[j].gradestest[4]) / double(8))
					{
						swap(StudentsList[j - 1], StudentsList[j]);
					}
				}
			}
			cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер в группе\t" << "Оценка за 1, 2, 3 экзамены\t" << "Оценка за 1, 2, 3, 4, 5 диф.зачеты\t" << endl;

			for (int i = 0; i < counterOfStudents; i++)
			{
				cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].idingroup << '\t' << '\t' << StudentsList[i].gradesex[0] << '\t' << StudentsList[i].gradesex[1] << '\t' << StudentsList[i].gradesex[2] << '\t' << '\t' << StudentsList[i].gradestest[0] << '\t' << StudentsList[i].gradestest[1] << '\t' << StudentsList[i].gradestest[2] << '\t' << '\t' << StudentsList[i].gradestest[3] << '\t' << StudentsList[i].gradestest[4] << endl;
			}
		}
		break;


		case (6):
		{
			for (int i = 0; i < counterOfStudents; i++)
			{
				if (int(StudentsList[i].sex[0]) == -52 || StudentsList[i].sex == "М")
				{
					male++;
				}
				if (int(StudentsList[i].sex[0]) == -58 || StudentsList[i].sex == "Ж")
				{
					female++;
				}
			}
			cout << "Среди студентов " << male << " мужчин и " << female << " женщин." << endl;
		}
		break;

		case (7):

		{
			cout << "Укажите номер группы студентов, о которых Вы хотите просмотреть информацию:" << endl << "1. Студенты, которые не получают стипендию" << endl << "2. Студенты, учащиеся только на «хорошо» и «отлично»" << endl << "3. Студенты, учащиеся только на «отлично»" << endl;
			cin >> a;
			switch (a)
			{
			case(1):
				cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер в группе\t" << "Оценка за 1, 2, 3 экзамены\t" << "Оценка за 1, 2, 3, 4, 5 диф.зачеты\t" << endl;


				for (int i = 0; i < counterOfStudents; i++)
				{
					if (StudentsList[i].gradesex[0] < 4 || StudentsList[i].gradesex[1] < 4 || StudentsList[i].gradesex[2] < 4 || StudentsList[i].gradestest[0] < 4 || StudentsList[i].gradestest[1] < 4 || StudentsList[i].gradestest[2] < 4 || StudentsList[i].gradestest[3] < 4 || StudentsList[i].gradestest[4] < 4)
					{
						{
							cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].idingroup << '\t' << '\t' << StudentsList[i].gradesex[0] << '\t' << StudentsList[i].gradesex[1] << '\t' << StudentsList[i].gradesex[2] << '\t' << '\t' << StudentsList[i].gradestest[0] << '\t' << StudentsList[i].gradestest[1] << '\t' << StudentsList[i].gradestest[2] << '\t' << '\t' << StudentsList[i].gradestest[3] << '\t' << StudentsList[i].gradestest[4] << endl;
						}
					}
				}
				break;
			case(2):
				cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер в группе\t" << "Оценка за 1, 2, 3 экзамены\t" << "Оценка за 1, 2, 3, 4, 5 диф.зачеты\t" << endl;


				for (int j = 0; j < counterOfStudents; j++)
				{
					if (StudentsList[j].gradesex[0] > 3 && StudentsList[j].gradesex[1] > 3 && StudentsList[j].gradesex[2] > 3 && StudentsList[j].gradestest[0] > 3 && StudentsList[j].gradestest[1] > 3 && StudentsList[j].gradestest[2] > 3 && StudentsList[j].gradestest[3] > 3 && StudentsList[j].gradestest[4] > 3)
					{
						cout << j + 1 << '\t' << StudentsList[j].name << '\t' << '\t' << StudentsList[j].sex << '\t' << StudentsList[j].group << '\t' << StudentsList[j].idingroup << '\t' << '\t' << StudentsList[j].gradesex[0] << '\t' << StudentsList[j].gradesex[1] << '\t' << StudentsList[j].gradesex[2] << '\t' << '\t' << StudentsList[j].gradestest[0] << '\t' << StudentsList[j].gradestest[1] << '\t' << StudentsList[j].gradestest[2] << '\t' << '\t' << StudentsList[j].gradestest[3] << '\t' << StudentsList[j].gradestest[4] << endl;
					}
				}
				break;
			case(3):
				cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер в группе\t" << "Оценка за 1, 2, 3 экзамены\t" << "Оценка за 1, 2, 3, 4, 5 диф.зачеты\t" << endl;


				for (int j = 0; j < counterOfStudents; j++)
				{
					if (StudentsList[j].gradesex[0] == 5 && StudentsList[j].gradesex[1] == 5 && StudentsList[j].gradesex[2] == 5 && StudentsList[j].gradestest[0] == 5 && StudentsList[j].gradestest[1] == 5 && StudentsList[j].gradestest[2] == 5 && StudentsList[j].gradestest[3] == 5 && StudentsList[j].gradestest[4] == 5)
					{
						cout << j + 1 << '\t' << StudentsList[j].name << '\t' << '\t' << StudentsList[j].sex << '\t' << StudentsList[j].group << '\t' << StudentsList[j].idingroup << '\t' << '\t' << StudentsList[j].gradesex[0] << '\t' << StudentsList[j].gradesex[1] << '\t' << StudentsList[j].gradesex[2] << '\t' << '\t' << StudentsList[j].gradestest[0] << '\t' << StudentsList[j].gradestest[1] << '\t' << StudentsList[j].gradestest[2] << '\t' << '\t' << StudentsList[j].gradestest[3] << '\t' << StudentsList[j].gradestest[4] << endl;
					}
				}
				break;
			default:
				cout << "Ошибка." << endl; break;
			}
		}
		break;
		case (8):
		{

		
			cout << "Укажите номер из списков групп, студентов-обладателей которых Вы хотите увидеть: ";
			cin >> a;
			cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер в группе\t" << "Оценка за 1, 2, 3 экзамены\t" << "Оценка за 1, 2, 3, 4, 5 диф.зачеты\t" << endl;

			for (int i = 0; i < counterOfStudents; i++)
			{
				if (StudentsList[i].idingroup == a)
				{
					cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].idingroup << '\t' << StudentsList[i].gradesex[0] << '\t' << StudentsList[i].gradesex[1] << '\t' << StudentsList[i].gradesex[2] << '\t' << StudentsList[i].gradestest[0] << '\t' << StudentsList[i].gradestest[1] << '\t' << StudentsList[i].gradestest[2] << '\t' << StudentsList[i].gradestest[3] << '\t' << StudentsList[i].gradestest[4] << endl << endl;
				}
			}
		}
		break;
		default:
			cout << "Ошибка." << endl; break;
		}

	}

	return 0;
}