#include<iostream>
class vector{
    private:
    float magnt;
    double x,y,z;
    public:
    vector(){
        x=0;
        y=0;
        z=0;
        magnt=0;

    }
    vector(float a,float b,float c){
        x=a;
        y=b;
        z=c;
        magnt=(x*x)+(y*y)+(z*z);

    }
    void display(){
        std::cout<<x<<"i";
        if(y<0){
            std::cout<<y<<"j";
        }
        else{
            std::cout<<"+"<<y<<"j";
        }
        if(z<0){
            std::cout<<z<<"k";
        }
        else{
            std::cout<<"+"<<z<<"k";
        }
        std::cout<<std::endl;
    }
    void operator==(vector &a){
        std::cout<<"overloading == operator"<<std::endl;
        if(magnt==a.magnt){
            std::cout<<"the two vectors are equal"<<std::endl;
        }
        else{
            std::cout<<"the two vectors are unequal"<<std::endl;
        }
    }
    void operator>(vector&a){
        std::cout<<"overloading > operator"<<std::endl;
        std::cout<<std::endl;
        if (magnt==a.magnt){
            std::cout<<"both the vectors are eqqual"<<std::endl;
        }
        else if(magnt>a.magnt){
            std::cout<<"vector 1 is greater"<<std::endl;

        }
        else{
            std::cout<<"vector 2 is greater"<<std::endl;
        }
    }
    void operator>=(vector&a){
        std::cout<<"overloading >= operator"<<std::endl;
        std::cout<<std::endl;
        if (magnt==a.magnt){
            std::cout<<"both the vectors are equal"<<std::endl;
        }
        else if(magnt>=a.magnt){
            std::cout<<"vector 1 is greater"<<std::endl;
        }
        else{
            std::cout<<"vector 2 is greater"<<std::endl;
        }

    }
    void operator<(vector&a){
        std::cout<<"overloading < operator\n";
        if (magnt==a.magnt){
            std::cout<<"both the vectors are equal\n";
        }
        else if(magnt<a.magnt){
            std::cout<<"vector 1 is smaller\n";
        }
        else{
            std::cout<<"vector 2 is smaller\n";
        }    
        }
          void operator<=(vector&a){
        std::cout<<"overloading <= operator\n";
        if (magnt==a.magnt){
            std::cout<<"both the vectors are equal\n";
        }
        else if(magnt<=a.magnt){
            std::cout<<"vector 1 is smaller\n";
        }
        else{
            std::cout<<"vector 2 is smaller\n";
        }    
        }
};
int main(){
    float a,b,c,d,e,f;
    std::cout<<"enter values of vector 1 : "<<std::endl;
    std::cin>>a>>b>>c;
    vector first(a,b,c);
    first.display();
    std::cout<<std::endl;
    std::cout<<"enter values of vector 2 : "<<std::endl;
    std::cin>>d>>e>>f;
    vector second(d,e,f);
    second.display();
    first==second;
    first>second;
    first>=second;
    first<second;
    first<=second;

    return 0;
}