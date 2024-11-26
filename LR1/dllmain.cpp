#include "pch.h"
#include "ConcreteFactory1.h"
#include "AbstractFactory.h"

extern "C" __declspec(dllexport) AbstractFactory* createFactory() {
    return new ConcreteFactory1();
}

extern "C" __declspec(dllexport) void destroyFactory(AbstractFactory* factory) {
    delete factory;
}
