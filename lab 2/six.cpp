#include<iostream>
#include<cstring>
using namespace std;
class student{
    protected:
    int roll_no;
    char name[30];
    public:
    student(int rl_no,char n[]){
        roll_no=rl_no;
        strcpy(name,n);
        cout<<"student class inherited"<<endl;

    }
    void put_details(){
        cout<<"student name : "<<name;
    }
};
class test:public virtual student{
    protected:
    float mark;
    public:
    test(int rl,char n[],float m):student(rl,n){
        mark=m;

    }
    void put_marks(){
        cout<<"the overall marks scored for annual exam : "<<mark<<endl;
    }
};
class sports:public virtual student{
    protected:
    float score;
    public:
    sports(int rl,char n[],float s):student(rl,n){
        score =s;
    }
    void put_score(){
        cout<<"overall score achieved on sports : "<<score<<endl;
    }
};
class result:public test,public sports{
    private:
    float overall;
    string grade;
    public:
    result(int rl,char n[],float m, float s):student(rl,n),test(rl,n,m),sports(rl,n,s){
        overall = m+s;
    }
    void gradeof(){
        if (overall <=100){
            grade = "FAIL";
            cout<<"grade : "<<grade<<endl;
        }
        else if(overall <=200){
            grade = "C";
            cout<<"grade : "<<grade<<endl;
        }
        else if(overall<=300){
            grade = "B";
            cout<<"grade : "<<grade<<endl;
        }
        else if(overall <=400){
            grade = "A";
            cout<<"grade : "<<grade<<endl;
        }
    }
    void display(){
        cout<<"________result_________"<<endl;
        put_details();
        put_marks();
        put_score();
        cout<<"overall marks : "<<overall<<endl;
        gradeof();
    }
};
int main(){
    float marks;
    char name[30];
    int roll;
    float score;
    cout<<"______student details______"<<endl;
    cout<<"enter the name of student : "<<endl;
    cin>>name;
    cout<<"enter student roll no. : "<<endl;
    cin>>roll;

    while(true){
        cout<<"enter overall marks acquired for academics : "<<endl;
        cin>>marks;
        if (marks>200){
            cout<<"invalid input"<<endl;
        }
        else{
            cout<<"marks entered : "<<marks<<endl;
            break;
        }
    }
    while(true){
        cout<<"enter overall score for sports : "<<endl;
        cin>>score;
        if (score>200){
            cout<<"invalid input"<<endl;
        }
        else{
            cout<<"score entered : "<<score<<endl;
            break;
        }
    }
    result r1(roll, name, marks, score);
    r1.display();
    return 0;

}