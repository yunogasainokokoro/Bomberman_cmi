#include "map.h"
//#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <fstream>
//#include <limits>
#include <iostream>
using namespace std;

carte::carte(): nom("desolation")
{
std::ifstream fichier("desolation.WTF", ios::in );  //déclaration du flux et ouverture du fichier

        if(fichier)  // si l'ouverture a réussi
        {
            // instructions
            char content_case;
        fichier.seekg(0, ios::beg);//on revient au debut
            for(int i=0;i<13;i++)
            {
                for(int j=0;j<15;j++)
                {
                fichier.get(content_case);//on recupere le caractere numerique dans le fichier

                map_case[i][j]=content_case -48;//on soustrait 48 pour le transformer en nombre
                cout << map_case[i][j];//test de sortie

                }


            }

            // on referme le fichier
                fichier.close();
        }
        else  // sinon
                cerr << "Erreur à l'ouverture !" << endl;

carte_0.create(800,800);
}

void carte::generer_map()
{
sf::Texture texture;

if (!texture.loadFromFile("TILESET.png"))//on charge le tileset
    {
        std::cerr << "Echec lors du chargement de tileset.png" << std::endl;
    }

sf::Sprite sprite;
sprite.setTexture(texture);
for(int i=0;i<13;i++)
    {
        for(int j=0;j<15;j++)
        {
            switch(map_case[i][j])//on associe chaque case au sprite correspondant dans le fichier
            {
            case 0:
                sprite.setTextureRect(sf::IntRect(  18,  102,  61.53, 53.33 ));
            break;
            case 1:
                sprite.setTextureRect(sf::IntRect(  10,  10,  61.53, 53.33));
            break;
            case 2:
                sprite.setTextureRect(sf::IntRect(  10,  10,  61.53, 53.33 ));
            break;
            case 3:
                sprite.setTextureRect(sf::IntRect(  10,  10,  61.53, 53.33 ));
            break;
            case 4:
                sprite.setTextureRect(sf::IntRect(  10,  10,  61.53, 53.33 ));
            break;
            case 5:
                sprite.setTextureRect(sf::IntRect(  10,  10,  61.53, 53.33 ));
            break;
            }
        sprite.setPosition(sf::Vector2f((800/13)*(i),((800/15)*(j))));
        carte_0.draw(sprite);

        }
    }
carte_0.display();

}

void carte::affichermap(sf::RenderWindow &window)
{
sf::Sprite sprite3(carte_0.getTexture());
window.draw(sprite3);
}


int carte::getCase(int x, int y) const
{


return map_case[x][y];
}

