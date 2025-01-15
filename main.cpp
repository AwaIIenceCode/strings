#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string& str)
{
    istringstream stream(str);
    int count = 0;
    string word;

    while (stream >> word)
    {
        ++count;
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "Number of words: " << countWords(str) << endl;

    return 0;
}
