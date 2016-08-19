//
//  fun.c
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

float distance(struct point *loc)
{
    float distance;
    distance = sqrt((loc->x * loc->x) + (loc->y * loc->y));
    return distance;
}

float angle1(struct point *loc1, struct point *loc2)
{
    float angle1;
    angle1 = atan((loc1->y - loc2->y) / (loc1->x - loc2->x));
    return angle1;
}

float angle2(struct point *loc1, struct point *loc2)
{
    float angle2;
    angle2 = atan((loc1->y - loc2->y) / (loc1->x - loc2->x));
    return angle2;
}

float angle3(struct point *loc1, struct point *loc2)
{
    float angle3;
    angle3 = atan((loc1->y - loc2->y) / (loc1->x - loc2->x));
    return angle3;
}

float corner(float a1, float a2)
{
    float corner;
    corner = 180.00 - (a2 - a1);
    return corner;
}

float cormax(float a1, float a2)
{
    float cormax;
    cormax = 180.00 - (a2 - a1);
    return cormax;
}