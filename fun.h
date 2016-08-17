//
//  fun.h
//  convex_hull
//
//  Created by Yunus Emre Şen on 12.08.2016.
//  Copyright © 2016 Yunus Emre Şen. All rights reserved.
//

#ifndef fun_h
#define fun_h

#include <stdio.h>

struct point
{
    float x, y;
};

float distance(struct point *loc1);
double angle1(struct point *loc1, struct point *loc2);
double angle2(struct point *loc2, struct point *loc3);
float corner(double angle2, double angle1);
#endif /* fun_h */