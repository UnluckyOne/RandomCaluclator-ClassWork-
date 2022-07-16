//
//  main.c
//  1_times_2_times_up_till_10_(Useless)
//
//  Created by Yanzhe on 2022/7/10.
//

#include <stdio.h>

int main() {
    int num1;
    num1 = 1;
    int product;
    product = 1;
    while (num1 < 11) {
        product = num1*product;
        num1 = num1 + 1;
    }
    printf("%d\n", product);
    return 0;
}
