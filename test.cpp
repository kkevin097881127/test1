#include <iostream>
#include <cstring>

void vulnerableFunction() {
    char buffer[50];
    std::cout << "請輸入您的名稱：";
    // 沒有檢查輸入長度，可能導致緩衝區溢出！
    std::cin >> buffer;

    std::cout << "歡迎，" << buffer << "！" << std::endl;
}

int main() {
    vulnerableFunction();
    return 0;
}
