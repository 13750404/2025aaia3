///wek05-3b.cppPart1:Input,Part2:Output
///Part3: stringstream Part4: reverse �ϹL��
///CPE ��2�D UVA 483 �˹L��
#include <iostream>
#include <sstream>///Part 3stringstream���ɮ׬Osstream
#include <algorithm>///Part4:reverse ���t��k
using namespace std;
int main()
{
    string line;///�@��r���r�� Part 1:Input
    while (getline(cin, line)){///Ū���
        stringstream ss(line); ///Part 3 :��stringstream�_�r
        string word;///�r��o��
        while (ss >> word ){///�r��o��
            reverse(word.begin(), word.end() );///Part4
            cout << "Ū��F "<< word << endl; ///Part 3
        }
        cout << line << endl;///Part2:Output
    }
}
