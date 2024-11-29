#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>



int main() {


    // ファイル名(PG3_2024_03_02の中身のかっこの部分が邪魔だから消して.txt)
    const std::string fileName = "PG3_2024_03_02.txt";
    // ファイルを開く
    std::ifstream input(fileName);
    // メールアドレスを格納するvector
    std::vector<std::string> emVector;
    std::string em;



    // ファイルからデータを読み込む
    while (std::getline(input, em, ',')) {
        emVector.push_back(em);
    }
    // くろーず
    input.close();

    // 学籍番号順にソート
    std::sort(emVector.begin(), emVector.end(), [](const std::string& a, const std::string& b) {return a < b;});


    // 結果を表示
    std::cout << "学籍番号順リスト:\n";


    for (const auto& e : emVector) {
        std::cout << e << std::endl;
    }

    return 0;
}
