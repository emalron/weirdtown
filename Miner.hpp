#pragma once
#include <iostream>
#include <string>

class CState;

class Miner {
    public:
        Miner() : thirsty(0), name("John") {};
        ~Miner();
        int thirsty;
        std::string name;
        void changeState(CState* state);
        void introduce();
        void update();
    
    private:
        CState* m_state;
};