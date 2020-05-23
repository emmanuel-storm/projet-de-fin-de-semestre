//
// Created by lattier.innocent on 11/05/2020.
//

#include <iostream>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#ifndef PROJET_DE_FIN_DE_SEMESTRE_FRUITS_H
#define PROJET_DE_FIN_DE_SEMESTRE_FRUITS_H



class Fruits : sf::Drawable {
private:
    bool machin = false;
    int direction;
    float x;
    float y;
    float taille;
    float positionInversementY;
    float positionInversementX;
public:
    Fruits(float _x, float _y, float _taille, float _positionInversementY, float _positionInversementX, bool _machin) : x(_x), y(_y), positionInversementY(_positionInversementY), positionInversementX(_positionInversementX), taille(_taille), machin(_machin), direction(0){}
    void bougerY();
    void bougerX();
    void afficher(sf::RenderWindow &window);
    void changeDeSensY();
    void changeDeSensX();

protected:
        void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //PROJET_DE_FIN_DE_SEMESTRE_FRUITS_H
