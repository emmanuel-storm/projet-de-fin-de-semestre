//
// Created by lattier.innocent on 11/05/2020.
//

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/Mouse.hpp>
#include "Fruits.h"

void Fruits::bougerY(){
    if(!machin){
        y -= 3;
        x -= 3;
    }
    else{
        y += 3;
        x -= 3;
    }
}

void Fruits::bougerX(){
    if(!machin){
        x += 3;
    }
    else{
        x -= 3;
    }
}

void Fruits::draw(sf::RenderTarget &target, sf::RenderStates states) const{

}


//void Fruits::multiAffichage(sf::RenderWindow &window, sf::String fruit) {
//    if((x < 0 || x > WIDTH) && (y < 0 || y > HEIGHT)){
//        afficher(window, "../../ressources/banane.png");
//    }
//}



void Fruits::afficher(sf::RenderWindow &window, sf::String fruit) {

        //sprites

    sf::Texture texture;
    texture.loadFromFile(fruit);
    sf::Sprite le_fruit(texture);
    le_fruit.setScale(6.0f, 3.0f);

// redimensionne l'entité relativement à son échelle actuelle
    le_fruit.scale(0.06f, 0.14f);

// récupère l'échelle absolue de l'entité
    sf::Vector2f scale = le_fruit.getScale(); // = (2, 0.8)
    le_fruit.setPosition(sf::Vector2f(x, y));
    window.draw(le_fruit);
    if ((sf::Mouse::getPosition(window).x >= le_fruit.getGlobalBounds().left
        || sf::Mouse::getPosition(window).x <= le_fruit.getGlobalBounds().left + le_fruit.getGlobalBounds().width)
        && (sf::Mouse::getPosition(window).y >= le_fruit.getGlobalBounds().top
        || sf::Mouse::getPosition(window).y <= le_fruit.getGlobalBounds().top + le_fruit.getGlobalBounds().height) ){

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            texture.loadFromFile("../../ressources/banane.png");
        }


    }


    //multi affichage de sprite

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




