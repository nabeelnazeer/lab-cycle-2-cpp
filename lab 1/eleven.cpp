#include<iostream>
class class_2;

class class_1{
    private:
    int x;
    public:
    void input(){
        std::cout<<"enter private data member for class 1(integer) : "<<std::endl;
        std::cin>>x;
    }
    void display(){
        std::cout<<"********************************"<<std::endl;
        std::cout<<"private data member of class 1 :"<<x<<std::endl;
        std::cout<<std::endl;
    }
    friend void swap(class_1 &a,class_2 &b);
};
class class_2{
    private:
    int y;
    public:
    void input(){
        std::cout<<"enter private data for class 2 (integer) : "<<std::endl;
        std::cin>>y;
    }
    void display(){
        std::cout<<"private data member for class 2 : "<<y<<std::endl;
        std::cout<<"*********************************"<<std::endl;
    }
    friend void swap(class_1 &a, class_2 &b);        
    
};
void swap(class_1 &a, class_2 &b){
    int temp;
    temp = a.x;
    a.x=b.y;
    b.y= temp;
    std::cout<<"**********swap completed*********"<<std::endl;
}
int main(){
    class_1 obj_1;
    class_2 obj_2;
    std::cout<<"input private data members for class_1 and class_2"<<std::endl;
    std::cout<<std::endl;
    obj_1.input();
    obj_2.input();
    std::cout<<std::endl;
    std::cout<<"displaying private data members before swapping"<<std::endl;
    obj_1.display();
    obj_2.display();
    swap(obj_1,obj_2);
    obj_1.display();
    obj_2.display();

} 