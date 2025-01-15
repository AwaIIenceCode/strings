#include <iostream>
#include <string>

using namespace std;

void replaceSpacesWithTabs(string& str)
{
    for (char& ch : str)
    {
        if (ch == ' ')
        {
            ch = '\t';
        }
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    replaceSpacesWithTabs(str);

    cout << "Modified string:\n" << str << endl;

    return 0;
}
