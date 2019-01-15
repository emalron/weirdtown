#pragma once
#include "Miner.hpp"

class CState {
    public:
        virtual ~CState() { };
        virtual void update(Miner* miner) = 0;
        
};