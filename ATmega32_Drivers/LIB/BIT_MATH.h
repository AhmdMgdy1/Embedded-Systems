/*
 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIT_MATH.h >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *      Author: AHMED MAGDY BADAWY
 *      Layer : LIB
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/* Macro: SET_BIT
 * Description: Sets a specific bit in a register.
 * Parameters:
 *   - REG: Register to set the bit.
 *   - PIN: Bit position to set.
 * Algorithm: Use bitwise OR "|" to set the specified bit in the register.
 */
#define SET_BIT( REG , PIN )    ( REG |= ( 1 << PIN ))
 
 /* Macro: CLR_BIT
  * Description: Clears a specific bit in a register.
  * Parameters:
  *   - REG: Register to set the bit.
  *   - PIN: Bit position to set.
  * Algorithm: Use bitwise AND "&" with the complement "~" of the specified bit position to clear the bit.
  */
#define CLR_BIT( REG , PIN )    ( REG &= ~( 1 << PIN ))

  /* Macro: TOG_BIT
   * Description: Toggle a specific bit in a register.
   * Parameters:
   *   - REG: Register to set the bit.
   *   - PIN: Bit position to set.
   * Algorithm: Use bitwise XOR "^" to set the specified bit in the register.
   */
#define TOG_BIT( REG , PIN )    ( REG ^= (1 << PIN ))

   /* Macro: GET_BIT
    * Description: Reads a specific bit in a register.
    * Parameters:
    *   - REG: Register to set the bit.
    *   - PIN: Bit position to set.
    * Return: The Value of the specific bit (LOGIC_HIGH OR LOGIC_LOW)
    * Algorithm: Use bitwise AND followed by right shift ">>" to extract the specific bit 
    */
#define GET_BIT(REG , PIN )     (( REG & ( 1 << PIN ))>>PIN )

    /* Macro: IS_BIT_SET
     * Description: Check the bit is setted and returned 1 if true
     * Parameters:
     *   - REG: Register to set the bit.
     *   - PIN: Bit position to set.
     * Algorithm: like GET_BIT
     */
#define IS_BIT_SET(REG , PIN)   (REG & (1<<PIN))>>PIN

     /* Macro: IS_BIT_CLR
      * Description: Checks the bit is Cleared and returned 1 if true
      * Parameters:
      *   - REG: Register to set the bit.
      *   - PIN: Bit position to set.
      * Algorithm: like GET_BIT
      */
#define IS_BIT_CLR(REG , PIN)   !((REG & (1<<PIN))>>PIN)

      /* Macro: ROR_BIT
       * Description: Rotate the register to the right by a specific number of bits
       * Parameters:
       *   - REG: Register to set the bit.
       *   - PIN: Bit position to set.
       * Algorithm: Uses shift right with the nubmer of bits ORed with shift left with difference between 
                    Total number of Register bits and the bits wanted to rotate
       */
#define ROR(REG , NUM)          REG = (REG<<(REGISTER_SIZE-NUM)) | (REG >> (NUM))

       /* Macro: ROL_BIT
        * Description: Rotate the register to the left by a specific number of bits
        * Parameters:
        *   - REG: Register to set the bit.
        *   - PIN: Bit position to set.
        * Algorithm: Uses shift left with the nubmer of bits ORed with shift right with difference between 
                     Total number of Register bits and the bits wanted to rotate
        */
#define ROL(REG , NUM)          REG = (REG>>(REGISTER_SIZE-NUM)) | (REG << (NUM))


#endif /* BIT_MATH_H_ */
