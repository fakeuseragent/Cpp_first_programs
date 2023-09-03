#include <iostream>
using namespace std;

int main()
{
    float a,b;
    char c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Enter a operator(+-*/): ";
    cin >> c;
    switch(c)
    {
        case '+':
        cout << a+b;
        break;
        case '-':
        cout << a-b;
        break;
        case '*':
        cout << a*b;
        break;
        case '/':
        cout << a/b;
        break;
    }
    cout << endl;
    return 0;
}