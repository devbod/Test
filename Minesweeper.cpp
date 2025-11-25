#include "Minesweeper.h"

Cell::Cell(std::tuple<unsigned, unsigned> newPosition,bool newIsMine) {
    _position = newPosition;
    _isMine = newIsMine;
}

void Cell::printPosition() {
    std::print("{}", _position);
    if (_isMine) std::println("Mine!");
}

void Cell::printIsMine() {
    if (_isMine) {
        std::print("*");
    }else {
        std::print(".");
    }
}

Board::Board(const unsigned newWidth, const unsigned newHeight) {
    _width = newWidth;
    _height = newHeight;

    for (unsigned y = 0; y < _height; ++y) {

        std::vector<Cell> currentRow;

        for (unsigned x = 0; x < _width; ++x) {
            bool isMine = (rand() & 1) == 0;

            Cell newCell(std::make_tuple(x, y), isMine);

            currentRow.push_back(newCell);
        }

        _grid.push_back(currentRow);
    }
}

void Board::print() {
    for (unsigned y = 0; y < _height; ++y) {
        for (unsigned x = 0; x < _width; ++x) {
            _grid[y][x].printPosition();
        }
    }
}
