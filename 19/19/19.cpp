
#include "functions.h"
#include "color.h"

int main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    color();
    int n, p=1;
    cout << "Розмірність: ";
    cin >> n;
    int* a = new int[n];
    function_random(a, n);
    function_menu();
    while (p != 6)
    {
        cin >> p;
        switch (p)
        {
        case 1: function_output(a,n); system("pause"); system("cls"); function_menu(); break;
        case 2: function_suma(a, n); system("pause"); system("cls"); function_menu(); break;
        case 3: function_avg(a, n); system("pause"); system("cls"); function_menu(); break;
        case 4: function_sorting(a, n); system("pause"); system("cls"); function_menu(); break;
        case 5: function_XY(a, n); system("pause"); system("cls"); function_menu(); break;
        case 6: cout << "Програма завершена" << endl; system("pause"); return 0; break;
        default: cout << "Введіть коректне значення" << endl; system("pause"); system("cls"); function_menu(); break;
        }
    }
    return 0;

}
