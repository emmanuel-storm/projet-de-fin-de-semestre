#include <SFML/Graphics.hpp>
#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include "Fonctions.h"


    int main() {

        const int WIDTH = 900;
        const int HEIGHT = 900;
        int i = 900;
        int j = 400;
        sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "tp fin de semestre");

        window.setVerticalSyncEnabled(true);
//    window.setFramerateLimit(120);

        sf::CircleShape cercle(50.f);
        sf::CircleShape triangle(80, 3);
        sf::RectangleShape rectangle;


        cercle.setFillColor(sf::Color(100, 250, 50));
        triangle.setFillColor(sf::Color(100, 250, 50));

        triangle.setPosition(700, 400);
        rectangle.setSize(sf::Vector2f(200, 100));
        rectangle.setFillColor(sf::Color(100, 250, 50));
        rectangle.setPosition(100, 200);


        while (window.isOpen()) {
            sf::Event event{};
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }
            window.clear(sf::Color(200, 90, 0));

            cercle.setPosition(j, i);
            i-=5;

            window.draw(cercle);
            window.draw(rectangle);
            window.draw(triangle);

            window.display();

        }

        std::cout << "J'ai quitté la fenêtre proprement !" << std::endl;
    }



