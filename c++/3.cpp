// 自定义类型; 自定义枚举类型

#include <iostream>
using namespace std;

enum GameResult { WIN, LOSE, TIE, CANCEL };
int main () {
    GameResult result;
    enum GameResult omit = CANCEL;
    for (int count = WIN; count <= CANCEL; count++) {
        result = GameResult(count);
        if (result == omit) {
            cout << "the game was canceled" << endl;
        } else {
            cout << "the game was palyed";
            if (result == WIN) cout << "and we won!";
            if (result == LOSE) cout << "and we lose!";
            cout << endl;
        }
    }
    return 0;
}
