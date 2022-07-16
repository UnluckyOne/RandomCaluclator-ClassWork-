//
//  main.c
//  1_add_up_to_100
//
//  Created by Yanzhe on 2022/7/10.
//

#include <stdio.h>

int main() {
    int num1;
    num1 = 1;
    int sum;
    sum = 0;
    while (num1 <= 100) {
        sum = sum + num1;
        num1 = num1 + 1;
    }
    printf("%d\n", sum);
    return 0;
}


