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
#include <string.h>

char * hex2b64( char * hex );
void * hex2bits( char * hex );
char * bits2b64( void * bits );
char hexbyte2bits( char * hex );

/* Return a base64 string representing the same bits as the hexadecimal string hex. */
char * hex2b64( char * hex ){
	return bits2b64( hex2bits( hex ) );
}

/* Return a pointer to the raw bits decoded from the hexadecimal string hex. */
void * hex2bits( char * hex ){
	
	return NULL;
}

/* Return a base64 representation of the bit string point to by bits. */
char * bits2b64( void * bits ){
	return "not done yet";
}

/* Return the bit string represented by a hex byte, one or two hex characters. */
char hexbyte2bits( char * hex ){
	int hexlen = strlen( hex );
	if( hexlen != 1 && hexlen != 2 ){
		printf( "hexbyte2bits: give 1 or 2 hex characters\n" );
		return -1;
	}
	return 0;
}
