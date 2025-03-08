//
//  CostcoMember.h
//  Project 5
//
//  Created by Ryan Fue on 3/3/25.
//

#ifndef CostcoMember_H
#define CostcoMember_H

#include <iostream>
#include <string>

class CostcoMember
{
public:
    enum class Kind {BUSINESS, EXECUTIVE, GOLDSTAR};
    
    CostcoMember(std::string name, std::string number, Kind kind);
    
    std::string getName() const;
    std::string getNumber() const;
    Kind getKind() const;
    
    int getTripCount() const;
    void incrementTripCount();
    void clearTripCount();
    
    double getPurchaseTotal() const;
    void incrementPurchaseTotal(double amount);
    void decrementPurchaseTotal(double amount);
    void clearPurchaseTotal();

private:
    std::string mName;
    std::string mNumber;
    Kind mKind;
    int mTripCount;
    double mPurchaseTotal;
};

#endif
