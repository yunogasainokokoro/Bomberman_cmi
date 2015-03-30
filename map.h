//classe carte
    #include <SFML/Graphics.hpp>
    #include <SFML/Window.hpp>
    #include <string>

    class carte
    {
    public: //methode
    carte();//constructeur

    void generer_map();
    void affichermap(sf::RenderWindow &window);
    //accesseur

    int getCase(int x, int y) const;//pour acceder a la structure de la map


    private : //attribut


    int map_case[13][15];
    sf::RenderTexture carte_0;

    std::string nom;

    };
