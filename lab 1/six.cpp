#include <iostream>
class Time
{
private:
    int seconds;
    int hours;
    int minutes;

public:
    void input();
    void sum(Time a, Time b);

    void display();
};
void Time::input()
{
    std::cout << "enter time in hh::mm::ss format : " << std::endl;
    std::cin >> hours;
    std::cout << ":";
    std::cin >> minutes;
    std::cout << ":";
    std::cin >> seconds;
}
void Time::sum(Time a, Time b)
{
    seconds = a.seconds + b.seconds;
    minutes = seconds / 60;
    seconds = seconds % 60;
    minutes = minutes + a.minutes + b.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + a.hours + b.hours;
}
void Time::display()
{
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
}
int main()
{
    Time t1, t2, t3;
    std::string choice;
    while (true)
    {
        t1.input();
        t2.input();
        t3.sum(t1, t2);
        std::cout << "first details : " << std::endl;
        t1.display();
        std::cout << "second details : " << std::endl;
        t2.display();
        std::cout << "the result of summation is : " << std::endl;
        t3.display();
        std::cout << "press any letter to continue or 'no' to stop : " << std::endl;
        std::cin >> choice;
        if (choice == "no")
        {
            break;
        }
    }
    return 0;
}