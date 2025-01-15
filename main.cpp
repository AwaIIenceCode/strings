#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void countCharacters(const string& str, int& letters, int& digits, int& others)
{
    letters = digits = others = 0;
    for (char ch : str)
    {
        if (isalpha(ch))
        {
            ++letters;
        }

        else if (isdigit(ch))
        {
            ++digits;
        }

        else
        {
            ++others;
        }
    }
}

int main()
{
    string str;
    int letters, digits, others;

    cout << "Enter a string: ";
    getline(cin, str);

    countCharacters(str, letters, digits, others);

    cout << "Letters: " << letters << "\nDigits: " << digits << "\nOther symbols: " << others << endl;

    return 0;
}
