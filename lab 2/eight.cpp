#include<iostream>
#include<iomanip>
using namespace std;
class shape{
    public:
    virtual float area()=0;
    virtual void get_data()=0;
};
class circle:public shape{
    private:
    float radius;
    public:
    void get_data(){
        cout<<"enter radius of circle : "<<endl;
        cin>>radius;
    }
    float area(){
        return 3.14*radius*radius;
    }
};
class square:public shape{
    private:
    float side;
    public:
    void get_data(){
        cout<<"enter the side of square : "<<endl;
        cin>>side;
    }

    float area(){
        return side*side;
    }
};
class elipse:public shape{
    private:
    float a,b;
    public:
    void get_data(){
        cout<<"enter length of semi major axis and minor axis"<<endl;
        cin>>a>>b;
    }
    float area(){
        return 3.14*a*b;
    }

};
int main(){
    int choice;
    int breaker;
    shape *pshape;
    while(true){
        cout << setw(10) << "Menu" << endl;
        cout << "----------------------" << endl;
        cout << "1. area of square " << endl;
        cout << "2. area of circle " << endl;
        cout << "3. area of ellipse " << endl;
        cout<<"enter your choice : "<<endl
        <<">>>";
        cin>>choice;
        switch(choice){
            case 1:
            pshape=  new square;
            pshape->get_data();
            cout<<"the area of square is : "<<pshape->area()<<endl;
            break;
            case 2:
            pshape= new circle;
            pshape->get_data();
            cout<<"the area of circle is : "<<pshape->area()<<endl;
            break;
            case 3:
            pshape= new elipse;
            pshape->get_data();
            cout<<"the area of elipse is : "<<pshape->area()<<endl;
            break;
            default:
            cout<<"invalid input"<<endl;
            continue;
        }
        cout<<"press 1 to continue or any other key to exit"<<endl
        <<">>>";
        cin>>breaker;
        if(breaker==1){

        }
        else{
            break;
        }

    }
    cout<<"THANK YOU"<<endl;
}

