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
#include <math.h>

int main(int argc, char* argv[])
{
    int i = 0, j = 0;
    struct point P[32];
    //float a, b;
    
    printf("argc = %d\n",argc);
    
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    FILE* filepointer;
    filepointer = fopen (argv[1], "r");
    char coordinates[256];
    printf("P[22] = (%f,%f)\n\n", P[22].x, P[22].y);
    
    i = 0;
    while (fgets(coordinates, sizeof(coordinates), filepointer) != NULL)
    {
        sscanf(coordinates, "(%f,%f)", &P[i].x, &P[i].y);
        printf("A[%d] = (%.2f,%.2f)\n", i, P[i].x, P[i].y);
        i++;
    }
    
    for (j = 0; j < 32; j++)
    {
        sscanf(coordinates, "(%f,%f)", &P[j].x, &P[j].y);
        printf("B[%d] = (%.2f,%.2f)\n", j, P[j].x, P[j].y);
        //printf("%.2f\n", a = angle1(&P[i], &P[i+1]));
        //printf("%.2f\n", b = angle2(&P[i+1], &P[i+2]));
        //printf("%.2f\n", corner(a, b));
    }
    fclose(filepointer);
    return 0;
}