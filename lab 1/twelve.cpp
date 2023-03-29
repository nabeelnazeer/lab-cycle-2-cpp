#include <iostream>

class complex
{
private:
    float real, imag;

public:
    complex() {}
    complex(float x)
    {
        real = imag = x;
        std::cout << "constructor with one argument called !" << std::endl;
        std::cout << std::endl;
    }
    complex(float x, float y)
    {
        real = x;
        imag = y;
        std::cout << "constuctor with two arguments invoked !" << std::endl;
    }
    friend complex complex_sum(complex, complex);
    void display()
    {
        if (imag < 0)
        {
            std::cout << "the complex no. is " << real << imag << "i" << std::endl;
        }
        else
        {
            std::cout << "the complex no. is " << real << " + " << imag << "i" << std::endl;
        }
    }
};
complex complex_sum(complex c1, complex c2)
{
    std::cout<<"friend function accessing private members of class"<<std::endl;
    std::cout<<std::endl;
    complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}
int main()
{
    float a, b, c, p, q;
    std::cout << "enter a number to initialize real and imaginary parts to same value -" << std::endl;
    std::cin >> c;
    complex c1(c);
    c1.display();
    std::cout<<"enter real value of complex 1 : "<<std::endl;
    std::cin>>p;
    std::cout<<"enter imaginary part of complex 1 : "<<std::endl;
    std::cin>>q;
    complex c2(p,q);
    c2.display();
    std::cout<<"enter real part of complex 2 : "<<std::endl;
    std::cin>>a;
    std::cout<<"enter imaginary part of comlex 2 : "<<std::endl;
    std::cin>>b;
    complex c3(a,b);
    c3.display();
    std::cout<<"========== ADDITION ========="<<std::endl;
    complex c4;
    c4=complex_sum(c3,c2);
    c4.display();

}      