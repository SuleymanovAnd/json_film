#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"


struct Film {
    std::string name;
    std::string country;
    int date;
    std::string studio;
    std::string author;
    std::string director;
    std::string producer;
    std::map <std::string, std::string> characters;

};


int main() {
    Film AvatarFilm;
    AvatarFilm.name = "Avatar: The Way of Water";
    AvatarFilm.country = "USA";
    AvatarFilm.date = 2022;
    AvatarFilm.studio = "20th Century Studios, Lightstorm Entertainment, TSG Entertainment";
    AvatarFilm.director = "James Cameron";
    AvatarFilm.producer = "James Cameron";

    AvatarFilm.characters ["Jake Sully"] = "Samuel Worthington";
    AvatarFilm.characters ["Neytiri"] = "Zoe Saldaña";
    AvatarFilm.characters["Kiri"] = "Sigourney Weaver";
    AvatarFilm.characters ["Colonel Miles Quaritch"] = "Stephen Lang";
    AvatarFilm.characters["Ronal"] = "Kate Winslet";
    AvatarFilm.characters ["Tonowari"] = "Cliff Curtis";

    nlohmann::json AvatarF;

    AvatarF["name"] = AvatarFilm.name;
    AvatarF["country"] = AvatarFilm.country;
    AvatarF["date"] = AvatarFilm.date;
    AvatarF["studio"] = AvatarFilm.studio;
    AvatarF["director"] = AvatarFilm.director;
    AvatarF["producer"] = AvatarFilm.producer;
    AvatarF["characters"] = AvatarFilm.characters;

    std::ofstream file ("Avatar_Film.json");
    file << AvatarF;
    file.close();

}
