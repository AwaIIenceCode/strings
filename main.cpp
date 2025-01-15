#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& str, char ch)
{
    int count = 0;
    for (char c : str)
    {
        if (c == ch)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to count: ";
    cin >> ch;

    cout << "The character '" << ch << "' appears " << countOccurrences(str, ch) << " times." << endl;

    return 0;
}
