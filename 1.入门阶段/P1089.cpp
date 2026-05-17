/**
 * 题目: P1089
 * 难度: 入门
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cash=0;
    int bank=0;
    
    for(int i=1;i<=12;i++)
    {
        int cost;
        cin>>cost;

        cash+=300;
        cash-=cost;
        if(cash<0){
            cout<<-i<<endl;
            return 0;
        }
        else{
            bank+=(cash/100)*100;
            cash%=100;
        }
    }

    cout<<cash+bank*1.2<<endl;

    return 0;
}
/*
时间复杂度: O(1)
空间复杂度: O(1)

--- 复盘 ---
对整除和取模的应用
*/