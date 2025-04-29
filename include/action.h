#ifndef ACTION_H
#define ACTION_H

class Action {
    public:
        explicit Action();

        void operator()() const;

    private:
};

#endif // ACTION_H