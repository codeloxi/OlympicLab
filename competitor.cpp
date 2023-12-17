//
//  competitor.cpp
//  olympicLab
//
//  Created by Jacob on 8/9/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#include "competitor.h"
#include <fstream>

using namespace std;
extern ofstream csis;

Competitor::Competitor(char *name, int laneNumber) {
    int val = (int) strlen(name);
    competitorName = new char[val + 1];
    strcpy(competitorName, name);
    this -> lane = laneNumber;
    raceTime = 0;
}

Competitor::~Competitor() {
    delete[] competitorName;
}

void Competitor::setTime(float time) {
    this -> raceTime = time;
}

char *Competitor::getName() {
    return competitorName;
}

int Competitor::getLane() {
    return lane;
}

float Competitor::getTime() {
    return raceTime;
}

void Competitor::print() {
    cout << "Name: " << competitorName << setw((int) (30 - strlen(competitorName))) << " Lane: " << lane << setw(10) << " Time: " << raceTime << endl;
    csis << "Name: " << competitorName << setw((int) (30 - strlen(competitorName))) << " Lane: " << lane << setw(10) << " Time: " << raceTime << endl;
}
