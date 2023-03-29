#include<iostream>
class complex{
    private:
    double real;
    double imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(double x,double y){
        real=x;
        imag=y;
    }
    void display(){
        std::cout<<real;
        if (imag<0){
            std::cout<<imag<<"i"<<std::endl;
        }
        else{
            std::cout<<"+"<<imag<<"i"<<std::endl;
        }
    }
    friend complex operator+(complex &a,complex &b);
    friend complex operator*(complex &a,complex &b);
};
complex operator+(complex &a,complex &b){
    complex c;
    c.real= a.real+b.real;
    c.imag= a.imag+b.imag;
    return c;
}
complex operator*(complex&a,complex&b){
    complex c;
    c.real=a.real*b.real-a.imag*b.imag;
    c.imag=a.real*b.imag+b.real*b.imag;
    return c;
}
int main(){
    double p,q,r,s;
    std::cout<<"enter real and imaginary part for complex 1: \n";
    std::cin>>p>>q;
    complex A(p,q);
    A.display();
    std::cout<<"enter real and imaginary part for complex 2: \n";
    std::cin>>r>>s;
    complex B(r,s);
    B.display();
    std::cout<<"*** addition of two complex numbers ***"<<std::endl;
    complex C= A+B;
    C.display();
    std::cout<<"*** multiplication of two complex numbers ***"<<std::endl;
    complex D = A*B;
    D.display();
    return 0;



}