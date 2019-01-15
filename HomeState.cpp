#pragma once
#include "CState.hpp"
#include "HomeState.hpp"
#include "MineState.hpp"
#include "Miner.hpp"

HomeState::HomeState() {
    std::cout << "[SYS] HomeState is created" << std::endl;
}
HomeState::~HomeState() {
    std::cout << "[SYS] HomeState is deleted" << std::endl;
}

void HomeState::update(Miner* miner) {
    if(miner->thirsty < 5) {
        std::cout << "Getting to work...";
        miner->changeState(new MineState);
    }
    else {
        std::cout << "*Sluph*" << std::endl;
        miner->thirsty = 0;
    }
}