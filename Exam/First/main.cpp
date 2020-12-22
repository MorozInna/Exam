/* ����� 3
������ ������� ������. �������� �����. ������������� ������ �� ѳ.
�������� ��������, �� ����������� �������� ����� ��� ��������� ������ ����
� �������� ������� ��������� ����� ��������� �������  f(). */


/* ������� ������� ������ - �� ������ ����������� ����, �� ��������� ����� ���� ��
�� ������ ��� ����� �� ���� ���� ��������� (�����������).

���� �������� ������� ������:

�������� ����� - �� ����� �� �����������/������������/������������ ��������� ������� ��� ����� �������� (�����
� ������, �� �������� ��������� �������).

���������:
 void test();
 int main()
 {
 int m = 22, n = 44;
 printf("\nValues 1 : m = %d and n = %d ", m, n);
 test();
 }
 void test()
 {
 int a = 50, b = 80;
 printf("\nValues 2 : a = %d and b = %d", a, b);
 }

���������:
 Values 1 : m = 22 and n = 44 Values 2 : a = 50 and b = 80


��������� ����� - �� �����, �� ������� ���� ���� ���������, ����� �� ������� ��������.
�� ���������� ������ ����� ���������� � ����-��� ������� �� �����.

���������:
 void test();
 int m = 2, n = 4;
 int a = 5, b = 8;
 int main()
 {
 printf("All variables are accessed from main function:");
 printf("\nm=%d:n=%d:a=%d:b=%d", m,n,a,b);
 test();
 }
 void test()
 {
 printf("\n\nAll variables are accessed from test function:");
 printf("\nm=%d:n=%d:a=%d:b=%d", m,n,a,b);
 }

���������:
 All variables are accessed from main function:
 m = 2 : n = 4 : a = 5 : b = 8
 All variables are accessed from test function:
 m = 2 : n = 4 : a = 5 : b = 8

��������� ��������� - � ����� ��������� � ���������� �������.

������������� ������.
� ��� ѳ �� ѳ++ ����� ����� ����� ��� �� ���������� ���� ������ ������������ ��� �������������, ��
���������� ��� ������� 䳿 ����� ��� ���������� �� ��������� � ����� ���������. �� ����� �� ��� ����:
������������� ��������� �� ������������� 䳿. �������� ����� ����� �� ���������, ��� 䳺 ����� � �� �������,
� ��� ���� ���������.
���� ���� ����� ��������� ��� ������. � ����� � ��������� ����������� ����� ������ ���������� ������
�������� ��� ��'����. � ��� ����� ������������� ������������ auto. ��� �����, ���� �� ��������� ����� �
�������������� auto, �� ����� ������� ���� ����'������ ������������� ����-���� ���������.

static � ������������� �� ��� ���������, ��� � ��� ���������� ������. ������� �������� �������� ��������
����� ���������� ���� ������ � ����� �� �������, �� �� ����� ���������. ϳ� ��� ���������� ������� ������� �����
������ ��� ��������� ��������. ��� ������������ ������� ��� ����������� ���������� ������� �� ��������
������� ��� �� ���������� ��� ���������� ������� �������. ��������� �� ��������������� ��� ��������� �������
������� �� ��� ��������� ���������� ����� ��� �� ���� ��������� ������� ��� ������ ������� �������. ��� �� �����
������� �� �������� �� ��������� ���������� ����� static.

���������:
 static int �, �;
 static float � = 9.65; */

#include <iostream>

using namespace std;

class f
{
public:

	static int call;

	f(int x, int y)
	{
		cout << "x + y = " << x + y << endl;
		call++;
	}
};

int f::call = 0;

int main()
{
	f f1(1, 3);
	f f2(4, 6);
	f f3(7, 11);
	cout << "The number of calls to the program function: " << f::call << endl; // �������� ������� �������
}