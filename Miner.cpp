#include "Miner.hpp"
#include "CState.hpp"

Miner::~Miner() {
    delete m_state;
}

void Miner::changeState(CState* state) {
    std::cout << "[BEFORE] " << this->m_state << std::endl;
    delete this->m_state;
    std::cout << "[AFTER] "<< this->m_state << std::endl;
    this->m_state = state;
}

void Miner::introduce() {
    std::cout << "Hello, Me name is " << name << std::endl;
}

void Miner::update() {
    m_state->update(this);
}