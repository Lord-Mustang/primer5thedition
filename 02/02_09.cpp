/* (a) int input_value may be undefined if it is declared inside a function.
 * Declare and initialize it before using in inputstream.
 * 
 * (b) Compiler error, since list initialization does not allow an initialization
 * if it leads to a loss of information. Initializing a int from a double will lead
 * to truncation.
 * 
 * (c) Double initialization, needs to be separated by a comma.
 * 
 * (d) Not illegal. Double will be truncated.
*/