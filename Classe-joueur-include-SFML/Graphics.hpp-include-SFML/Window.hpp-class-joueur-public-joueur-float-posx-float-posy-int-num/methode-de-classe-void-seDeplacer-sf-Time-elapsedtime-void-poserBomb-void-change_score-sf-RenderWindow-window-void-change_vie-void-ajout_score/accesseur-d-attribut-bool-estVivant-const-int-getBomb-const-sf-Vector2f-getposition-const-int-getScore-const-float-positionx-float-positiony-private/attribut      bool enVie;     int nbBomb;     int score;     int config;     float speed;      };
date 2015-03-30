    //Classe joueur
    #include <SFML/Graphics.hpp>
    #include <SFML/Window.hpp>

    class joueur
    {

    public :


    joueur(float posx,float posy,int num);
    //methode de classe

    void seDeplacer(sf::Time elapsedtime);

    void poserBomb();

    void change_score(sf::RenderWindow &window);

    void change_vie();

    void ajout_score();

    //accesseur d'attribut
    bool estVivant() const;
    int getBomb() const;
    sf::Vector2f getposition() const;
    int getScore() const;



    float positionx;
    float positiony;


    private :
    //attribut

    bool enVie;
    int nbBomb;
    int score;
    int config;
    float speed;

    };
