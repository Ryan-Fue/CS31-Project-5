//
//  CostcoMember.cpp
//  Project 5
//
//  Created by Ryan Fue on 3/3/25.
//

#include "CostcoMember.h"
#include <string>
#include <iostream>

using namespace std;

CostcoMember::CostcoMember(string name, string number, Kind kind): mName(name), mNumber(number), mKind(kind), mTripCount(0), mPurchaseTotal(0)
{
    
}

string CostcoMember::getName() const {
    return (mName);
}

string CostcoMember::getNumber() const{
    return (mNumber);
}

CostcoMember::Kind CostcoMember::getKind() const{
    return (mKind);
}

int CostcoMember::getTripCount() const{
    return (mTripCount);
}

void CostcoMember::incrementTripCount(){
    mTripCount++;
}

void CostcoMember::clearTripCount(){
    mTripCount = 0;
}

double CostcoMember::getPurchaseTotal() const{
    return (mPurchaseTotal);
}

void CostcoMember::incrementPurchaseTotal(double amount){
    mPurchaseTotal += amount;
}

void CostcoMember::decrementPurchaseTotal(double amount){
    mPurchaseTotal -= amount;
}

void CostcoMember::clearPurchaseTotal(){
    mPurchaseTotal = 0;
}
