//
// Created by lty17 on 2022/10/25.
//including the iterator

#include "application.h"
void Application::initialize() {

}

Position Application::getStartPosition() {
    //获取初始位置

}
bool Application::isValid(const Position &p) {
    return false;
}

void Application::progress(const Position &p) {

}

bool Application::success(const Position &p) {
    return false;
}

void Application::goBack(const Position &p) {

}

void Application::print() {

}

Application::Iterator::Iterator() {

}

Application::Iterator::Iterator(const Position &currP) {

}

Application::Iterator::~Iterator() {

}

Position Application::Iterator::getNextPosition() {
    return nullptr;
}

bool Application::Iterator::noNextPosition() {
    return false;
}
