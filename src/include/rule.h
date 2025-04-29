#ifndef RULE_H
#define RULE_H

#include <list>
#include "condition.h"
#include "uri.h"
#include "action.h"

class Rule {
public:
    // Constructor accepting a callable that returns a boolean
    explicit Rule();;

    // Callable operator to evaluate the rule
    bool operator()() const;
private:

    std::list<URI> triggers_;
    std::list<Condition> conditions_;
    std::list<Action> actions_;
};

#endif // RULE_H