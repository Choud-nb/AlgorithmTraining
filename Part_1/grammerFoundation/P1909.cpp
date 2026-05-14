#include <iostream>
using namespace std;
int n;
int minMoney=0x3f3f3f3f;

int main()
{
    cin>>n;
    for(int i=0;i<3;i++)
    {
        int price,nums;
        cin>>nums>>price;
        int Money=n/nums*price;
        if(n%nums!=0)Money+=price;
        minMoney=min(minMoney,Money);
    }
    cout<<minMoney<<"\n";

    return 0;
}

//AC
//submit 1