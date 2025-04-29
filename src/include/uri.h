#ifndef URI_H
#define URI_H

#include <string>
#include <string_view>

class URI {
private:
    std::string uri_; // Stores the URI as a string
public:
    // Constructor accepting a string_view for the URI
    explicit URI(std::string_view uri) : uri_(uri) {}

    // Method to get the URI as a string
    std::string str() const {
        return uri_;
    }

    // Method to get the URI as a string_view
    std::string_view view() const {
        return uri_;
    }

    bool is_absolute() const {
        return URI::is_absolute(uri_);
    }

    static bool is_absolute(std::string_view uri) {
        return uri.length() > 0 && uri[0] == '/';
    }

    std::string_view operator[] (size_t index) const {
        return uri_.substr(index);
    }
};

#endif // URI_H