#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double* num = new double[n];
    int x = 0;
    double total = 0; double pingjun;
    for (x = 0; x <= n - 1; x++) {
        cin >> num[x];
    }
    for (int i = 0; i < n - 1; i++) {           //内层循环控制每轮的比较和交换 ，下标从0开始所以是 n-i-1
        for (int j = 0; j < n - i - 1; j++) {
            //将比较大的数向上冒泡
            if (num[j] > num[j + 1]) {
                double t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
        }
    }
    
    for (int i = 1; i < n - 1; i++) {
        total = total + num[i];
    }
    pingjun = total / (n - 2);
    cout << pingjun;
    return 0;
}