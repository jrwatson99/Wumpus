/*
 * Map.hpp
 *
 *  Created on: Nov 11, 2018
 *      Author: jonwa
 */

#ifndef SRC_MAP_HPP_
#define SRC_MAP_HPP_

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Tile.hpp"
#include "Player.hpp"

class Map {
private:
	std::shared_ptr<Tile> origin;
	std::shared_ptr<Player> player;
	static const int MAP_SIZE = 12;

	void addPits() {
		if (origin != nullptr) {
			srand(time(nullptr));
			int numPits = (rand() % 3) + 3;
			for (int cycles = 0; cycles < numPits; cycles++) {
				bool validLocation = false;
				auto curr = origin;
				while (!validLocation) {
					int randomHorizontal = rand() % MAP_SIZE;
					int randomVertical = rand() % MAP_SIZE;
					for (int i = 0; i < randomHorizontal; i++) {
						curr = curr->getRight();
					}
					for (int i = 0; i < randomVertical; i++) {
						curr = curr->getDown();
					}
					if (curr->getElement() == Element::EMPTY) {
						validLocation = true;
					}
				}
				curr->setElement(Element::PIT);

				//up
				if (curr->getUp()->getElement() == Element::EMPTY) {
					curr->getUp()->setElement(Element::SLIME);
				}
				else if (curr->getUp()->getElement() == Element::BLOOD) {
					curr->getUp()->setElement(Element::GOOP);
				}

				//down
				if (curr->getDown()->getElement() == Element::EMPTY) {
					curr->getDown()->setElement(Element::SLIME);
				}
				else if (curr->getDown()->getElement() == Element::BLOOD) {
					curr->getDown()->setElement(Element::GOOP);
				}

				//left
				if (curr->getLeft()->getElement() == Element::EMPTY) {
					curr->getLeft()->setElement(Element::SLIME);
				}
				else if (curr->getLeft()->getElement() == Element::BLOOD) {
					curr->getLeft()->setElement(Element::GOOP);
				}

				//right
				if (curr->getRight()->getElement() == Element::EMPTY) {
					curr->getRight()->setElement(Element::SLIME);
				}
				else if (curr->getRight()->getElement() == Element::BLOOD) {
					curr->getRight()->setElement(Element::GOOP);
				}
			}
		}
	}

	void addWumpus() {
		bool validLocation = false;
		auto curr = origin;
		while (!validLocation) {
			srand((int)time(nullptr));
			int randomHorizontal = rand() % MAP_SIZE;
			int randomVertical = rand() % MAP_SIZE;
			for (int i = 0; i < randomHorizontal; i++) {
				curr = curr->getRight();
			}
			for (int i = 0; i < randomVertical; i++) {
				curr = curr->getDown();
			}
			if (curr->getElement() == Element::EMPTY) {
				validLocation = true;
			}
		}
		curr->setElement(Element::WUMPUS);
		//up
		if (curr->getUp()->getElement() == Element::EMPTY) {
			curr->getUp()->setElement(Element::BLOOD);
		}
		else if (curr->getUp()->getElement() == Element::SLIME) {
			curr->getUp()->setElement(Element::GOOP);
		}
		//further up
		if (curr->getUp()->getUp()->getElement() == Element::EMPTY) {
			curr->getUp()->getUp()->setElement(Element::BLOOD);
		}
		else if (curr->getUp()->getUp()->getElement() == Element::SLIME) {
			curr->getUp()->getUp()->setElement(Element::GOOP);
		}


		//down
		if (curr->getDown()->getElement() == Element::EMPTY) {
			curr->getDown()->setElement(Element::BLOOD);
		}
		else if (curr->getDown()->getElement() == Element::SLIME) {
			curr->getDown()->setElement(Element::GOOP);
		}
		//further down
		if (curr->getDown()->getDown()->getElement() == Element::EMPTY) {
			curr->getDown()->getDown()->setElement(Element::BLOOD);
		}
		else if (curr->getDown()->getDown()->getElement() == Element::SLIME) {
			curr->getDown()->getDown()->setElement(Element::GOOP);
		}

		//left
		if (curr->getLeft()->getElement() == Element::EMPTY) {
			curr->getLeft()->setElement(Element::BLOOD);
		}
		else if (curr->getLeft()->getElement() == Element::SLIME) {
			curr->getLeft()->setElement(Element::GOOP);
		}
		//further left
		if (curr->getLeft()->getLeft()->getElement() == Element::EMPTY) {
			curr->getLeft()->getLeft()->setElement(Element::BLOOD);
		}
		else if (curr->getLeft()->getLeft()->getElement() == Element::SLIME) {
			curr->getLeft()->getLeft()->setElement(Element::GOOP);
		}

		//right
		if (curr->getRight()->getElement() == Element::EMPTY) {
			curr->getRight()->setElement(Element::BLOOD);
		}
		else if (curr->getRight()->getElement() == Element::SLIME) {
			curr->getRight()->setElement(Element::GOOP);
		}
		//further right
		if (curr->getRight()->getRight()->getElement() == Element::EMPTY) {
			curr->getRight()->getRight()->setElement(Element::BLOOD);
		}
		else if (curr->getRight()->getRight()->getElement() == Element::SLIME) {
			curr->getRight()->getRight()->setElement(Element::GOOP);
		}

		//up-right diagonal
		if (curr->getUp()->getRight()->getElement() == Element::EMPTY) {
			curr->getUp()->getRight()->setElement(Element::BLOOD);
		}
		else if (curr->getUp()->getRight()->getElement() == Element::SLIME) {
			curr->getUp()->getRight()->setElement(Element::GOOP);
		}

		//up-left diagonal
		if (curr->getUp()->getLeft()->getElement() == Element::EMPTY) {
			curr->getUp()->getLeft()->setElement(Element::BLOOD);
		}
		else if (curr->getUp()->getLeft()->getElement() == Element::SLIME) {
			curr->getUp()->getLeft()->setElement(Element::GOOP);
		}

		//down-right diagonal
		if (curr->getDown()->getRight()->getElement() == Element::EMPTY) {
			curr->getDown()->getRight()->setElement(Element::BLOOD);
		}
		else if (curr->getDown()->getRight()->getElement() == Element::SLIME) {
			curr->getDown()->getRight()->setElement(Element::GOOP);
		}

		//down-left diagonal
		if (curr->getDown()->getLeft()->getElement() == Element::EMPTY) {
			curr->getDown()->getLeft()->setElement(Element::BLOOD);
		}
		else if (curr->getDown()->getLeft()->getElement() == Element::SLIME) {
			curr->getDown()->getLeft()->setElement(Element::GOOP);
		}
	}

	void addPlayer() {
		bool validLocation = false;
		auto curr = origin;
		while (!validLocation) {
			srand(time(nullptr));
			int randomHorizontal = rand() % MAP_SIZE;
			int randomVertical = rand() % MAP_SIZE;
			for (int i = 0; i < randomHorizontal; i++) {
				curr = curr->getRight();
			}
			for (int i = 0; i < randomVertical; i++) {
				curr = curr->getDown();
			}
			if (curr->getElement() == Element::EMPTY) {
				validLocation = true;
			}
		}
		curr->addPlayer();
		player = std::shared_ptr<Player>(new Player(curr));
	}

	void addElementsAndPlayer() {
		addWumpus();
		addPits();
		addPlayer();
	}

	char toElementChar(Element elem) const {
		char elementChar = '_';
		switch(elem) {
		case Element::BLOOD:
			elementChar = 'B';
			break;
		case Element::SLIME:
			elementChar = 'S';
			break;
		case Element::GOOP:
			elementChar = 'G';
			break;
		case Element::PIT:
			elementChar = 'P';
			break;
		case Element::WUMPUS:
			elementChar = 'W';
			break;
		case Element::EMPTY:
			elementChar = '_';
			break;
		}
		return elementChar;
	}
public:
	Map() {
		origin = std::shared_ptr<Tile>(new Tile());
		std::shared_ptr<Tile> prevFirstInRow = nullptr;
		auto firstInRow = origin;
		std::shared_ptr<Tile> prevTile = origin;
		for (int i = 0; i < MAP_SIZE; i++) {
			for (int j = 0; j < MAP_SIZE - 1; j++) {
				auto newTile = std::shared_ptr<Tile>(new Tile());
				newTile->setLeft(prevTile);
				prevTile->setRight(newTile);

				auto topTile = prevFirstInRow;
				int h = 0;
				while (prevFirstInRow != nullptr && h < j + 1) {
					topTile = topTile->getRight();
					h++;
				}
				if (topTile != nullptr) {
					topTile->setDown(newTile);
					newTile->setUp(topTile);
				}
				prevTile = newTile;
			}
			prevTile->setRight(firstInRow);
			firstInRow->setLeft(prevTile);

			if (i < MAP_SIZE - 1) {
				prevFirstInRow = firstInRow;
				firstInRow = std::shared_ptr<Tile>(new Tile());
				prevFirstInRow->setDown(firstInRow);
				firstInRow->setUp(prevFirstInRow);
				prevTile = firstInRow;
			}
			else {
				prevFirstInRow = firstInRow;
				firstInRow = origin;
				auto currPrevRow = prevFirstInRow;
				auto currThisRow = origin;
				for (int k = 0; k < MAP_SIZE; k++) {
					currThisRow->setUp(currPrevRow);
					currPrevRow->setDown(currThisRow);
					currThisRow = currThisRow->getRight();
					currPrevRow = currPrevRow->getRight();
				}
			}
		}

		addElementsAndPlayer();
	}

	void printMap() const {
		std::shared_ptr<Tile> currTile = origin;
		for (int i = 0; i < MAP_SIZE; i++) {
			for (int j = 0; j < MAP_SIZE; j++) {
				if (!currTile->containsPlayer()) {
					std::cout << toElementChar(currTile->getElement()) << " ";
				}
				else {
					std::cout << 'O' << " ";
				}
				currTile = currTile->getRight();
			}
			std::cout << std::endl;
			currTile = currTile->getDown();
		}
	}

	std::shared_ptr<Player> getPlayer() {
		return player;
	}

	std::shared_ptr<Tile> getOrigin() {
		return origin;
	}
};



#endif /* SRC_MAP_HPP_ */
