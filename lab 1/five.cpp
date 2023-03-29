#include <iostream>
class matrix
{
private:
    int rows;
    int columns;
    int **m;

public:
    matrix(int r, int c);
    void input();
    void display();
    ~matrix();
};
matrix::matrix(int r, int c)
{
    rows = r;
    columns = c;
    m = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        m[i] = new int[columns];
    }
    std::cout << "dynamically allocated memory for 2d matrix with constructor" << std::endl;
}
void matrix::input()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> m[i][j];
        }
    }
}
void matrix::display()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
matrix::~matrix()
{
    for (int i = 0; i < rows; i++)
    {
        delete[] m[i];
    }
    delete[] m;
    std::cout << "destructor released memory" << std::endl;
}
int main()
{
    int row, column;
    std::cout << "enter rows and columns for matrix" << std::endl;
    std::cin >> row >> column;
    matrix ma(row, column);
    std::cout << "enter elements for the matrix : " << std::endl;
    ma.input();
    std::cout << "created matrix : " << std::endl;
    ma.display();
    return 0;
}
