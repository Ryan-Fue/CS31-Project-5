//
//  CostcoWarehouse.h
//  Project 5
//
//  Created by Ryan Fue on 3/3/25.
//

#ifndef CostcoWarehouse_H
#define CostcoWarehouse_H

#include "CostcoMember.h"
#include <iostream>
#include <string>

class CostcoWarehouse{
public:
    CostcoWarehouse(std::string location, int number);
    
    std::string getLocation() const;
    int getNumber() const;
    
    void shopForStuff(CostcoMember & member, double amount);
    void returnStuff(CostcoMember & member, double amount);
    double calculateReward(CostcoMember member);
    double issueReward(CostcoMember & member);

private:
    std::string mLocation;
    int mNumber;
    
};

#endif
