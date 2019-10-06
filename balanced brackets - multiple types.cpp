
#include<iostream>
using namespace std;

char pairs[3][2] = {{'[', ']'}, {'(', ')'}, {'{', '}'}};

bool isBalanced(string input, char last_bracket = ' ')
{
    static int i = 0;

    if(i == input.size())
        return last_bracket == ' ';

    char letter = input[i++];

    if(letter == ']' || letter == '}' || letter == ')')
    {
    	int index;
    	for(index = 0;index < 3;index++)
    		if(last_bracket == pairs[index][0] && letter == pairs[index][1])
                return true;

    	return false;
    }

    if(letter == '[' || letter == '{' || letter == '(')
        if(!isBalanced(input, letter))
    		return false;

    return isBalanced(input, last_bracket);
}

int main()
{
    string input; getline(cin, input);
    cout << isBalanced(input);

    return 0;
}
