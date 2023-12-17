//
//  competitor.h
//  olympicLab
//
//  Created by Jacob on 8/9/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef competitor_h
#define competitor_h

#include <iostream>
#include <iomanip>

using namespace std;

class Competitor {
private:
    char *competitorName;
    int lane;
    float raceTime;
    
public:
    Competitor(char *strName, int laneNum);
    ~Competitor();
    void setTime(float time);
    char *getName();
    int getLane();
    float getTime();
    void print();
};

#endif /* competitor_h */
