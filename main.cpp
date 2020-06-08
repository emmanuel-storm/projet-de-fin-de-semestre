#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Fruits.h"


    int main() {

        const int WIDTH = 1170;
        const int HEIGHT = 1050;

        sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "tp fin de semestre");

        window.setVerticalSyncEnabled(true);

//    window.setFramerateLimit(120);
        //srand((unsigned int) time(0));
        //int i = 0;
        //for(i=0; i < 1; i++){
        //    int nombre_aleatoire = rand()%WIDTH +1;
        //    std::cout << "valeur random " << nombre_aleatoire << std::endl;
        //}
        //int j = 0;
        //for (int j = 0; j < 1; ++j) {
        //    int aleatoire = rand()%HEIGHT +1;
        //    std::cout << "valeur random " << aleatoire << std::endl;
        //}

        Fruits le_fruit = Fruits(700, 900, 40, 450, 400, false);

        sf::Texture texture_background;
        if (!texture_background.loadFromFile("../../ressources/background.jpg"))
        {
            // erreur...
        }


        sf::Sprite background;
        background.setTexture(texture_background);
        



        while (window.isOpen()) {
            sf::Event event{};
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }

                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                    std::cout << "clique gauche mgl" << std::endl;
                }
                if (sf::Mouse::isButtonPressed(sf::Mouse::Right)){
                    std::cout << "clique droit zbi" << std::endl;
                }
            }
            window.clear(sf::Color(200, 90, 0));
            window.draw(background);

            le_fruit.changeDeSensY();
            le_fruit.bougerY();

            le_fruit.afficher(window, "../../ressources/pomme.png");

            window.display();

        }

        std::cout << "J'ai quitté la fenêtre proprement !" << std::endl;
    }



