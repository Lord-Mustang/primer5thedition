/* int ival = 1.01 // Valid, but truncated
 * int &rval1 = 1.01 // Invalid. Reference cannot be bound to a literal
 * int &rval2 = ival; // Valid
 * int &rval3; // Invalid. A reference must be initialized
*/