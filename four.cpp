#include <iostream>
using namespace std;
class matrix
{
private:
    int rows;
    int columns;
    int **m;

public:
    matrix() {}
    matrix(int &row, int &column)
    {
        rows = row;
        columns = column;
        m = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            m[i] = new int[columns];
        }
        cout << "constructor dynamically alloacted memory" << endl;
    }
    void input()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cin >> m[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] m[i];
        }
        delete[] m;
        cout << "destructor released memory" << endl;
    }
    matrix operator+(matrix &b)
    {
        matrix c(b.rows, b.columns);
        for (int i = 0; i < b.rows; i++)
        {
            for (int j = 0; j < b.columns; j++)
            {
                c.m[i][j] = m[i][j] + b.m[i][j];
            }
        }
        return c;
    }
    matrix operator*(matrix &b)
    {
        cout << "multiplying vector 1 and vector 2" << endl;
        matrix g(rows, b.columns);
        for (int i = 0; i < rows; i++)
        {

            for (int j = 0; j < b.columns; j++)
            {
                g.m[i][j] = 0;
                for (int k = 0; k < columns; k++)
                {
                    g.m[i][j] += m[i][k] * b.m[k][j];
                }
            }
        }
        return g;
    }
};
int main()
{
    int row, column, r, c;
    cout << "enter rows and columns for matrix 1" << endl;
    cin >> row >> column;
    matrix a(row, column);
    cout << "enter the elements of matrix 1 : " << endl;
    a.input();
    cout << "created matrix : " << endl;
    a.display();
    cout << "enter rows and columns for matrix 2" << endl;
    cin >> r >> c;
    matrix b(r, c);
    cout << "enter the elements for matrix 2 : " << endl;
    b.input();
    cout << "created matrix : " << endl;
    b.display();
    cout << "**** matrix multiplication ****" << endl;
    matrix g = a * b;
    g.display();
    while (true)
    {
        if (r == row && c == column)
        {
            matrix k = a + b;
            k.display();
            break;
        }
        else
        {
            cout << "please enter same rows and columns for matrices" << endl;
            cout << "enter rows and columns for matrix 1" << endl;
            cin >> row >> column;
            matrix a(row, column);
            cout << "enter the elements of matrix 1 : " << endl;
            a.input();
            cout << "created matrix : " << endl;
            a.display();
            cout << "enter rows and columns for matrix 2" << endl;
            cin >> r >> c;
            matrix b(r, c);
            cout << "enter the elements for matrix 2 : " << endl;
            b.input();
            cout << "created matrix : " << endl;
            b.display();
        }
    }
}