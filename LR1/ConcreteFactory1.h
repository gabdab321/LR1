#pragma once
#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    ProductA* createProductA() override {
        return new ProductA1();
    }

    ProductB* createProductB() override {
        return new ProductB1();
    }
};
