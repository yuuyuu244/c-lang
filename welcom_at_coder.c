/* 
 * File:   main.c
 * Author: yuuyuu244
 *
 * Created on 2018/02/18, 15:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    // input value of integer
    int a;
    
    // input value of integer
    int b;
    
    //input value of integer
    int c;
    
    // string args
    char s[128];
    
    /* param string Conversion specifier
     * param &a adress of a
     */
    scanf("%d", &a);
    
    scanf("%d %d", &b, &c);
    
    scanf("%s", s);
    
    int result = a + b + c;
    
    printf("%d %s\n", result, s);
    
    return 0;
}

