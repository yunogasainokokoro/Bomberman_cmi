    #include "joueur.h"
    #include "map.h"
    #include <SFML/Graphics.hpp>
    #include <SFML/Window.hpp>
    #include <SFML/Graphics/Text.hpp>
    #include <string>
    #include <sstream>
    #include <iostream>
    #include <SFML/System/Time.hpp>


    /** constructeur **/
    joueur::joueur(float posx,float posy,int num) :enVie(true),nbBomb(1),score(0),config(num),speed(0.2)
    {
    positionx=posx;
    positiony=posy;

    }


    /** methode **/
    bool joueur::estVivant() const
    {

    return enVie;
    }

    void joueur::seDeplacer(sf::Time elapsedtime)/** NE PLUS TOUCHER A CE CODE >.< **/
    {

        float elapsedTime=elapsedtime.asMilliseconds();

        /** JOUEUR 1 **/
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && config==1) // Appui sur une touche du clavier
            {

        positiony-= speed*elapsedTime;


            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S) && config==1)
            {
        positiony+=speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && config==1)
            {
        positionx-= speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D) && config==1)
            {
        positionx+=speed*elapsedTime;

            }
       /** JOUEUR 2 **/
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && config==2) // Appui sur une touche du clavier
            {

        positiony-= speed*elapsedTime;


            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && config ==2)
            {
       positiony+=speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && config==2)
            {
        positionx-= speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && config==2)
            {
        positionx+=speed*elapsedTime;

            }
         /** JOUEUR3 **/
         if(sf::Keyboard::isKeyPressed(sf::Keyboard::I) && config==3) // Appui sur une touche du clavier
            {

       positiony-= speed*elapsedTime;


            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::K) && config ==3)
            {
        positiony+=speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::J) && config==3)
            {
        positionx-= speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::L) && config==3)
            {
        positionx+=speed*elapsedTime;


            }
         /** JOUEUR4 **/
         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8) && config==4) // Appui sur une touche du clavier
            {

       positiony-= speed*elapsedTime;


            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5) && config ==4)
            {
        positiony+=speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4) && config==4)
            {
       positionx-= speed*elapsedTime;

            }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6) && config==4)
            {
        positionx+=speed*elapsedTime;

            }

    }

    void joueur::poserBomb()
    {
    if(nbBomb>0)
    {
    nbBomb--;

    }

    }


    int joueur::getBomb() const
    {



    return nbBomb;
    }

    sf::Vector2f joueur::getposition() const
    {
    sf::Vector2f position(positionx,positiony);
    return position;

    }

    void joueur::change_vie()
    {
    enVie=false;


    }

    int joueur::getScore() const
    {

    return score;
    }

    void joueur::change_score(sf::RenderWindow &window)
    {
    sf::Text scor1;

    std::ostringstream ss;
    ss << "J";
    ss << config;
    ss << ":";
    ss << score;

    scor1.setString(ss.str());
    scor1.setCharacterSize(30);
    sf::Font font;
    if(!font.loadFromFile("font1.otf"))
    {std::cout <<std::endl <<"erreur de chargement";}
    scor1.setFont(font);
    scor1.setColor(sf::Color(255,255,255));
    switch(config)
    {
    case 1:
    scor1.setPosition(sf::Vector2f(20,850));
    break;
    case 2:
    scor1.setPosition(sf::Vector2f(210,850));
    break;
    case 3:
    scor1.setPosition(sf::Vector2f(410,850));
    break;
    case 4:
    scor1.setPosition(sf::Vector2f(610,850));
    break;
    }
    window.draw(scor1);

    }

void joueur::ajout_score()
{
score++;

}


