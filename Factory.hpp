#ifndef __FACTORY_HPP__
#define	__FACTORY_HPP__

#include "base.hpp"
#include "op.hpp"

class Factory {
public:
    Factory(char** argv, int argc);
    Base* parse(char** input, int length);
private:

}
