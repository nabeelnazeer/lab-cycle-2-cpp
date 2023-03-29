#include <iostream>

class objects
{
private:
    static int count;

public:
    objects()
    {
        count++;
    }
    static void add_object()
    {
        count++;
        std::cout << "************** count added ***************" << std::endl;
    }
    static void delete_object()
    {
        if (count > 0)
        {
            count--;
            std::cout << "************count removed***********" << std::endl;
        }
        else
        {
            std::cout << "error no object has been created to remove : " << std::endl;
        }
    }
    static void show_count()
    {
        std::cout << "*************************************" << std::endl;
        std::cout << "number of objects created : " << count << std::endl;
        std::cout << "**************************************" << std::endl;
    }
};
int objects::count = 0;
void menu()
{
    std::cout << "1. add an object" << std::endl;
    std::cout << "2. remove an object" << std::endl;
    std::cout << "3. display no. of objects" << std::endl;
    std::cout << "4. quit" << std::endl;
}
int main()
{
    int choice;
    while (true)
    {
        menu();
        std::cout << "please enter your choice : " << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            objects::add_object();
            break;
        case 2:
            objects::delete_object();
            break;
        case 3:
            objects::show_count();
            break;
        case 4:
            return 0;
        default:
            std::cout << "invalid entry" << std::endl;
        }
    }
    return 0;
}