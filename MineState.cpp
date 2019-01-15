#include "HomeState.hpp"
#include "MineState.hpp"
#include "Miner.hpp"

MineState::MineState() {
    std::cout << "[SYS] MineState is created" << std::endl;
}
MineState::~MineState() {
    std::cout << "[SYS] MineState is deleted" << std::endl;
}

void MineState::update(Miner* miner) {
    if(miner->thirsty < 10) {
        std::cout << "Working..." << std::endl;
        miner->thirsty++;
    }
    else {
        std::cout << "Getting off work..." << std::endl;
        miner->changeState(new HomeState);
    }
}