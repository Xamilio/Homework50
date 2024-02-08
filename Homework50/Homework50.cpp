#include <iostream>
using namespace ::std;

template <typename T>
class Swapper {
public:
    static void Swap(T& a, T& b) {
        T temp = std::move(a);
        a = std::move(b);
        b = std::move(temp);
    }
};
int main()
{
    int x = 5;
    int y = 10;
    std::cout << "До Swap: x = " << x << " y = " << y << endl;

    Swapper<int>::Swap(x, y);

    std::cout << "После Swap: x = " << x << " y = " << y << endl;
}