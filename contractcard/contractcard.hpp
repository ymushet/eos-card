#include <eoslib/eos.hpp>
#include <eoslib/db.hpp>
#include <eoslib/print.hpp>

struct PACKED(record) {
   uint64_t wins;
};