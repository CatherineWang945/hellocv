#include <iostream>
#include "unitlib.h"
using namespace std;

int main()
{
int select;
double val;
cout << "单位转换器" << endl;
cout << "1:摄氏度 → 华氏度" << endl;
cout << "2:华氏度 → 摄氏度" << endl;
cout << "3:米 → 英尺" << endl;
cout << "2:英尺 → 米" << endl;
cout << "2:磅 → 千克" << endl;
cout << "2:千克 → 磅" << endl;
cout << "请输入选项1～6:";
cin >> select;
cout << "请输入待转换数值:";
cin >> val;

double result;
switch(select)
{
case 1:result = c2f(val);break;
case 2:result = f2c(val);break;
case 3:result = m2ft(val);break;
case 4:result = ft2m(val);break;
case 5:result = p2kg(val);break;
case 6:result = kg2p(val);break;
default:
cout << "请输入有效数字进行选择" << endl;
return -1;
}
cout << "" << result << endl;
retrun 0;
}
