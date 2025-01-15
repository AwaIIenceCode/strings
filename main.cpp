#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void removeAllOccurrences(string& str, char ch)
{
    str.erase(remove(str.begin(), str.end(), ch), str.end());
}

int main()
{
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> ch;

    removeAllOccurrences(str, ch);

    cout << "Modified string: " << str << endl;

    return 0;
}
