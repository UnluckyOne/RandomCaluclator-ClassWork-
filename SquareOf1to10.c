//
//  main.c
//  square_of_1_to_10
//
//  Created by Yanzhe on 2022/7/10.
//

#include <stdio.h>

int main() {
    int num1;
    num1 = 1;
    while (num1<11)
    {
        printf("%d\n",num1*num1);
        num1 = num1 + 1;
    }
    return 0;
}
