//
//  fun.c
//  convex_hull
//
//  Created by Yunus Emre Şen on 12.08.2016.
//  Copyright © 2016 Yunus Emre Şen. All rights reserved.
//

#include "fun.h"
#include <stdio.h>
#include <math.h>

double angle1(struct point *loc1, struct point *loc2)
{
    double angle1;
    angle1 = atan(loc1->y - loc2->y) / atan(loc1->x - loc2->x);
    return angle1;
}

double angle2(struct point *loc2, struct point *loc3)
{
    double angle2;
    angle2 = atan(loc2->y - loc3->y) / atan(loc2->x - loc3->x);
    return angle2;
}

float corner(double angle2, double angle1)
{
    double corner;
    corner = angle2 - angle1;
    return corner;
}