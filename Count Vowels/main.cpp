#include <iostream>
#include <string>

using namespace std;

int countVowels(string &s, int i)
{
    if (i == s.length())
    {
        return 0;
    }
    char c=s[i];
    int found = 0;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        found = 1;
    }

    return found + countVowels(s, i + 1);
}

int main() {
    string s;
    getline(cin, s);
    cout << countVowels(s, 0) << endl;

    return 0;
}
