#ifndef UNTITLED_MINESWEEPER_H
#define UNTITLED_MINESWEEPER_H

#include <iostream>
#include <vector>
#include <print>
#include <random>


class Cell {
public:
    Cell(std::tuple<unsigned, unsigned> newPosition,bool newIsMine);
    void printPosition();
    void printIsMine();

private:
    std::tuple<unsigned, unsigned> _position;
    bool _isMine = false;
    int _adjacentMines = 0;
};

class Board {
public:
    Board(unsigned newWidth, unsigned newHeight );
    void print();
private:
    unsigned _width;
    unsigned _height;
    std::vector<std::vector<Cell>> _grid;

};



#endif //UNTITLED_MINESWEEPER_H