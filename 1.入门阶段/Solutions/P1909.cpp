#include <iostream>
using namespace std;
int minMoney = 0x3f3f3f3f;

int main()
{
    int n;
    ios::sync_with_stdio(0);
    cin.tie(0);
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

// AC
// submit 1