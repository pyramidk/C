//
//  2.7cpp
//  c++
//
//  Created by zack on 2017/11/13.
//  Copyright © 2017年 zack. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;
    while (i < 10) {
        sum += i;
        i++;
    }
    cout << "sum = " << sum << endl;
    return 0;
}
