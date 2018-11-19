/*
 * Game.hpp
 *
 *  Created on: Nov 19, 2018
 *      Author: jonwa
 */

#ifndef SRC_GAME_HPP_
#define SRC_GAME_HPP_

#include "Map.hpp"
#include "Player.hpp"
/*
int main(int argc, char const *argv[]) {
	Map map = Map();
	bool finished = false;
	while (!finished) {
		std::string choice;
		std::getline(std::cin, choice);

		//move player
		if (choice == "move left") {
			map.getPlayer()->MoveLeft();
			std::string locMessage = map.getPlayer()->getLocation()->getLocationMessage();
			if (locMessage != "") {
				std::cout << locMessage << std::endl;
			}
			if (map.getPlayer()->getLocation()->getElement() == Element::WUMPUS) {
				finished = true;
			}
			else if (map.getPlayer()->getLocation()->getElement() == Element::PIT) {
				finished = true;
			}
		}
		else if (choice == "move right") {
			map.getPlayer()->MoveRight();
			std::string locMessage = map.getPlayer()->getLocation()->getLocationMessage();
			if (locMessage != "") {
				std::cout << locMessage << std::endl;
			}
			if (map.getPlayer()->getLocation()->getElement() == Element::WUMPUS) {
				finished = true;
			}
			else if (map.getPlayer()->getLocation()->getElement() == Element::PIT) {
				finished = true;
			}
		}
		else if (choice == "move up") {
			map.getPlayer()->MoveUp();
			std::string locMessage = map.getPlayer()->getLocation()->getLocationMessage();
			if (locMessage != "") {
				std::cout << locMessage << std::endl;
			}
			if (map.getPlayer()->getLocation()->getElement() == Element::WUMPUS) {
				finished = true;
			}
			else if (map.getPlayer()->getLocation()->getElement() == Element::PIT) {
				finished = true;
			}
		}
		else if (choice == "move down") {
			map.getPlayer()->MoveDown();
			std::string locMessage = map.getPlayer()->getLocation()->getLocationMessage();
			if (locMessage != "") {
				std::cout << locMessage << std::endl;
			}
			if (map.getPlayer()->getLocation()->getElement() == Element::WUMPUS) {
				finished = true;
			}
			else if (map.getPlayer()->getLocation()->getElement() == Element::PIT) {
				finished = true;
			}
		}

		//shoot an arrow
		else if (choice == "shoot left" || choice == "shoot right") {
			if (map.getPlayer()->isWumpusLeft()) {
				std::cout << "Your arrow hit the Wumpus. You win." << std::endl;
			}
			else {
				std::cout << "You just shot yourself. You lose." << std::endl;
			}
			finished = true;
		}
		else if (choice == "shoot up" || choice == "shoot down") {
			if (map.getPlayer()->isWumpusUp()) {
				std::cout << "Your arrow hit the Wumpus. You win." << std::endl;
			}
			else {
				std::cout << "You just shot yourself. You lose." << std::endl;
			}
			finished = true;
		}
	}

}
*/
#endif /* SRC_GAME_HPP_ */
