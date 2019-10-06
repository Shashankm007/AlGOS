#include<iostream>
using namespace std;

void print(int n, int number)
{
    if(number > n)
        return;

    cout << number << " ";

    for(int i = 0;i < 10;i++)
    {
        if(number == 0 && i == 0)
            continue;

        number = (number * 10) + i;
        print(n, number);
        number /= 10;
    }
}

int main()
{
    int n; cin >> n;
    print(n, 0);

    return 0;
}
