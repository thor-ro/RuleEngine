#ifndef CONDITION_H
#define CONDITION_H

#include <functional>
#include <string>
#include <string_view>
#include <variant>

enum class Operator: uint8_t {
    EQUAL,
    NOT_EQUAL,
    GREATER,
    LESS,
    GREATER_EQUAL,
    LESS_EQUAL,
    AND,
    OR
};
enum class Operand: uint8_t {
    STRING,
    INTEGER,
    FLOAT
};
enum class ConditionType: uint8_t {
    SIMPLE,
    COMPLEX
};

class Condition {
public:
    // Constructor accepting a callable that returns a boolean
    explicit Condition(std::string_view condition);

    // Callable operator to evaluate the condition
    bool operator()() const;

private:
    Operator op_;
    std::variant<std::string, int, float> lhs_;
    std::variant<std::string, int, float> rhs_;
};

#endif // CONDITION_H