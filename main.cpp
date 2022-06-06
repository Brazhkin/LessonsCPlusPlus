#include <iostream>
#include <vector>

#define L 100

class Data {
private:
    std::vector<int> v;
    size_t size{0};
public:
    explicit Data(size_t DataSize, std::vector<int> VForData);

    void GetData();
};

Data::Data(size_t DataSize, std::vector<int> VForData) {

    v.reserve(DataSize);

    v.swap(VForData);
}

void Data::GetData() { for (auto & i : v) { std::cout << i; } }

class Text : public Data {
private:
    size_t TextSize;
public:
     explicit Text(size_t DataSize, std::vector<int> VForData, size_t SizeForText)
    : Data(DataSize, std::move(VForData)), TextSize(SizeForText) {}
};

class P : public Text {
private:
    char *Name;
public:
    explicit P(size_t DataSize, std::vector<int> VForData, size_t SizeForText, char *name)
            : Text(DataSize, std::move(VForData),SizeForText), Name(name) {}
};

class S : public P {
private:
    bool X;
public:
    explicit S(size_t DataSize, std::vector<int> VForData, size_t SizeForText, char *name, bool XForS)
            : P(DataSize, std::move(VForData),SizeForText, name), X(XForS)  {}
};

int main (int argc, char *argv[]) {

    std::vector<int> VForData, pv2;

    VForData.reserve(L);
    pv2.reserve(L);

    for (int i = 0; i < L; ++i) { VForData.push_back(i); }

    Data D{VForData.size(), VForData};

    return 0;
}