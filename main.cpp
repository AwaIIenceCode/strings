#include <iostream>
#include <string>

using namespace std;

void insertCharacter(string& str, size_t pos, char ch)
{
    if (pos <= str.size())
    {
        str.insert(pos, 1, ch);
    }
}

int main()
{
    string str;
    size_t pos;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the position to insert the character: ";
    cin >> pos;

    cout << "Enter the character to insert: ";
    cin >> ch;

    insertCharacter(str, pos, ch);

    cout << "Modified string: " << str << endl;

    return 0;
}
