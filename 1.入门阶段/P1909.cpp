/**
 * 题目: P1000
 * 难度: 简单
 */
#include <bits/stdc++.h>

using namespace std;
int minMoney = 0x3f3f3f3f;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        int price, nums;
        cin >> nums >> price;
        int money = (n + nums - 1) / nums * price;
        minMoney = min(minMoney, money);
    }
    cout << minMoney << "\n";

    return 0;
}

/*
时间复杂度: O(N)
空间复杂度: O(1)

--- 复盘 ---
注意变量money的处理
*/