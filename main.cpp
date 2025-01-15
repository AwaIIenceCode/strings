#include <iostream>
#include <string>

using namespace std;

void removeCharacter(string& str, size_t pos)
{
    if (pos < str.size())
    {
        str.erase(pos, 1);
    }
}

int main()
{
    string str;
    size_t pos;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the position of the character to remove: ";
    cin >> pos;

    removeCharacter(str, pos);

    cout << "Modified string: " << str << endl;

    return 0;
}
