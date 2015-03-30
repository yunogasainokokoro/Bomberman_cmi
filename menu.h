#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics/Text.hpp>

class menu
{
public:
menu();



void afficher_menu(sf::RenderWindow &window);
void gerer_menu(sf::RenderWindow &window);


bool jeu() const;



private:
bool enjeu;



};
