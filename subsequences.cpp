#include<iostream>
#include<vector>
using namespace std;

void print_subsequences(string s, int n, int right, string seq)
{
    if(seq != "")
        cout << seq << endl;
    for(int i = n - 1;i > right;i--)
    {
        seq += s[i];
        print_subsequences(s, n, i, seq);
        seq = seq.erase(seq.size() - 1);
    }
}

int main()
{
    string s; cin >> s;
    //print_subsequences(s, s.size(), -1, "");

    vector<string> subseqs;
    string letter = " ";
    int i, j, index;
    for(i = s.size() - 1;i >= 0;i--)
    {
        letter[0] = s[i];
        subseqs.push_back(letter);
        index = subseqs.size() - 1;

        for(j = 0; j <  index; j++)
            subseqs.push_back(letter + subseqs[j]);
    }

    for(auto subseq: subseqs)
        cout << subseq << endl;

    return 0;
}
