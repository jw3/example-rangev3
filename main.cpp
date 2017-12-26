#include <iostream>

#include <range/v3/all.hpp>

// A range that iterates over all the characters in a
// null-terminated string.
class c_string_range
        : public ranges::view_facade<c_string_range>
{
    friend ranges::range_access;
    char const * sz_ = "";
    char const & read() const { return *sz_; }
    bool equal(ranges::default_sentinel) const { return *sz_ == '\0'; }
    void next() { ++sz_; }
public:
    c_string_range() = default;
    explicit c_string_range(char const *sz) : sz_(sz)
    {
        assert(sz != nullptr);
    }
};

int main() {
    c_string_range r("hello world");
    // Iterate over all the characters and print them out
    ranges::for_each(r, [](char ch){
        std::cout << ch << ' ';
    });
    // prints: h e l l o   w o r l d

    return 0;
}