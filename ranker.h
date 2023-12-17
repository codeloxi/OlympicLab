//
//  ranker.h
//  olympicLab
//
//  Created by Jacob on 8/9/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef ranker_h
#define ranker_h

#include "competitor.h"
#include <iostream>

using namespace std;

class Ranker {
    Competitor **competitorList;
    int temp;
    int count;
public:
    Ranker(int i);
    ~Ranker();
    Competitor *getLane(int val);
    Competitor *getFinish(int val);
    int addList(Competitor *comp);
};

#endif /* ranker_h */
