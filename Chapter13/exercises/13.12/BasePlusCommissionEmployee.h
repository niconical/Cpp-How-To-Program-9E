/*
 * =====================================================================================
 *
 *       Filename:  BasePlusCommissionEmployee.h
 *
 *    Description:  Fig. 13.15: BasePlusCommissionEmployee class derived from
 *                  CommissionEmployee.
 *
 *        Version:  1.0
 *        Created:  12/08/16 20:05:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
    public:
        BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&,
                Date, double = 0.0f, double = 0.0f, double = 0.0f);

        void setBaseSalary(double);
        double getBaseSalary() const;

        // keyword virtual signals intent to override
        virtual double earnings() const;    // calculate earnings
        virtual void print() const;     // print BasePlusCommissionEmployee object

    private:
        double baseSalary;
};
