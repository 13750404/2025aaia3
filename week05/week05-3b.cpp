///wek05-3b.cppPart1:Input,Part2:Output
///Part3: stringstream Part4: reverse 反過來
///CPE 第2題 UVA 483 倒過來
#include <iostream>
#include <sstream>///Part 3stringstream的檔案是sstream
#include <algorithm>///Part4:reverse 的演算法
using namespace std;
int main()
{
    string line;///一行字的字串 Part 1:Input
    while (getline(cin, line)){///讀近來
        stringstream ss(line); ///Part 3 :用stringstream斷字
        string word;///字放這裡
        while (ss >> word ){///字放這裡
            reverse(word.begin(), word.end() );///Part4
            cout << "讀到了 "<< word << endl; ///Part 3
        }
        cout << line << endl;///Part2:Output
    }
}
