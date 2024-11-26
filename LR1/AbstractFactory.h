#pragma once

class ProductA;
class ProductB;

class AbstractFactory {
public:
    virtual ProductA* createProductA() = 0;
    virtual ProductB* createProductB() = 0;
    virtual ~AbstractFactory() {}
};
