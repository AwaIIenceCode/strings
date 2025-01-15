#include <iostream>
#include <string>

using namespace std;

void swapChar(string& str)
{
    for (char& ch : str)
    {
        if (ch == '.')
        {
            ch = '!';
        }
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    swapChar(str);

    cout << "Modified string: " << str << endl;

    return 0;
}
