#include <iostream>
using namespace std;
const int size = 3;
class Vector
{
private:
    int value[size];

public:
    Vector() {}
    friend ostream &operator<<(ostream &os, Vector &a);
    friend istream &operator>>(istream &is, Vector &a);
    friend Vector operator*(Vector &a, Vector &b);
    friend Vector operator*(int k, Vector &a);
};
istream &operator>>(istream &is, Vector &a)
{
    for (int i = 0; i < size; i++)
    {
        is >> a.value[i];
    }
    return is;
}
ostream &operator<<(ostream &os, Vector &a)
{
    os << a.value[0] << "i";
    if (a.value[1] < 0)
    {
        os << a.value[1] << "j";
    }
    else
    {
        os << "+" << a.value[1] << "j";
    }
    if (a.value[2] < 0)
    {
        os << a.value[2] << "k" << endl;
    }
    else
    {
        os << "+" << a.value[2] << "k" << endl;
    }
    return os;
}
Vector operator*(Vector &a, Vector &b)
{
    Vector c;
    for (int i = 0; i < size; i++)
    {
        c.value[i] = a.value[i] * b.value[i];
    }
    return c;
}
Vector operator*(int k, Vector &a)
{
    Vector c;
    for (int i = 0; i < size; i++)
    {
        c.value[i] = k * a.value[i];
    }
    return c;
}
int main()
{
    Vector v1;
    Vector v2;
    cout << "** entering values for vector 1 and vector 2 **" << endl;
    cin >> v1;
    cout << "**********************************************" << endl;
    cin >> v2;
    cout << "**** displaying the two vectors ****" << endl;
    cout << "vector v1 :" << v1 << endl;
    cout << "vector v2 : " << v2 << endl;
    int x = 1, breaker;
    int scalar;
    int choice;
    Vector v3;
    Vector v4;
    Vector v5;

    while (x == 1)
    {

        cout << "press 1 to multiply a vector with a scalar\n"
             << "press 2 to get the dot product of two vectors\n"
             << "press any digit to exit\n"
             << endl;
        cin >> choice;
        if (choice != 1 and choice != 2)
        {
            break;
        }
        if (choice == 1)
        {
            cout << "enter a number k to multiply with vector 1 and vector 2: \n";
            cin >> scalar;
            v3 = scalar * v1;
            cout << " product of vector 1 and k :\n"
                 << v3;
            v4 = scalar * v2;
            cout << " product of vector 2 and k : \n"
                 << v4;
        }
        else if (choice == 2)
        {
            cout << "the dot product of vector 1 and vector 2 :\n";
            v5 = v1 * v2;
            cout << "product : " << v5;
        }
        cout << "********DO YOU WANT TO CONTINUE********" << endl;
        cout << "1 to CONTINUE and any other key to EXIT" << endl
             << ">>> ";
        cin >> breaker;
        if (breaker == 1)
        {
        }
        else
        {
            break;
        }
    }
    return 0;
}
