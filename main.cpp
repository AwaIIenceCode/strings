#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str)
{
    string cleanedStr;
    for (char ch : str)
    {
        if (isalnum(ch))
        {
            cleanedStr += tolower(ch);
        }
    }

    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());

    return cleanedStr == reversedStr;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str))
    {
        cout << "The string is a palindrome.\n";
    }

    else
    {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}
