/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 23 09:47:13 2002
 */
/* Compiler settings for C:\Program Files\Microsoft Visual Studio\MyProjects\MagickCOM\MagickCOM.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IImage = {0x5C6D6667,0x0614,0x4E85,{0x80,0x1D,0x2E,0xD9,0x3C,0xEF,0x2C,0x19}};


const IID IID_IImageControl = {0x5B5A7365,0x75BA,0x4F88,{0xAB,0xBF,0x64,0x69,0x5D,0xAA,0xA2,0xB0}};


const IID IID_IGeometry = {0x2DB6FBA7,0x2E7E,0x4F2D,{0xAC,0x2E,0x29,0xAF,0xB4,0x2E,0x41,0x9F}};


const IID IID_IColor = {0x983302C5,0xA008,0x494A,{0xA1,0x6A,0xD5,0x96,0xEC,0x1B,0x38,0xD1}};


const IID IID_IImageCollection = {0xFB9C5C71,0xA094,0x4CCA,{0x9C,0xBE,0x47,0x05,0x24,0xDE,0x38,0x00}};


const IID LIBID_MAGICKCOMLib = {0x268B14B7,0x3123,0x4ACC,{0xAC,0xF4,0x55,0xD2,0xB9,0xE6,0x90,0x65}};


const CLSID CLSID_Image = {0x1FA85FFC,0xC245,0x4C1E,{0xB1,0x21,0x00,0xCA,0x5E,0xAB,0x94,0xF4}};


const CLSID CLSID_ImageControl = {0x6CC4DF86,0x9661,0x4B00,{0xA6,0xA9,0x32,0xC7,0x78,0x7A,0x8D,0x07}};


const CLSID CLSID_Geometry = {0xF21700BE,0x8E79,0x40F4,{0xB8,0xC5,0x30,0x38,0xA9,0xAA,0x84,0x30}};


const CLSID CLSID_Color = {0xF4D71BC1,0x2606,0x4EB6,{0x9E,0x67,0x81,0x4D,0x12,0xD9,0x7C,0xD7}};


const CLSID CLSID_ImageCollection = {0xC110309D,0xB468,0x47DF,{0xAA,0x2F,0x41,0x58,0x25,0xF8,0x7F,0xC8}};


#ifdef __cplusplus
}
#endif

