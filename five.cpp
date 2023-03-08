#include<iostream>
using namespace std;
class roll_no{
    protected:
    int rollno;
    public:
    roll_no(){}
    roll_no (int r){
        rollno=r;
    }
};
class fees{
    protected:
    double amount;
    public:
    fees(){}
    fees(double st){
        double amount=st;
        
    }


};
class student:public fees,public roll_no{
    protected:
    string name;
    public:
    student(){}
    student(string n,int r,double st) : fees(st),roll_no(r){
        name =n;
    }
};
class details:public student{
    public:
    details(){}
    details(string n,int r,double st): student(n,r,st){}
    void showdata(){
        cout<<"________details__________"<<endl;
        cout<<"student name : "<<name<<endl;
        cout<<"registration no. : "<<rollno<<endl;
        cout<<"amount to be paid : "<<amount<<endl;


    }


};
int main(){
    details students[3];
    int roll[3];
    double fee[3];
    string name[3];
    for (int i=0;i<3;i++){
        cout<<"enter name of student : "<<""<<i+1<<endl;
        cin>>name[i];
        cout<<"enter roll no. : "<<endl;
        cin>>roll[i];
        cout<<"enter the fee amount : "<<endl;
        cin>>fee[i];
        students[i]=details(name[i],roll[i],fee[i]);
        students[i].showdata();
        


    }
    return 0;

}
