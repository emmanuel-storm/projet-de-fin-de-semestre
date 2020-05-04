//
// Created by lattier.innocent on 15/04/2020.
//

#include "Fonction.h"

std::map<std::pair<int, int>, std::string> getMap(const std::string &fileName){
    std::cout << "rebuilding map..." << std::flush;
    std::map<std::pair<int, int>, std::string> map;
    CSVReader reader(fileName);
    std::vector<std::vector<std::string>> data = reader.getData();
    for(auto line : data)
    {
        int x = stoi(line[0]);
        int z = stoi(line[1]);
        std::string block = line[2];

        map[std::make_pair(x,z)] = block;
    }
    std::cout << "OK" << std::endl;
    return map;
}

sf::RectangleShape color(sf::RectangleShape rect, const std::string& block){
    if(block == "water")
        rect.setFillColor(sf::Color(0x00a8ffff));
    else if( block == "sand")
        rect.setFillColor(sf::Color(0xf6e58dff));
    else if(block == "spruce_leaves")
        rect.setFillColor(sf::Color(0x6ab04cff));
    else if(block == "grass_block")
        rect.setFillColor(sf::Color(0x009432ff));
    else if(block == "seagrass" || block == "grass")
        rect.setFillColor(sf::Color(0x006266ff));
    else if(block == "fern")
        rect.setFillColor(sf::Color(0x753c03ff));
    else if(block == "gravel")
        rect.setFillColor(sf::Color(0xbdc3c7ff));
        //...
    else
        rect.setFillColor(sf::Color::Red);

    return rect;
}