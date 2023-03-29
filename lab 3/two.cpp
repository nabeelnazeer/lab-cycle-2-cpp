#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>
class calculator
{
private:
    T num1, num2;

public:
    calculator(T a, T b);
    T add();
    T multiply();
    T divide();
};
template <typename T>
calculator<T>::calculator(T n1, T n2)
{
    num1 = n1;
    num2 = n2;
}
template <typename T>
T calculator<T>::add()
{
    return num1 + num2;
}
template <typename T>
T calculator<T>::multiply()
{
    return num1 * num2;
}
template <typename T>
T calculator<T>::divide()
{
    return num1 / num2;
}
int main()
{
    int select;
    int choice;
    int breaker;
    int n1, n2;
    double d1,d2;
    while (true)
    {
        cout << "do you want to continue with integers\n"
             << "press 1\n"
             << "or double press 2\n"
             << "enter your chice\n"
             << ">>>";
        cin >> select;
        if (select == 1)
        {
            cout << "enter two numbers of type int : " << endl;
            cin >> n1 >> n2;
            calculator<int> intcalc(n1, n2);
            cout <<setw(5)<<left<< "**** calculator ****" << endl;
            cout << setw(10) << left << "option 1"
                 << " add two numbers" << endl;
            cout << setw(10) << left << "option 2"
                 << "multiply two numbers" << endl;
            cout << setw(10) << left << "option 3"
                 << "divide two numbers" << endl;
            cout << setw(10) << left << "option 4"
                 << "quit" << endl;
            cout << endl;
            cout << "enter your choice : " << endl
                 << ">>>";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "result of addition : " << intcalc.add() << endl;
                break;
            case 2:
                cout << "result of multiplication : " << intcalc.multiply() << endl;
                break;
            case 3:
                try
                {
                    if (n2 == 0)
                    {
                        throw std::runtime_error("division by zero");
                    }
                }
                catch (exception &e)
                {
                    cout << "error : " << e.what() << endl;
                    return 1;
                }
                cout << "result of division : " << intcalc.divide() << endl;
                break;
            case 4:
                break;
            default:
                cout << "invalide input !" << endl;
                break;
            }
        }
        else if(select==2){
            cout << "enter two numbers of type double : " << endl;
            cin >> d1 >> d2;
  
            calculator<double> doubcalc(d1,d2);
            cout << "**** calculator ****" << endl;
            cout << setw(10) << left << "option 1"
                 << " add two numbers" << endl;
            cout << setw(10) << left << "option 2"
                 << "multiply two numbers" << endl;
            cout << setw(10) << left << "option 3"
                 << "divide two numbers" << endl;
            cout << setw(10) << left << "option 4"
                 << "quit" << endl;
            cout << endl;
            cout << "enter your choice : " << endl
                 << ">>>";
            cin>>choice;
            
            switch(choice){
                case 1:
                cout<<"the result of addition is : "<<doubcalc.add()<<endl;
                break;
                case 2:
                cout<<"the result of multiplication is : "<<doubcalc.add()<<endl;
                break;
                case 3:
                try{
                    if(n2==0){
                        throw runtime_error("invalid input");
                    }
                }
                 catch(exception &e){
                    cout<<"error :"<<e.what()<<endl;
                    return 1;
                }
                cout<<"the result of division is : "<<doubcalc.divide()<<endl;
                break;
                case 4:
                cout<<"thank you"<<endl;
                break;
                default:
                cout<<"invalid input !"<<endl;
                break;
               
            }
        } 
        
       
        cout << "if you want to continue press 1 or any key to exit :\n"
             << ">>>";
        cin >> breaker;
        if (breaker == 1)
        {
        }
        else
        {
            break;
        }
    }
    cout<<"hope you had fun using this calculator"<<endl;
    return 0;
}