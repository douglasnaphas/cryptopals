/* 
Convert hex to base64
The string:

49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d
Should produce:

SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t
So go ahead and make that happen. You'll need to use this code for the rest of the exercises.

Cryptopals Rule
Always operate on raw bytes, never on encoded strings. Only use hex and base64 for pretty-printing.
*/


#include <stdio.h>
#include "../hex2b64.h"

void usage();

int main( int argc, char ** argv ){
	if( argc < 2 ){
		usage();
		return 1;
	}

	char big = 255;
	printf( "big == (expect 255) %hhu\n", big );
	printf( "sizeof big == %lu\n", sizeof big );

	// Test hexbyte2bits.
	printf( "hexbyte2bits( \"c\" ) == (expect 12) %hhu\n", hexbyte2bits( "c" ) );

	// Test hex2bits.
//	printf( "hex2bits( \"c\" ) == (expect 12 ) %d\n", ( int ) * hex2bits( "c" ) );
	  

	// Test top-level functionality.
	printf( "%s\n", hex2b64( argv[ 1 ] ) ); // Expect SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t
	return 0;
}

void usage(){
	printf( "usage: hex2b64tests hex_string>\n" );
}
