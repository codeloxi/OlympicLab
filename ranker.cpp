//
//  ranker.cpp
//  olympicLab
//
//  Created by Jacob on 8/9/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#include "ranker.h"

using namespace std;
extern ofstream csis;

Ranker::Ranker(int i) {
    this->temp = i;
    count = 0;
    competitorList = new Competitor *[temp];
}

Ranker::~Ranker() {
    delete[] competitorList;
}

Competitor *Ranker::getLane(int val) {
    for (int i = 0; i < count; i++)
        if (val == competitorList[i] -> getLane())
            return competitorList[i];
    return NULL;
}

Competitor *Ranker::getFinish(int val) {
    for (int i = 1; i < count; i++) {
        for (int j = 0; j < count - i; j++) {
            if (competitorList[j] -> getTime() > competitorList[j + 1] -> getTime()) {
                Competitor *compPtr = competitorList[j];
                competitorList[j] = competitorList[j + 1];
                competitorList[j + 1] = compPtr;
            }
        }
    }
    return val > 0 && val <= count ? competitorList[val - 1] : NULL;
}

int Ranker::addList(Competitor *comp) {
    if (comp == NULL || count == temp){
        return 0;
    }
    
    competitorList[count] = comp;
    return count++;
}
