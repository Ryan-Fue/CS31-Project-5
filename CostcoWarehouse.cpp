//
//  CostcoWarehouse.cpp
//  Project 5
//
//  Created by Ryan Fue on 3/3/25.
//

#include "CostcoWarehouse.h"
#include <iostream>
#include <string>

using namespace std;

CostcoWarehouse::CostcoWarehouse(string location, int number): mLocation(location), mNumber(number)
{
    
}

string CostcoWarehouse::getLocation() const{
    return (mLocation);
}

int CostcoWarehouse::getNumber() const{
    return mNumber;
}

void CostcoWarehouse::shopForStuff(CostcoMember & member, double amount){
    member.incrementPurchaseTotal(amount);
    member.incrementTripCount();
}

void CostcoWarehouse::returnStuff(CostcoMember & member, double amount){
    member.decrementPurchaseTotal(amount);
}

double CostcoWarehouse::calculateReward(CostcoMember member){
    double reward = 0;
    if (member.getKind() == CostcoMember::Kind::EXECUTIVE){
        reward = member.getPurchaseTotal()*.02 ;
    }
    
    return (reward);
}

double CostcoWarehouse::issueReward(CostcoMember & member){
    double reward = calculateReward(member);
    
    if (reward>0){
        member.clearPurchaseTotal();
    }
    
    return (reward);
}
