#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

#include "Map.hpp"

void testMapGen() {
	Map map = Map();
}
void testPrintMap() {
	Map map = Map();
	map.printMap();
}
void testMapSizeHorizontal() {
	Map map = Map();
	auto actualOrigin = map.getOrigin();
	auto expectedEndHorizontal = actualOrigin;
	for (int i = 0; i < 11; i++) {
		expectedEndHorizontal = expectedEndHorizontal->getRight();
	}
	ASSERT(actualOrigin != expectedEndHorizontal);
}
void testMapSizeVeritcal() {
	Map map = Map();
	auto actualOrigin = map.getOrigin();
	auto expectedEndVertical = actualOrigin;
	for (int i = 0; i < 11; i++) {
		expectedEndVertical = expectedEndVertical->getDown();
	}
	ASSERT(actualOrigin != expectedEndVertical);
}
void testCrossoverHorizontal0() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal1() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 1; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal2() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 2; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal3() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 3; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal4() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 4; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal5() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 5; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal6() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 6; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal7() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 7; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal8() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 8; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal9() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 9; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal10() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 10; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverHorizontal11() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 11; i++) {
		actualTile = actualTile->getDown();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getRight();
	}
	ASSERT(actualTile == expectedTile);
}

//test vertical crossover
void testCrossoverVertical0() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical1() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 1; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical2() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 2; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical3() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 3; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical4() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 4; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical5() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 5; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical6() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 6; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical7() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 7; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical8() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 8; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical9() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 9; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical10() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 10; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}
void testCrossoverVertical11() {
	Map map = Map();
	auto actualTile = map.getOrigin();
	for (int i = 0; i < 11; i++) {
		actualTile = actualTile->getRight();
	}
	auto expectedTile = actualTile;
	for (int i = 0; i < 12; i++) {
		expectedTile = expectedTile->getDown();
	}
	ASSERT(actualTile == expectedTile);
}

void testTileConstructor() {
	Tile tile = Tile();
	ASSERT_EQUAL(tile.getElement(), Element::EMPTY);
	ASSERT_EQUAL(tile.getLeft(), nullptr);
	ASSERT_EQUAL(tile.getRight(), nullptr);
	ASSERT_EQUAL(tile.getUp(), nullptr);
	ASSERT_EQUAL(tile.getDown(), nullptr);
}
void testTileSetGetElement() {
	Tile tile = Tile();
	ASSERT_EQUAL(tile.getElement(), Element::EMPTY);
	tile.setElement(Element::PIT);
	ASSERT_EQUAL(tile.getElement(), Element::PIT);
	tile.setElement(Element::WUMPUS);
	ASSERT_EQUAL(tile.getElement(), Element::WUMPUS);
	tile.setElement(Element::SLIME);
	ASSERT_EQUAL(tile.getElement(), Element::SLIME);
	tile.setElement(Element::BLOOD);
	ASSERT_EQUAL(tile.getElement(), Element::BLOOD);
	tile.setElement(Element::GOOP);
	ASSERT_EQUAL(tile.getElement(), Element::GOOP);
}
void testTileSetLeft() {
	std::shared_ptr<Tile> tile0(new Tile());
	ASSERT_EQUAL(tile0->getLeft(), nullptr);
	std::shared_ptr<Tile> tile1(new Tile());
	tile0->setLeft(tile1);
	ASSERT_EQUAL(tile0->getLeft(), tile1);
}
void testTileSetRight() {
	std::shared_ptr<Tile> tile0(new Tile());
	ASSERT_EQUAL(tile0->getRight(), nullptr);
	std::shared_ptr<Tile> tile1(new Tile());
	tile0->setRight(tile1);
	ASSERT_EQUAL(tile0->getRight(), tile1);
}
void testTileSetUp() {
	std::shared_ptr<Tile> tile0(new Tile());
	ASSERT_EQUAL(tile0->getUp(), nullptr);
	std::shared_ptr<Tile> tile1(new Tile());
	tile0->setUp(tile1);
	ASSERT_EQUAL(tile0->getUp(), tile1);
}
void testTileSetDown() {
	std::shared_ptr<Tile> tile0(new Tile());
	ASSERT_EQUAL(tile0->getDown(), nullptr);
	std::shared_ptr<Tile> tile1(new Tile());
	tile0->setDown(tile1);
	ASSERT_EQUAL(tile0->getDown(), tile1);
}

void testTileLocationMessages() {
	std::shared_ptr<Tile> tile(new Tile());
	ASSERT_EQUAL(tile->getLocationMessage(), "");

	tile->setElement(Element::PIT);
	ASSERT_EQUAL(tile->getLocationMessage(), "You fell down a bottomless pit. You lose.");

	tile->setElement(Element::WUMPUS);
	ASSERT_EQUAL(tile->getLocationMessage(), "You walked into the Wumpus. You lose.");

	tile->setElement(Element::SLIME);
	ASSERT_EQUAL(tile->getLocationMessage(), "I can hear the wind.");

	tile->setElement(Element::BLOOD);
	ASSERT_EQUAL(tile->getLocationMessage(), "I smell something foul.");

	tile->setElement(Element::GOOP);
	ASSERT_EQUAL(tile->getLocationMessage(), "I smell something foul. I can hear the wind.");
}

//test wumpus in all directions true and false
void testIsWumpusLeftTrue() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileLeft->setElement(Element::WUMPUS);
	ASSERT(player->isWumpusLeft());
}
void testIsWumpusLeftFalse() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileTop->setElement(Element::WUMPUS);
	ASSERT(!player->isWumpusLeft());
}
void testIsWumpusRightTrue() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileRight->setElement(Element::WUMPUS);
	ASSERT(player->isWumpusLeft());
}
void testIsWumpusRightFalse() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileBottom->setElement(Element::WUMPUS);
	ASSERT(!player->isWumpusLeft());
}
void testIsWumpusUpTrue() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileTop->setElement(Element::WUMPUS);
	ASSERT(player->isWumpusUp());
}
void testIsWumpusUpFalse() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileLeft->setElement(Element::WUMPUS);
	ASSERT(!player->isWumpusUp());
}
void testIsWumpusDownTrue() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileBottom->setElement(Element::WUMPUS);
	ASSERT(player->isWumpusUp());
}
void testIsWumpusDownFalse() {
	std::shared_ptr<Tile> tileTop;
	std::shared_ptr<Tile> tileLeft;
	std::shared_ptr<Tile> tileMid;
	std::shared_ptr<Tile> tileRight;
	std::shared_ptr<Tile> tileBottom;
	tileTop->setDown(tileMid);
	tileTop->setUp(tileBottom);
	tileLeft->setRight(tileMid);
	tileLeft->setLeft(tileRight);
	tileMid->setLeft(tileLeft);
	tileMid->setRight(tileRight);
	tileMid->setUp(tileTop);
	tileMid->setDown(tileBottom);
	tileRight->setLeft(tileMid);
	tileRight->setRight(tileLeft);
	tileBottom->setUp(tileMid);
	tileBottom->setDown(tileTop);

	std::shared_ptr<Player> player(new Player(tileMid));
	tileMid->addPlayer();
	tileLeft->setElement(Element::WUMPUS);
	ASSERT(!player->isWumpusUp());
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	s.push_back(CUTE(testMapGen));
	s.push_back(CUTE(testPrintMap));
	s.push_back(CUTE(testMapSizeHorizontal));
	s.push_back(CUTE(testMapSizeVeritcal));
	s.push_back(CUTE(testCrossoverHorizontal0));
	s.push_back(CUTE(testCrossoverHorizontal1));
	s.push_back(CUTE(testCrossoverHorizontal2));
	s.push_back(CUTE(testCrossoverHorizontal3));
	s.push_back(CUTE(testCrossoverHorizontal4));
	s.push_back(CUTE(testCrossoverHorizontal5));
	s.push_back(CUTE(testCrossoverHorizontal6));
	s.push_back(CUTE(testCrossoverHorizontal7));
	s.push_back(CUTE(testCrossoverHorizontal8));
	s.push_back(CUTE(testCrossoverHorizontal9));
	s.push_back(CUTE(testCrossoverHorizontal10));
	s.push_back(CUTE(testCrossoverHorizontal11));
	s.push_back(CUTE(testCrossoverVertical0));
	s.push_back(CUTE(testCrossoverVertical1));
	s.push_back(CUTE(testCrossoverVertical2));
	s.push_back(CUTE(testCrossoverVertical3));
	s.push_back(CUTE(testCrossoverVertical4));
	s.push_back(CUTE(testCrossoverVertical5));
	s.push_back(CUTE(testCrossoverVertical6));
	s.push_back(CUTE(testCrossoverVertical7));
	s.push_back(CUTE(testCrossoverVertical8));
	s.push_back(CUTE(testCrossoverVertical9));
	s.push_back(CUTE(testCrossoverVertical10));
	s.push_back(CUTE(testCrossoverVertical11));
	s.push_back(CUTE(testTileConstructor));
	s.push_back(CUTE(testTileSetGetElement));
	s.push_back(CUTE(testTileSetLeft));
	s.push_back(CUTE(testTileSetRight));
	s.push_back(CUTE(testTileSetUp));
	s.push_back(CUTE(testTileSetDown));
	s.push_back(CUTE(testTileLocationMessages));
	s.push_back(CUTE(testIsWumpusLeftTrue));
	s.push_back(CUTE(testIsWumpusLeftFalse));
	s.push_back(CUTE(testIsWumpusRightTrue));
	s.push_back(CUTE(testIsWumpusRightFalse));
	s.push_back(CUTE(testIsWumpusUpTrue));
	s.push_back(CUTE(testIsWumpusUpFalse));
	s.push_back(CUTE(testIsWumpusDownTrue));
	s.push_back(CUTE(testIsWumpusDownFalse));

	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}

