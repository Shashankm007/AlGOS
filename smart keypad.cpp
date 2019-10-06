#include<iostream>
#include<string>
using namespace std;

string letterSet[] = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
};

string strings[] = {
    "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
    "utkarsh", "divyam", "vidhi", "sparsh", "akku"
};

void generate(string num, string ans = "", int i = 0)
{
    if(i == num.length())
    {
        for(int x = 0;x < 11;x++)
        {
            if(strings[x].find(ans) != string::npos)
                cout << strings[x] << endl;
        }
        return;
    }

    string letters = letterSet[num[i] - '0'];
    for(int x = 0;x < letters.length();x++)
    {
        ans += letters[x];
        generate(num, ans, i + 1);
        ans = ans.erase(ans.length() - 1);
    }
}

int main()
{
    string num; cin >> num;
    generate(num);

    return 0;
}
