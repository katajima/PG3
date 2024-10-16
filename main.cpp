#include <stdio.h>
#include <Windows.h>
#include <cstdint>
#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>  // 時間計測用

std::mutex mtx_; // 排他制御用ミューテックス
uint32_t count_;

void add_count()
{
    // count_を加算する前にミューテックスを取得する
    std::lock_guard<std::mutex> lock(mtx_);
   /* if (count_ % 1000 == 0) {
        printf("%d回目\n", count_);
    }*/
    ++count_;
}

void ThreadA()
{
    for (int i = 0; i < 100000; ++i) {
        add_count();
    }
}

void ThreadB()
{
    for (int i = 0; i < 100000; ++i) {
        add_count();
    }
}

int main()
{
    count_ = 0;

    // 実行開始時刻を取得
    auto start = std::chrono::high_resolution_clock::now();

    std::thread th_a(ThreadA);
    std::thread th_b(ThreadB);

    th_a.join();
    th_b.join();

    // 実行終了時刻を取得
    auto end = std::chrono::high_resolution_clock::now();

    // 経過時間をナノ秒からミリ秒に変換
    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "count_ : " << count_ << std::endl;
    std::cout << "Execution time: " << elapsed.count() << " ms" << std::endl;

    return 0;
}




