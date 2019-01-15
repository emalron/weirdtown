#pragma once
#include "CState.hpp"

class HomeState : public CState {
    public:
        HomeState();
        ~HomeState();
        void update(Miner* miner);
};