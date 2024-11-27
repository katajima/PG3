#include <stdio.h>
#include <iostream>
#include <Windows.h>


#include <iostream>
#include <list>
#include <array>

#include <iostream>
#include <list>
#include <cstring> // strcmpのために必要

struct Station {
    const char* name;  // 英語表記の駅名
    int year_opened;   // 開業年
};

void displayStations(const std::list<Station>& stations, int year) {
    std::cout << "Stations in " << year << ":\n";
    for (const auto& station : stations) {
        if (station.year_opened <= year) {
            std::cout << " - " << station.name << "\n";
        }
    }
    std::cout << std::endl;
}

int main() {


    // 山手線の英語表記の駅一覧
    // 開業わからんから1970で統一
    Station initialStations[] = {
        {"Tokyo", 1970}, {"Kanda", 1970}, {"Akihabara", 1970}, {"Okachimachi", 1970},
        {"Ueno", 1970}, {"Uguisudani", 1970}, {"Nippori", 1970}, {"Tabata", 1970},
        {"Komagome", 1970}, {"Sugamo", 1970}, {"Otsuka", 1970}, {"Ikebukuro", 1970},
        {"Mejiro", 1970}, {"Takadanobaba", 1910}, {"Shin-Okubo", 1970},
        {"Shinjuku", 1970}, {"Yoyogi", 1970}, {"Harajuku", 1970},
        {"Shibuya", 1970}, {"Ebisu", 1970}, {"Meguro", 1970}, {"Gotanda", 1970},
        {"Osaki", 1970}, {"Shinagawa", 1970}, {"Tamachi", 1970}, {"Hamamatsucho", 1970},
        {"Shimbashi", 1970}, {"Yurakucho", 1970}
    };




    // std::list に駅データを格納
    std::list<Station> stations(std::begin(initialStations), std::end(initialStations));
            
    // 西日暮里駅の追加 (1971年)
    auto it = stations.begin();
    for (; it != stations.end(); ++it) {
        // 日暮里の次に入れる
        if (strcmp(it->name, "Nippori") == 0) {
            stations.insert(std::next(it), { "Nishi-Nippori", 1971 });
            break;
        }
    }

    // 高輪ゲートウェイ駅の追加 (2020年)
    for (it = stations.begin(); it != stations.end(); ++it) {
        //品川の次に入れる
        if (strcmp(it->name, "Shinagawa") == 0) {
            stations.insert(std::next(it), { "Takanawa Gateway", 2020 });
            break;
        }
    }


    // 各年の駅一覧を表示


    // 1970
    displayStations(stations, 1970);
    
    // 2019
    displayStations(stations, 2019);
    
    // 2022
    displayStations(stations, 2022);

    return 0;
}


