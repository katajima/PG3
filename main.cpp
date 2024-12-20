#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready1 = false;
bool ready2 = false;

void thread1() {
    std::unique_lock<std::mutex> lock(mtx);
    printf("thread 1\n");
    ready1 = true;
    cv.notify_all();
}

void thread2() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready1; });
    printf("thread 2\n");
    ready2 = true;
    cv.notify_all();
}

void thread3() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready2; });
    printf("thread 3\n");

}

int main() {
    std::thread th1(thread1);
    std::thread th2(thread2);
    std::thread th3(thread3);

    th1.join();
    th2.join();
    th3.join();

    return 0;
}
