#include <iostream>
using namespace std;

void printMultiplicationTable(int n) {
    // 迴圈遍歷行
    for (int i = 1; i <= n; ++i) {
        // 迴圈遍歷列
        for (int j = 1; j <= n; ++j) {
            // 輸出乘法結果，並用tab分隔
            cout << i * j << "\t";
        }
        // 每行結束後換行
        cout << endl;
    }
}

int main() {
    int n;
    cout << "請輸入乘法表的大小: ";
    cin >> n;
    printMultiplicationTable(n);
    return 0;
}