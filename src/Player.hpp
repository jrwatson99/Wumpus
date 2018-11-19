/*
 * Player.hpp
 *
 *  Created on: Nov 11, 2018
 *      Author: jonwa
 */

#ifndef SRC_PLAYER_HPP_
#define SRC_PLAYER_HPP_

#include <memory>
#include "Tile.hpp"

class Player {
private:
	std::shared_ptr<Tile> location;
public:
	Player(std::shared_ptr<Tile> loc) {
		location = loc;
	}

	std::shared_ptr<Tile> getLocation() const {
		return location;
	}

	//Move player one space left
	void MoveLeft() {
		location->removePlayer();
		location = location->getLeft();
		location->addPlayer();
	}
	//Move player one space right
	void MoveRight() {
		location->removePlayer();
		location = location->getRight();
		location->addPlayer();
	}
	//Move player one space up
	void MoveUp() {
		location->removePlayer();
		location = location->getUp();
		location->addPlayer();
	}
	//Move player one space down
	void MoveDown() {
		location->removePlayer();
		location = location->getDown();
		location->addPlayer();
	}

	bool isWumpusLeft() {
		auto currLoc = location->getLeft();;
		while (currLoc->getElement() != Element::WUMPUS && !currLoc->containsPlayer()) {
			currLoc = currLoc->getLeft();
		}
		bool isWumpusLeft = false;
		if (currLoc->getElement() == Element::WUMPUS) {
			isWumpusLeft = true;
		}

		return isWumpusLeft;
	}
	bool isWumpusUp() {
		auto currLoc = location->getUp();
		while (currLoc->getElement() != Element::WUMPUS && !currLoc->containsPlayer()) {
			currLoc = currLoc->getUp();
		}
		bool isWumpusUp = false;
		if (currLoc->getElement() == Element::WUMPUS) {
			isWumpusUp = true;
		}

		return isWumpusUp;
	}
};



#endif /* SRC_PLAYER_HPP_ */
