#include <iostream>
#include <string>

using namespace std;

class binary
{
    // private - by default
    string s;
    void checkBinary(void);

public:
    void read(void);
    // void checkBinary(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary ::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Incorrect Binary Number" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s[i] = '1';
        }
        else if (s.at(i) == '1')
        {
            s[i] = '0';
        }
    }
}

void binary ::display(void)
{
    checkBinary(); // --> nesting of member function
    cout << "Displaying your Binary tree!" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl
         << endl;
}

int main()
{
    binary b;
    b.read();
    // b.checkBinary();
    b.display();
    b.ones();
    b.display();
    return 0;
}

// nesting of member function means using function inside an function   (here: checkBinary() function is used inside display function)