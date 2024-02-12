/*
 * Author       :   Mahmoud Mowafey
 * File         :   platform_types.h
 * Date         :   25-10-2023 
 * Description  :
*/


/************************ CPU_Architecture's type ***********************************************************************/
/*According to the register width of the CPU used, CPU_TYPE shall be assigned to one of the symbols 
  CPU_TYPE_8, CPU_TYPE_16, CPU_TYPE_32 or CPU_TYPE_64  */

#define CPU_TYPE  				    CPU_TYPE_32

/**************** For each platform the appropriate bit order on register level shall be indicated *******************/

#define CPU_BIT_ORDER 

#define BIG_ENDIAN

#ifdef BIG_ENDIAN

  #define CPU_BIT_ORDER                 MSB_FIRST
  #define CPU_BYTE_ORDER                HIGH_BYTE_FIRST

#else  

  #define CPU_BIT_ORDER                 LSB_FIRST
  #define CPU_BYTE_ORDER                LOW_BYTE_FIRST

#endif


/************************ Optimized integer data types ****************************************************************/
#define uint8_least           
#define MAXIMUM_LOOP_COUNT              124	
#define MAXIMUM_NUMBER_OF_STATE         17

/*********************** Boolean data type ****************************************************************************/
/*
#define FALSE                           0
#define TRUE                            1

typedef unsigned int short              boolean;
*/

typedef enum Eboolean
{
  FALSE = 0,
  TRUE
}boolean;

/************************************************ Unsigned Type definitions ***********************************************/
/*This standard AUTOSAR type shall be of 8 bit unsigned*/
#define uint8                            unsigned char

/*This standard AUTOSAR type shall be of 16 bit unsigned.*/
#define uint16                           unsigned short

/*This standard AUTOSAR type shall be of 32 bit unsigned.*/
#define uint32                           unsigned int

/*This standard AUTOSAR type shall be of 64 bit unsigned.*/
#define uint64                           unsigned long
/************************************************************************************************************************/


/************************************************ Signed Type definitions ***********************************************/
/*This standard AUTOSAR type shall be of 8 bit signed*/
#define sint8                            char

/*This standard AUTOSAR type shall be of 16 bit signed.*/
#define sint16                           short

/*This standard AUTOSAR type shall be of 32 bit signed.*/
#define sint32                           int

/*This standard AUTOSAR type shall be of 64 bit signed.*/
#define sint64                           long
/***********************************************************************************************************************/


typedef  uint8                          uint8_least;   



/************************************************ Symbol definitions *************************************************************/
/************************ CPU_Architecture's type ******************************************/
enum 
{
  CPU_TYPE_8  ,
  CPU_TYPE_16 ,
  CPU_TYPE_32 ,
  CPU_TYPE_64
}CPU_TYPE;

/**************** For each platform the appropriate bit order on register level shall be indicated *******************/
enum 
{
  MSB_FIRST  ,
  LSB_FIRST 
}CPU_BIT_ORDER;                      

                      /*CPU_BYTE_ORDER*/
enum 
{
  HIGH_BYTE_FIRST  ,
  LOW_BYTE_FIRST 
}CPU_BYTE_ORDER;

                      /*TRUE_FALSE*/
enum 
{
  FALSE = 0x00,
  TRUE  = 0x01
}TRUE_FALSE;

/*******************************************************************************************************************/


                      