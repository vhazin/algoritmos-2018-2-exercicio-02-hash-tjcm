//
//  main.c
//  hash
//
//  Created by Thiago Moraes on 26/08/2018.
//  Copyright © 2018 Thiago Moraes. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned long t, y, a, b, x, n, c, d, m, contador;
    contador = 0;
    scanf("%lu", &t);
    while (t>0){
        scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &x, &n, &c, &d, &m);
        for (unsigned long i = 0; i <= n; i++) {
            y = (a * (x+i) + b) % m;
            if ((y >= c) && (y <= d)) {
                contador++;
            }
        }
        printf("%lu\n",contador);
        contador = 0;
        t--;
    }
    
    
    
    return 0;
}
