/*
5.10 编写一个使用嵌套循环的程序，要求用户输入一个值，指出要显示多少行。然后程序将显示的响应行数的星号，其中第一行包括一个星号，第二行包括两个星号，以此类推。每一行包含的字符数等于用户指定的行数，在星号不够的情况下，在星号前面加上句点。该程序的运行情况如下：
Enter number of rows:5(5为用户输入的数字)
....*
...**
..***
.****
*****
 */
using namespace std;
#include <iostream>
int main()
{
    int row,i,j;
    cout<<"please input the row to print:row=";
    cin>>row;
    for (i = 0;i < row;i++)
    {
        for (j = 0;j < row; j++)
        {
            if(i < row-j-1)
                cout<<".";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}