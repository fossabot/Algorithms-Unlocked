#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <regex>
#include <cstdio>
#include <string.h>
#include <activation.h>
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(), (c).end()
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define tr(container, it) for(decltype(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;
static const regex reHeader("  ");
uint32_t rotl(uint32_t value, unsigned int count)
{
    const uint32_t mask = (CHAR_BIT*sizeof(value) - 1);
    count &= mask;
    return (value << count) | (value >> ((-count)&mask));
}
uint32_t hash_char(uint32_t hash, char c)
{
    hash = rotl(hash, c);
    hash ^= c;
    return hash;
}
struct Hashstring{
    void operator() (const string& s){
        hash = accumulate(s.begin(), s.end(), hash, hash_char);
    }
    uint32_t hash = 0;
};
template<typename Cont>
uint32_t hash_all_strings(const Cont& v) {
    const auto hasher = for_each(v.begin(), v.end(), Hashstring())
}
void test_for_each_hash(){
    vector<string> v{"one","two","three","four","five","six"};
    uint32_t hash = hash_all_strings(v);
    cout << "Hash : " << hash << dec << endl;
}
int hashfunc()
{
    return 0;
}