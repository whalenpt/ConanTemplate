#include <Hello/first.h>
#include <Hello/second.h>
#include <vector>
#include <string>

int main() {
    first();
    second();
    
    std::vector<std::string> vec;
    vec.push_back("test_package");

    first_print_vector(vec);
}
