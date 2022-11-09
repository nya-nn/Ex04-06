// Ex04-06.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
#include"GetVolumeSurface.h"

int main()
{
    double wide;
    double height;
    double depth;

    double surface;
    double volume;

    cout << "幅を入力:";
    cin >> wide;
    cout << "高さを入力:";
    cin >> height;
    cout << "奥行きを入力:";
    cin >> depth;

    GetVolumeSurface(wide, height, depth, &volume, &surface);

    cout << "体積=" << volume << endl;
    cout << "表面積=" << surface << endl;

    int e;
    return 0;
}
