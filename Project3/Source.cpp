//Dmitrieva_Olesya_Andreevna_SBD211

#include <windows.h> //���������� ������� ����-�����
#include <iostream>  //����-����� ������
#include <cmath>     //���������� ���������� �������������� ��������
#include <ctime>	 //������� time()

#define UPPER_LEFT_ANGLE  (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWR_LEFT_ANGLE   (char)192
#define LOWR_RIGHT_ANGLE  (char)217
#define VERTICAL_LINE     (char)179
#define HORIZONTAL_LINE   (char)196 << (char)196
#define WHILE_BOX         (char)219 << (char)219
#define BLACK_BOX         (char)32  << (char)32

using namespace std;
int main()
{
	setlocale(0, "");     int N;

List:
	do
	{
		cout << endl;
		cout << "------------------------------------------------------------- \n";
		cout << "������� ����� �������� \n";	cout << endl;
		cout << "0. ������� ������ 0    \n";
		cout << "1. ������� ������ 1    \n";
		cout << "2. ������� ������ 2    \n";
		cout << "3. ������� ������ 3    \n";
		cout << "4. ������� ������ 4    \n";
		cout << "5. ������� ������ 5    \n";
		cout << "5. ������� ������ 6    \n";
		cout << "5. ������� ������ 7    \n";
		cout << "6. ������� ������ 8    \n";    cout << endl;
		cout << "������� � ������: ";           cin >> N;
		cout << "------------------------------------------------------------- \n";

		if (N == 0) goto Zero;
		if (N == 1) goto One;
		if (N == 2) goto Two;
		if (N == 3) goto Three;
		if (N == 4) goto Four;
		if (N == 5) goto Five;
		if (N == 6) goto Six;
		if (N == 7) goto Seven;
		if (N == 8) goto Eght;
	} 
	while (N != 9);       goto End;

Zero:
	if (N == 0)
	{
		cout << endl;
		cout << "������ #0                                            \n";   cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������.  \n";
		cout << "*****    \n";
		cout << "*****    \n";
		cout << "*****    \n";
		cout << "*****    \n";
		cout << "*****    \n";                                               cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                             cin >> a;
	                                                                	     cout << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				cout << "*";
			}
			    cout << "\n";
		}
	}
	goto One;             goto List;

One:
	if (N == 1)
	{
		cout << endl;
		cout << "������ #1                                            \n";   cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������.  \n";
		cout << "*      \n";
		cout << "**     \n";
		cout << "***    \n";
		cout << "****   \n";
		cout << "*****  \n";                                                 cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                             cin >> a;
		                                                                     cout << endl;
		for (int i = 0; i <= a; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			    cout << "\n";
		}
	}
	goto Two;             goto List;

Two:
	if (N == 2)
	{
		cout << endl;
		cout << "������ #2                                            \n";    cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������.  \n";
		cout << "*****  \n";
		cout << "****   \n";
		cout << "***    \n";
		cout << "**     \n";
		cout << "*      \n";                                                  cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                              cin >> a;
		                                                                      cout << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = a; j > i; j--)
			{
				cout << "*";
			}
			    cout << "\n";
		}
	}
	goto Three;           goto List;

Three:
	if (N == 3)
	{
		cout << endl;
		cout << "������ #3                                            \n";  cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������.  \n";
		cout << "*****      \n";
		cout << " ****      \n";
		cout << "  ***      \n";
		cout << "   **      \n";
		cout << "    *      \n";                                            cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                            cin >> a;
		                                                                    cout << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			for (int j = i; j < a; j++)
			{
				cout << "*";
			}
			    cout << endl;
		}
	}
	goto Four;            goto List;

Four:
	if (N == 4)
	{
		cout << endl;
		cout << "������ #4                                            \n";   cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������.  \n";
		cout << "*      \n";
		cout << "**     \n";
		cout << "***    \n";
		cout << "****   \n";
		cout << "*****  \n";                                                 cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                             cin >> a;
		                                                                     cout << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = a; j < i + 1; j++)
			{
				cout << " ";
			}
			for (int j = 0; j <= i; ++j)
			{
				cout << "*";
			}
			    cout << endl;
		}
	}
	goto Five;            goto List;

Five:
	if (N == 5)
	{
		cout << endl;
		cout << "������ #5                                            \n";   cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������.  \n";
		cout << "    / \\       \n";
		cout << "   /   \\      \n";
		cout << "  /     \\     \n";
		cout << " /       \\    \n";
		cout << "/         \\   \n";
		cout << "\\         /   \n";
		cout << " \\       /    \n";
		cout << "  \\     /     \n";
		cout << "   \\   /      \n";
		cout << "    \\ /       \n";                                         cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                             cin >> a;
		                                                                     cout << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = i; j < a; j++)
			cout << " ";   cout << "/";
			for (int j = 0; j < i; j++)
			cout << "  ";  cout << "\\";                                     cout << endl;
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < i + 1; j++)
			cout << " ";   cout << "\\";

			for (int j = i; j < a - 1; j++)
			cout << "  ";  cout << "/";                                      cout << endl;
		}
	}
	goto Six;             goto List;

Six:
	if (N == 6)
	{
		cout << endl;
		cout << "������ #6                                            \n";  cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������.  \n";
		cout << "+-+-+  \n";
		cout << "-+-+-  \n";
		cout << "+-+-+  \n";
		cout << "-+-+-  \n";
		cout << "+-+-+  \n";                                                cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                            cin >> a;
		                                                                    cout << endl;
		for (int i = 0; i <= a; i++)
		{
			if (i % 2 == 0)
				for (int j = 1; j <= a; j++)
					cout << "+" << "-";
			else
				for (int j = 1; j <= a; j++)
					cout << "-" << "+";                                     cout << endl;
		}
	}
	goto Seven;           goto List;

Seven:
	if (N == 7)
	{
		cout << endl;
		cout << "������ #7                                                                         \n";   cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������ ��������� ����� � �������� 8.  \n";   cout << endl;
		int a;
		cout << "������� ������ �����: ";                                                                 cin >> a;
		a++;
		setlocale(LC_ALL, "C");
		for (int i = 0; i <= a; i++)
		{
			for (int j = 0; j <= a; j++)
			{
				//����� ����� �����
				if (i == 0 && j == 0)          cout << UPPER_LEFT_ANGLE;
				else if (i == 0 && j == a)     cout << UPPER_RIGHT_ANGLE;
				else if (i == a && j == 0)     cout << LOWR_LEFT_ANGLE;
				else if (i == a && j == a)     cout << LOWR_RIGHT_ANGLE;
				//����� ����� �����
				else if (i == 0 || i == a)     cout << HORIZONTAL_LINE;
				else if (j == 0 || j == a)     cout << VERTICAL_LINE;
				else (i % 2 == j % 2) ? cout << WHILE_BOX : cout << BLACK_BOX;
			}
			cout << endl;
		}
	}
	goto Eght;            goto List;

Eght:
	if (N == 8)
	{
		setlocale(0, "");
		cout << endl;
		cout << "������ #8                                                                         \n";  cout << endl;
		cout << "��������� ��������� ����� ������� � ������� ������ ��������� ����� � �������� 5.  \n";  cout << endl;
		int a;
		cout << "������� ���������� ��������: ";                                                         cin >> a;
		                                                                                                 cout << endl;
		setlocale(LC_ALL, "C");
		if (a > 8) { a = 8; }
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				if ((i + j) % 2 == 0)
				{
					cout << WHILE_BOX;
				}
				else
				{
					cout << BLACK_BOX;
				}
			}
			cout << endl;
		}
	}
	setlocale(0, "");     goto List;
End:
	return 0;
}