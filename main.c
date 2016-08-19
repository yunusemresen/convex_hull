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
    int i = 0, j = 0, k = 0, l = 0;
    struct point P[32];
    float min1x = 0.0, min1y = 0.0, min2x = 0.0, min2y = 0.0f, x1, y1;
    printf("argc = %d\n",argc);
    
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    FILE* filepointer;
    filepointer = fopen (argv[1], "r");
    char coordinates[256];
    
    i = 0;
    while (fgets(coordinates, sizeof(coordinates), filepointer) != NULL)
    {
        sscanf(coordinates, "(%f,%f)", &P[i].x, &P[i].y);
        printf("A[%d] = (%.2f,%.2f)\n", i, P[i].x, P[i].y);
        i++;
    }
    
    for (j = 0; j < 32; j++)
    {
        if (P[j].x < min1x)
        {
            min1x = P[j].x;
            min1y = P[j].y;
        }
    }
    printf("The point that have minimum x value is: (%.2f,%.2f)\n", min1x, min1y);
    
    for (k = 0; k < 32; k++)
    {
        if (P[k].y < min2y)
        {
            min2x = P[k].x;
            min2y = P[k].y;
        }
    }
    printf("The point that have minimum y value is: (%.2f,%.2f)\n", min2x, min2y);
    
    for (l = 0; l < 32; l++)
    {
        angle1(&P[k], &P[j]);
        angle2(&P[l], &P[k]);
        angle3(&P[l], &P[0]);
        corner(angle2, angle1);
        cormax(angle3, angle1);
        
        if (corner(double angle2, double angle1) > cormax(double angle3, double angle1))
        {
            
        }
    }
    
    fclose(filepointer);
    return 0;
}