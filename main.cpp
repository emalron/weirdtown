#include <iostream>
#include "Miner.hpp"
#include "CState.hpp"
#include "HomeState.hpp"
#include "MineState.hpp"

int main() {
    Miner miner;

    miner.introduce();
    miner.changeState(new HomeState);

    for(int i=0;i<20;i++) {
        miner.update();
    }
    return 0;
}