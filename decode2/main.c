//
//  main.c
//  decode2
//
//  Created by Christopher Ayala on 3/12/20.
//  Copyright © 2020 lee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


long decode2(long, long, long);

int main() {
    // insert code here...
    long x = random();
    long y = random();
    long z = random();
    printf("%li", decode2(x, y, z));
    return 0;
}

long decode2(long x, long y, long z) {
    y = y-z;
    x = x + y;
    long a = y;
    a = a << 63;
    a = a >> 63;
    a = a ^ x;
    return a;
}
