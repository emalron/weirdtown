#pragma once
#include "CState.hpp"

class MineState : public CState {
    public:
        MineState();
        ~MineState();
        void update(Miner* miner);
};