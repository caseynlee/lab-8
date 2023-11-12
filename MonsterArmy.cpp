/**
 * MonsterArmy.cpp
 *
 * Casey Lee
 * leecasey
 *
 * EECS 183: Lab Exam 2 Review
 *
 * NOTE: You WILL submit this file to the autograder
 */

#include "Monster.h"
#include "MonsterArmy.h"
#include <iostream>
#include <string>
using namespace std;

MonsterArmy::MonsterArmy() {
    currentSize = 0;
}

bool MonsterArmy::spawnMonster(string type, int points) {
    // check available space in army array
    if (currentSize < MAX_ARMY_SIZE) {
        army[currentSize].setData(type, points);
        currentSize++;
        return true;
    }
    else {
        return false;
    }
}

int MonsterArmy::pointsByType(string type) {
    int total = 0;
    for (int i = 0; i < currentSize; i++) {
        if (army[i].getType() == type) {
            total += army[i].getHitPoints();
        }
    }
    return total;
}
