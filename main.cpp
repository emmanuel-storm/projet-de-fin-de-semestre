#include <SFML/Graphics.hpp>
#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include "Fruits.h"


    int main() {

        const int WIDTH = 900;
        const int HEIGHT = 900;
        sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "tp fin de semestre");

        window.setVerticalSyncEnabled(true);
//    window.setFramerateLimit(120);
        Fruits cercle = Fruits(450, 800, 40, 450, 400, false);
        Fruits cercle2 = Fruits(400, 700, 60, 450, 400, false);

        while (window.isOpen()) {
            sf::Event event{};
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }
            window.clear(sf::Color(200, 90, 0));

            cercle.changeDeSensY();
            cercle2.changeDeSensX();
            cercle.bougerY();
            cercle2.bougerX();
            cercle.afficher(window);
            cercle2.afficher(window);

            window.display();

        }

        std::cout << "J'ai quitté la fenêtre proprement !" << std::endl;
    }



