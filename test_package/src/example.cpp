#include "rule_engine.h"
#include <vector>
#include <string>

int main() {
    rule_engine();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    rule_engine_print_vector(vec);
}
