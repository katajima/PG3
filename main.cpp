#include <iostream>
#include <chrono>
#include <string>

static void copyString(const std::string& str) {
    std::string b = str;
}

static void moveString(std::string&& str) {
    std::string c = std::move(str);
}

int main() {
    std::string a(100000, 'a');  // 100,000文字の'a'で初期化

    std::cout << "100, 000文字を移動とコピーで比較しました。" << std::endl;

    // コピーの時間計測
    std::chrono::high_resolution_clock::time_point start_copy = std::chrono::high_resolution_clock::now();
    copyString(a);
    std::chrono::high_resolution_clock::time_point end_copy = std::chrono::high_resolution_clock::now();
    std::chrono::microseconds copy_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy);

    // 移動の時間計測
    std::string a_moved(100000, 'a');  // 再度初期化
    std::chrono::high_resolution_clock::time_point start_move = std::chrono::high_resolution_clock::now();
    moveString(std::move(a_moved));
    std::chrono::high_resolution_clock::time_point end_move = std::chrono::high_resolution_clock::now();
    std::chrono::microseconds move_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move);
   
    std::cout << "コピー: " << copy_duration.count() << "μs" << std::endl;
    std::cout << "移動: " << move_duration.count() << "μs" << std::endl;

    return 0;
}
