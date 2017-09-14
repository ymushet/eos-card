#include "contractcard.hpp"

extern "C" {
   void init()  {
      eos::print( "Init DB!\n" );
   }

   void apply( uint64_t code, uint64_t action ) {
      if( code == N(contractcard) ) {
         if( action == N(insert) ) {
            record tmp;
            readMessage(&tmp, sizeof(tmp));
            store_i64( N(contractcard), N(record), &tmp, sizeof(tmp) );
         } else {
            assert(0, "unknown message");
         }
      }
   }
}
