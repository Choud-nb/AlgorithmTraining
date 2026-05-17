/**
 * 题目: P1035
 * 难度: 入门
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,ans=0;
    double sum=0;
    cin>>k;
    while(sum<=k)
    {
        ans++;
        double add=1.0/ans;
        sum+=add;
    }

    cout<<ans<<endl;

    return 0;
}
/*
时间复杂度:???
空间复杂度:O(1)

--- 复盘 ---
注意！！！
若使用for循环判断时，在退出循环时ans依旧自增了，容易导致错误，输出结果必须减一
建议使用while循环

int k,ans=1;
double sum=0;
cin>>k;
for (; sum<=k; ans++)
{
    double add=1.0/ans;
    sum+=add;
}

cout<<ans-1<<endl;   

*/