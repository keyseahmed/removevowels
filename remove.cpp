#include <iostream>
using namespace std;

string removeVowels(string s)
{
    int i = 0;
    int j = 0;
    while (i < s.size())
    {
        if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'))
        {
            s[j] = s[i];
            //cout << " s[i] = " << s[i] << " " << endl;

            cout << "  " << s[j];
            j++;
        }
        i++;
    }

    cout<< endl; 
    cout << s[j-1]<< endl; 
    cout << s.substr(0, j) << endl;
    return s.substr(0, j);
}

int main()
{

    string s = "leetcodeisacommunityforcoders";
    cout << removeVowels(s);

    return 0;
}
