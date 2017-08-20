//
// Created by ohrf02 on 8/20/2017.
//

#ifndef BARMAN_DRINK_H
#define BARMAN_DRINK_H


class Drink {
public:
    virtual void prepare() const = 0;
    virtual const char* getName() const{return "Drink";}
};


#endif //BARMAN_DRINK_H
