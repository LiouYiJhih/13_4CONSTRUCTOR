#include <iostream>
#include <cstring>
using namespace std;

class Reader
{
private:
    /* data */
    char name[10];
public:
    long index;
    // constructor
    Reader(char* name)
    {
        cout << "Reader's constructor is called!!" << endl;
        set_name(name);
        index = 1;
    }
    char* get_name()
    {
        return name;
    }
    void set_name(char* i_name);
};

void Reader::set_name(char* i_name)
{
    strcpy(name, i_name);
}

int main()
{
    char name[10];

    cout << "Please input your name.";
    cin >> name;

    Reader A_Reader(name);
    cout << "Your name is ";
    cout << A_Reader.get_name();

    cout << ". (index = " << A_Reader.index;
    cout << ")" <<endl;

    return 0;
}
