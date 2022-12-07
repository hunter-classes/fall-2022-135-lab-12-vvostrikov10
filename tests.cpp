#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("<makeVector tests>"){
    std::vector<int> a = makeVector(5);
    CHECK(a.size() == 5);
    for (int i = 0; i < a.size(); i++){
        CHECK(a.at(i) == i);
    }
    std::vector<int> b = makeVector(0);
    CHECK(b.size() == 0);
}

TEST_CASE("<goodVibes tests>"){
    std::vector<int> a{1, -2, -3, 4, -5};
    std::vector<int> b = goodVibes(a);
    CHECK(b.size() == 5);
    CHECK(b.at(0) == 1);
    CHECK(b.at(1) == 2);
    CHECK(b.at(2) == 3);
    CHECK(b.at(3) == 4);
    CHECK(b.at(4) == 5);
}

TEST_CASE("<gogeta tests>"){
    std::vector<int> a{1, -2, -3, 4, -5};
    std::vector<int> b{6, -7};
    gogeta(a, b);
    CHECK(a.size() == 7);
    CHECK(b.size() == 0);
    CHECK(a.at(0) == 1);
    CHECK(a.at(1) == -2);
    CHECK(a.at(2) == -3);
    CHECK(a.at(3) == 4);
    CHECK(a.at(4) == -5);
    CHECK(a.at(5) == 6);
    CHECK(a.at(6) == -7);
    std::vector<int> c;
    gogeta(a, c);
    CHECK(a.size() == 7);
    CHECK(c.size() == 0);
    gogeta(c,a);
    CHECK(c.size() == 7);
    CHECK(a.size() == 0);
}

TEST_CASE("<sumPairWise tests>"){
    std::vector<int> a{1, 2, 3, 4, 5};
    std::vector<int> b{2, -3, 7, 1};
    std::vector<int> c = sumPairWise(a, b);
    std::vector<int> d = sumPairWise(b, a);
    CHECK(c.at(0) == 3);
    CHECK(c.at(1) == -1);
    CHECK(c.at(2) == 10);
    CHECK(c.at(3) == 5);
    CHECK(c.at(4) == 5);
    CHECK(d.at(0) == 3);
    CHECK(d.at(1) == -1);
    CHECK(d.at(2) == 10);
    CHECK(d.at(3) == 5);
    CHECK(d.at(4) == 5);
    std::vector<int> e;
    std::vector<int> f = sumPairWise(a, e);
    std::vector<int> g = sumPairWise(e, a);
    for (int i = 0; i < a.size(); i++){
        CHECK(f.at(i) == a.at(i));
        CHECK(g.at(i) == a.at(i));
    }
}



