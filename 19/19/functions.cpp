#include "functions.h"
void function_random(int* x, int n)
{
    cout << "Масив:" << endl;
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 10;
        cout << x[i] << " ";
    }
    cout << endl;
}
void function_output(int* x, int n)
{
    cout << "Масив:" << endl;
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;
}
void function_suma(int* x, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i];
    cout << "Сума: " << sum << endl;
}
void function_avg(int* x, int n)
{
    float av;
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i];
    av = sum / n;
    cout << "Середнє: " << av;
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
    cout << "Шуканий елемент:";
    cin >> X;
    cout << "Елемент для вставки:";
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
    cout << "|         ВИБЕРІТЬ З ПЕРЕЛІКУ ПОТРІБНУ ДІЮ      |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "1. Виведення масиву" << endl;
    cout << "2. Сума елементів масиву" << endl;
    cout << "3. Середнє арифметичне масиву" << endl;
    cout << "4. Сортування масиву" << endl;
    cout << "5. Вставка після елемента Х значення Y" << endl;
    cout << "6. Вихід" << endl;
}