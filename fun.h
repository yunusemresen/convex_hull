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

float distance(struct point *loc);
float angle1(struct point *loc1, struct point *loc2);
float angle2(struct point *loc1, struct point *loc2);
float angle3(struct point *loc1, struct point *loc2);
float corner(float a2, float a1);
float cormax(float a2, float a1);

#endif /* fun_h */