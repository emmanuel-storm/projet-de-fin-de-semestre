//
// Created by lattier.innocent on 15/04/2020.
//

#include <iostream>
#include <map>
#include "CSVReader.hpp"
#include <SFML/Graphics.hpp>

#ifndef TP4_FONCTION_H
#define TP4_FONCTION_H

std::map<std::pair<int, int>, std::string> getMap(const std::string &fileName);
sf::RectangleShape color(sf::RectangleShape rect, const std::string& block);

#endif //TP4_FONCTION_H
