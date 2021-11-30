#include "functions.h"
void function_random(int* x, int n)
{
    cout << "�����:" << endl;
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 10;
        cout << x[i] << " ";
    }
    cout << endl;
}
void function_output(int* x, int n)
{
    cout << "�����:" << endl;
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;
}
void function_suma(int* x, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i];
    cout << "����: " << sum << endl;
}
void function_avg(int* x, int n)
{
    float av;
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i];
    av = sum / n;
    cout << "������: " << av;
    cout << endl;
}
void function_sorting(int* x, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j]) {
                int t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    function_output(x, n);
}
void function_XY(int* x, int n)
{
    int X, y;
    cout << "������� �������:";
    cin >> X;
    cout << "������� ��� �������:";
    cin >> y;
    for (int i = 0; i < n; i++)
    {
        if (*(x + i) == X)
        {
            n++;
            for (int j = n - 1; j > i + 1; j--)
                *(x + j) = *(x + (j - 1));
            *(x + (i + 1)) = y;
        }
    }
    function_output(x,n);
}
void function_menu()
{
    cout << "-------------------------------------------------" << endl;
    cout.width(45);
    cout << "|         ����в�� � ����˲�� ���в��� Ĳ�      |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "1. ��������� ������" << endl;
    cout << "2. ���� �������� ������" << endl;
    cout << "3. ������ ����������� ������" << endl;
    cout << "4. ���������� ������" << endl;
    cout << "5. ������� ���� �������� � �������� Y" << endl;
    cout << "6. �����" << endl;
}