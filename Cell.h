#ifndef CELL_H
#define CELL_H

#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

class Cell {
protected:
    // cell ID
    int ID_;

    // birth frame
    int birth_;

    // generation relative to progenitor
    int generation_;

    // mother ID
    int motherID_;

    // progenitor ID
    int proID_;

    int lID_;

    // old pole age
    int oldPoleAge_;

    // growth rate
    double growthRate_;

    bool isProgenitor_;

    // mother cell (reference)
    Cell *mother_;

    // progenitor
    Cell *progenitor_;

public:
    Cell();
    Cell(std::vector<std::string>,int,bool);

    void linkCell(Cell*, Cell*);
    void initAge(std::string);

    int getID() {return ID_;}
    int getMotherID() {return motherID_;}
    int getProID() {return proID_;}
    int getlID() {return lID_;}
    int getBirth() {return birth_;}
    int getGen() {return generation_;}
    int getAge() {return oldPoleAge_;}
    double getGrowthRate() {return growthRate_;}
    bool isProgenitor() {return isProgenitor_;}
    Cell* getMother() {return mother_;}
    Cell* getProgenitor() {return progenitor_;}

    void setMother(Cell *m) {mother_ = m;}
    void setPro(Cell *p) {progenitor_ = p;}
    void setAge(int a) {oldPoleAge_ = a;}
    void setGen(int g) {generation_ = g;}

    void printCell();
};

#endif