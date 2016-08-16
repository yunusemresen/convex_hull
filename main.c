//
//  main.c
//  convex_hull
//
//  Created by Yunus Emre Şen on 12.08.2016.
//  Copyright © 2016 Yunus Emre Şen. All rights reserved.
//

#include "fun.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i = 0;
    struct point A;
    float a, b;
    
    printf("argc = %d\n",argc);
    
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    FILE* filepointer;
    filepointer = fopen (argv[1], "r");
    char coordinates[256];
    
    while (fgets(coordinates, sizeof(coordinates), filepointer) != NULL)
    {
        sscanf(coordinates, "(%f,%f)", &A.x, &A.y);
        printf("A_%d(%.2f,%.2f)\n", i-1, A.x, A.y);
        printf("%.2f\n", a = angle1(&A, &A));
        printf("%.2f\n", b = angle1(&A, &A));
        printf("%.2f\n", corner(a, b));
        i++;
    }
    
    fclose(filepointer);
    return 0;
}
