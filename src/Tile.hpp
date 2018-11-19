/*
 * Tile.hpp
 *
 *  Created on: Nov 11, 2018
 *      Author: jonwa
 */

#ifndef SRC_TILE_HPP_
#define SRC_TILE_HPP_

#include <exception>
#include <memory>
#include "Element.hpp"

class Tile {
private:
	Element element;
	std::shared_ptr<Tile> left;
	std::shared_ptr<Tile> right;
	std::shared_ptr<Tile> up;
	std::shared_ptr<Tile> down;
	bool hasPlayer;
	bool visited;
public:
	Tile() {
		element = Element::EMPTY;
		left = nullptr;
		right = nullptr;
		up = nullptr;
		down = nullptr;
		hasPlayer = false;
		visited = false;
	}

	//element methods
	Element getElement() const {
		return element;
	}
	void setElement(Element elem) {
		element = elem;
	}

	//left methods
	std::shared_ptr<Tile> getLeft() const {
		return left;
	}
	void setLeft(std::shared_ptr<Tile> newLeft) {
		left = newLeft;
	}

	//right methods
	std::shared_ptr<Tile> getRight() const {
		return right;
	}
	void setRight(std::shared_ptr<Tile> newRight) {
		right = newRight;
	}

	//up methods
	std::shared_ptr<Tile> getUp() const {
		return up;
	}
	void setUp(std::shared_ptr<Tile> newUp) {
		up = newUp;
	}

	//down methods
	std::shared_ptr<Tile> getDown() const {
		return down;
	}
	void setDown(std::shared_ptr<Tile> newDown) {
		down = newDown;
	}

	bool containsPlayer() const {
		return hasPlayer;
	}
	void addPlayer() {
		hasPlayer = true;
		visited = true;
	}
	void removePlayer() {
		hasPlayer = false;
	}

	std::string getLocationMessage() {
		std::string message;
		switch(element) {
		case Element::EMPTY:
			message = "";
			break;
		case Element::PIT:
			message = "You fell down a bottomless pit. You lose.";
			break;
		case Element::SLIME:
			message = "I can hear the wind.";
			break;
		case Element::WUMPUS:
			message = "You walked into the Wumpus. You lose.";
			break;
		case Element::BLOOD:
			message = "I smell something foul.";
			break;
		case Element::GOOP:
			message = "I smell something foul. I can hear the wind.";
			break;
		}

		return message;
	}
};



#endif /* SRC_TILE_HPP_ */
