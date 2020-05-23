//
// Created by lattier.innocent on 11/05/2020.
//

#include <SFML/Graphics/CircleShape.hpp>
#include "Fruits.h"

void Fruits::bougerY(){
    if(!machin){
        y -= 3;
        x -= 1;
    }
    else{
        y += 3;
    }
}

void Fruits::bougerX(){
    if(!machin){
        x -= 3;
    }
    else{
        x += 3;
    }
}

void Fruits::draw(sf::RenderTarget &target, sf::RenderStates states) const{

}



void Fruits::afficher(sf::RenderWindow &window) {
    sf::CircleShape cercle(taille, 50);
    sf::CircleShape cercle2(taille, 50);
    cercle.setPosition(x, y);
    cercle2.setPosition(x, y);
    cercle.setFillColor(sf::Color::Green);
    cercle2.setFillColor(sf::Color::Black);
    window.draw(cercle);
    window.draw(cercle2);
}

void Fruits::changeDeSensY() {
    if(y <= positionInversementY){
        machin = true;
    }

}

void Fruits::changeDeSensX() {
    if (x <= positionInversementX){
        machin = true;
    }

}
