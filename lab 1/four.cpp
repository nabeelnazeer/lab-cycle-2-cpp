
#include <iostream>
#include <string>

class operation
{
private:
    int len;
    std::string word;

public:
    int length(std::string word);
};
int operation::length(std::string x)
{
    word = x;
    len = word.length();
    return (len);
}
class concatenator
{
private:
    std::string result;

public:
    void concate(std::string w);
    std::string get_result();
};
void concatenator::concate(std::string w)
{
    result += w;
}
std::string concatenator::get_result()
{
    return (result);
}
class compare
{
private:
    std::string *word;
    int size;

public:
    compare()
    {
    }
    compare(int s)
    {
        size = s;
        word = new std::string[size + 1];
    }
    void getword()
    {
        std::cout << "enter " << size << " words : " << std::endl;
        for (int i = 0; i < size; i++)
        {
            std::cout << "enter string no. " << i + 1 << " ; " << std::endl;
            std::cin >> word[i];
        }
    }
    void comparison()
    {
        std::string largest = word[0];
        for (int i = 0; i < size; i++)
        {
            if (word[i].length() > largest.length())
            {
                largest = word[i];
            }
            else if (word[i].length() == largest.length())
            {
                std::cout << "the words " << word[i] << " and " << largest << " are same " << std::endl;
            }
        }
        std::cout << " the largest word is : " << largest << std::endl;
    }
};
const std::string YES = "skip";
int main()
{
    std::string name, word, words;
    operation s;
    concatenator c;
    int p;

    int length, r;
    std::cout << "*************** length of string ******************" << std::endl;
    while (true)
    {
        std::cout << "enter word to get length or type 'skip' to skip : " << std::endl;
        getline(std::cin, name);
        if (name.empty())
        {
            std::cout << "please enter a word to continue\n";
        }
        else
        {
            length = s.length(name);
            std::cout << "the length of word is : " << length << std::endl;
            if (name == YES)
            {
                break;
            }
        }
    }
    std::cout << "************** concatenate ***************" << std::endl;
    std::cout << "how many words to concatenate : " << std::endl;
    std::cin >> r;
    for (int i = 0; i < r + 1; i++)
    {
        std::cout << "enter word or exit to skip : " << std::endl;
        getline(std::cin, word);
        if (word == "exit")
        {
            break;
        }
        c.concate(word);
        std::cout << "result of concatenation : " << c.get_result() << std::endl;
    }
    std::cout << "the result is : " << c.get_result() << std::endl;
    std::cout << "**************** compare ******************" << std::endl;
    std::cout << "enter no. of strings to compare : " << std::endl;
    std::cin >> p;
    compare sc(p);

    std::cout << "please provide words to continue : " << std::endl;
    sc.getword();
    sc.comparison();

    return 0;
}