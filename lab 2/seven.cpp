#include<iostream>
using namespace std;
class alpha{
    protected:
    string input1;
    public:
    alpha(string);
    void show_x(){
        cout<<"animal no.1 : "<<input1<<endl;
    }
};
alpha::alpha(string a){
    input1=a;
    cout<<"alpha has been initialised"<<endl;
}
class beta{
    protected:
    string input2;
    public:
    beta(string);
    void show_y(){
        cout<<"animal no.2 : "<<input2<<endl;
    }
};
beta::beta(string b){
    input2=b;
    cout<<"beta has been initialised"<<endl;
}
class gamma:public alpha,public beta{
    protected:
    string animal;
    public:
    gamma();
    gamma (string a,string b,string c):alpha(a),beta(b){
        animal=c;
        cout<<"gamma has been initialised"<<endl;

    }
    void show();
};
void gamma::show(){
    cout<<"the two "<<animal<<" are "<<input1<<" and "<<input2<<endl;

}

int main(){
    string p,q,r;
    cout<<"enter the type of animals(herbivore or carnivore) : "<<endl;
    cin>>p;
    cout<<"enter animal no.1 : "<<endl;
    cin>>q;
    cout<<"enter animal no.2 : "<<endl;
    cin>>r;
    gamma animals(q,r,p);
    animals.show_x();
    animals.show_y();
    animals.show();
    return 0;

}
