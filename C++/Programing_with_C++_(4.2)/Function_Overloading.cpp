#include <iostream>
using namespace std;
class Calculator
{
    int a, b, ans = 0;

public:
    void input()
    {
        cout << "Enter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;
    }

    void Cal(int a, int b)
    {
        ans = a + b;
        cout << "\n Addition : " << ans;
    }
    void Cal(double a, double b)
    {
        ans = a - b;
        cout << "\n substraction : " << ans;
    }

    void Cal(char a, char b)
    {
        ans = a * b;
        cout << "\n Multiplication : " << ans;
    }

    void Cal(int a, char b)
    {
        ans = a / b;
        cout << "\n Division : " << ans;
    }
};

main()
{
    Calculator obj;

    obj.input();
    obj.Cal(9);
    obj.Cal(9.99);
    obj.Cal('d');
    obj.Cal(9, 'd');
};
