/** 
 * 8x8 monochrome bitmap fonts for rendering
 * Author: Daniel Hepper <daniel@hepper.net>
 * 
 * License: Public Domain
 * 
 * Based on:
 * // Summary: font8x8.h
 * // 8x8 monochrome bitmap fonts for rendering
 * //
 * // Author:
 * //     Marcel Sondaar
 * //     International Business Machines (public domain VGA fonts)
 * //
 * // License:
 * //     Public Domain
 * 
 * Fetched from: http://dimensionalrift.homelinux.net/combuster/mos3/?p=viewsource&file=/modules/gfx/font8_8.asm
 **/

// Constant: font8x8_basic
// Contains an 8x8 font map for unicode points U+0000 - U+007F (basic latin)
char font8x8_basic[128][8] = {
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0000 (nul)
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0001
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0002
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0003
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0004
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0005
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0006
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0007
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0008
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0009
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+000A
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+000B
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+000C
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+000D
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+000E
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+000F
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0010
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0011
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0012
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0013
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0014
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0015
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0016
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0017
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0018
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0019
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+001A
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+001B
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+001C
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+001D
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+001E
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+001F
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0020 (space)
    {(char)0x18,(char)0x3C,(char)0x3C,(char)0x18,(char)0x18,(char)0x00,(char)0x18,(char)0x00},   // U+0021 (!)
    {(char)0x36,(char)0x36,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0022 (")
    {(char)0x36,(char)0x36,(char)0x7F,(char)0x36,(char)0x7F,(char)0x36,(char)0x36,(char)0x00},   // U+0023 (#)
    {(char)0x0C,(char)0x3E,(char)0x03,(char)0x1E,(char)0x30,(char)0x1F,(char)0x0C,(char)0x00},   // U+0024 ($)
    {(char)0x00,(char)0x63,(char)0x33,(char)0x18,(char)0x0C,(char)0x66,(char)0x63,(char)0x00},   // U+0025 (%)
    {(char)0x1C,(char)0x36,(char)0x1C,(char)0x6E,(char)0x3B,(char)0x33,(char)0x6E,(char)0x00},   // U+0026 (&)
    {(char)0x06,(char)0x06,(char)0x03,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0027 (')
    {(char)0x18,(char)0x0C,(char)0x06,(char)0x06,(char)0x06,(char)0x0C,(char)0x18,(char)0x00},   // U+0028 (()
    {(char)0x06,(char)0x0C,(char)0x18,(char)0x18,(char)0x18,(char)0x0C,(char)0x06,(char)0x00},   // U+0029 ())
    {(char)0x00,(char)0x66,(char)0x3C,(char)0xFF,(char)0x3C,(char)0x66,(char)0x00,(char)0x00},   // U+002A (*)
    {(char)0x00,(char)0x0C,(char)0x0C,(char)0x3F,(char)0x0C,(char)0x0C,(char)0x00,(char)0x00},   // U+002B (+)
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x0C,(char)0x0C,(char)0x06},   // U+002C (,)
    {(char)0x00,(char)0x00,(char)0x00,(char)0x3F,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+002D (-)
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x0C,(char)0x0C,(char)0x00},   // U+002E (.)
    {(char)0x60,(char)0x30,(char)0x18,(char)0x0C,(char)0x06,(char)0x03,(char)0x01,(char)0x00},   // U+002F (/)
    {(char)0x3E,(char)0x63,(char)0x73,(char)0x7B,(char)0x6F,(char)0x67,(char)0x3E,(char)0x00},   // U+0030 (0)
    {(char)0x0C,(char)0x0E,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x3F,(char)0x00},   // U+0031 (1)
    {(char)0x1E,(char)0x33,(char)0x30,(char)0x1C,(char)0x06,(char)0x33,(char)0x3F,(char)0x00},   // U+0032 (2)
    {(char)0x1E,(char)0x33,(char)0x30,(char)0x1C,(char)0x30,(char)0x33,(char)0x1E,(char)0x00},   // U+0033 (3)
    {(char)0x38,(char)0x3C,(char)0x36,(char)0x33,(char)0x7F,(char)0x30,(char)0x78,(char)0x00},   // U+0034 (4)
    {(char)0x3F,(char)0x03,(char)0x1F,(char)0x30,(char)0x30,(char)0x33,(char)0x1E,(char)0x00},   // U+0035 (5)
    {(char)0x1C,(char)0x06,(char)0x03,(char)0x1F,(char)0x33,(char)0x33,(char)0x1E,(char)0x00},   // U+0036 (6)
    {(char)0x3F,(char)0x33,(char)0x30,(char)0x18,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x00},   // U+0037 (7)
    {(char)0x1E,(char)0x33,(char)0x33,(char)0x1E,(char)0x33,(char)0x33,(char)0x1E,(char)0x00},   // U+0038 (8)
    {(char)0x1E,(char)0x33,(char)0x33,(char)0x3E,(char)0x30,(char)0x18,(char)0x0E,(char)0x00},   // U+0039 (9)
    {(char)0x00,(char)0x0C,(char)0x0C,(char)0x00,(char)0x00,(char)0x0C,(char)0x0C,(char)0x00},   // U+003A (:)
    {(char)0x00,(char)0x0C,(char)0x0C,(char)0x00,(char)0x00,(char)0x0C,(char)0x0C,(char)0x06},   // U+003B (//)
    {(char)0x18,(char)0x0C,(char)0x06,(char)0x03,(char)0x06,(char)0x0C,(char)0x18,(char)0x00},   // U+003C (<)
    {(char)0x00,(char)0x00,(char)0x3F,(char)0x00,(char)0x00,(char)0x3F,(char)0x00,(char)0x00},   // U+003D (=)
    {(char)0x06,(char)0x0C,(char)0x18,(char)0x30,(char)0x18,(char)0x0C,(char)0x06,(char)0x00},   // U+003E (>)
    {(char)0x1E,(char)0x33,(char)0x30,(char)0x18,(char)0x0C,(char)0x00,(char)0x0C,(char)0x00},   // U+003F (?)
    {(char)0x3E,(char)0x63,(char)0x7B,(char)0x7B,(char)0x7B,(char)0x03,(char)0x1E,(char)0x00},   // U+0040 (@)
    {(char)0x0C,(char)0x1E,(char)0x33,(char)0x33,(char)0x3F,(char)0x33,(char)0x33,(char)0x00},   // U+0041 (A)
    {(char)0x3F,(char)0x66,(char)0x66,(char)0x3E,(char)0x66,(char)0x66,(char)0x3F,(char)0x00},   // U+0042 (B)
    {(char)0x3C,(char)0x66,(char)0x03,(char)0x03,(char)0x03,(char)0x66,(char)0x3C,(char)0x00},   // U+0043 (C)
    {(char)0x1F,(char)0x36,(char)0x66,(char)0x66,(char)0x66,(char)0x36,(char)0x1F,(char)0x00},   // U+0044 (D)
    {(char)0x7F,(char)0x46,(char)0x16,(char)0x1E,(char)0x16,(char)0x46,(char)0x7F,(char)0x00},   // U+0045 (E)
    {(char)0x7F,(char)0x46,(char)0x16,(char)0x1E,(char)0x16,(char)0x06,(char)0x0F,(char)0x00},   // U+0046 (F)
    {(char)0x3C,(char)0x66,(char)0x03,(char)0x03,(char)0x73,(char)0x66,(char)0x7C,(char)0x00},   // U+0047 (G)
    {(char)0x33,(char)0x33,(char)0x33,(char)0x3F,(char)0x33,(char)0x33,(char)0x33,(char)0x00},   // U+0048 (H)
    {(char)0x1E,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x1E,(char)0x00},   // U+0049 (I)
    {(char)0x78,(char)0x30,(char)0x30,(char)0x30,(char)0x33,(char)0x33,(char)0x1E,(char)0x00},   // U+004A (J)
    {(char)0x67,(char)0x66,(char)0x36,(char)0x1E,(char)0x36,(char)0x66,(char)0x67,(char)0x00},   // U+004B (K)
    {(char)0x0F,(char)0x06,(char)0x06,(char)0x06,(char)0x46,(char)0x66,(char)0x7F,(char)0x00},   // U+004C (L)
    {(char)0x63,(char)0x77,(char)0x7F,(char)0x7F,(char)0x6B,(char)0x63,(char)0x63,(char)0x00},   // U+004D (M)
    {(char)0x63,(char)0x67,(char)0x6F,(char)0x7B,(char)0x73,(char)0x63,(char)0x63,(char)0x00},   // U+004E (N)
    {(char)0x1C,(char)0x36,(char)0x63,(char)0x63,(char)0x63,(char)0x36,(char)0x1C,(char)0x00},   // U+004F (O)
    {(char)0x3F,(char)0x66,(char)0x66,(char)0x3E,(char)0x06,(char)0x06,(char)0x0F,(char)0x00},   // U+0050 (P)
    {(char)0x1E,(char)0x33,(char)0x33,(char)0x33,(char)0x3B,(char)0x1E,(char)0x38,(char)0x00},   // U+0051 (Q)
    {(char)0x3F,(char)0x66,(char)0x66,(char)0x3E,(char)0x36,(char)0x66,(char)0x67,(char)0x00},   // U+0052 (R)
    {(char)0x1E,(char)0x33,(char)0x07,(char)0x0E,(char)0x38,(char)0x33,(char)0x1E,(char)0x00},   // U+0053 (S)
    {(char)0x3F,(char)0x2D,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x1E,(char)0x00},   // U+0054 (T)
    {(char)0x33,(char)0x33,(char)0x33,(char)0x33,(char)0x33,(char)0x33,(char)0x3F,(char)0x00},   // U+0055 (U)
    {(char)0x33,(char)0x33,(char)0x33,(char)0x33,(char)0x33,(char)0x1E,(char)0x0C,(char)0x00},   // U+0056 (V)
    {(char)0x63,(char)0x63,(char)0x63,(char)0x6B,(char)0x7F,(char)0x77,(char)0x63,(char)0x00},   // U+0057 (W)
    {(char)0x63,(char)0x63,(char)0x36,(char)0x1C,(char)0x1C,(char)0x36,(char)0x63,(char)0x00},   // U+0058 (X)
    {(char)0x33,(char)0x33,(char)0x33,(char)0x1E,(char)0x0C,(char)0x0C,(char)0x1E,(char)0x00},   // U+0059 (Y)
    {(char)0x7F,(char)0x63,(char)0x31,(char)0x18,(char)0x4C,(char)0x66,(char)0x7F,(char)0x00},   // U+005A (Z)
    {(char)0x1E,(char)0x06,(char)0x06,(char)0x06,(char)0x06,(char)0x06,(char)0x1E,(char)0x00},   // U+005B ([)
    {(char)0x03,(char)0x06,(char)0x0C,(char)0x18,(char)0x30,(char)0x60,(char)0x40,(char)0x00},   // U+005C (\)
    {(char)0x1E,(char)0x18,(char)0x18,(char)0x18,(char)0x18,(char)0x18,(char)0x1E,(char)0x00},   // U+005D (])
    {(char)0x08,(char)0x1C,(char)0x36,(char)0x63,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+005E (^)
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0xFF},   // U+005F (_)
    {(char)0x0C,(char)0x0C,(char)0x18,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+0060 (`)
    {(char)0x00,(char)0x00,(char)0x1E,(char)0x30,(char)0x3E,(char)0x33,(char)0x6E,(char)0x00},   // U+0061 (a)
    {(char)0x07,(char)0x06,(char)0x06,(char)0x3E,(char)0x66,(char)0x66,(char)0x3B,(char)0x00},   // U+0062 (b)
    {(char)0x00,(char)0x00,(char)0x1E,(char)0x33,(char)0x03,(char)0x33,(char)0x1E,(char)0x00},   // U+0063 (c)
    {(char)0x38,(char)0x30,(char)0x30,(char)0x3e,(char)0x33,(char)0x33,(char)0x6E,(char)0x00},   // U+0064 (d)
    {(char)0x00,(char)0x00,(char)0x1E,(char)0x33,(char)0x3f,(char)0x03,(char)0x1E,(char)0x00},   // U+0065 (e)
    {(char)0x1C,(char)0x36,(char)0x06,(char)0x0f,(char)0x06,(char)0x06,(char)0x0F,(char)0x00},   // U+0066 (f)
    {(char)0x00,(char)0x00,(char)0x6E,(char)0x33,(char)0x33,(char)0x3E,(char)0x30,(char)0x1F},   // U+0067 (g)
    {(char)0x07,(char)0x06,(char)0x36,(char)0x6E,(char)0x66,(char)0x66,(char)0x67,(char)0x00},   // U+0068 (h)
    {(char)0x0C,(char)0x00,(char)0x0E,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x1E,(char)0x00},   // U+0069 (i)
    {(char)0x30,(char)0x00,(char)0x30,(char)0x30,(char)0x30,(char)0x33,(char)0x33,(char)0x1E},   // U+006A (j)
    {(char)0x07,(char)0x06,(char)0x66,(char)0x36,(char)0x1E,(char)0x36,(char)0x67,(char)0x00},   // U+006B (k)
    {(char)0x0E,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x0C,(char)0x1E,(char)0x00},   // U+006C (l)
    {(char)0x00,(char)0x00,(char)0x33,(char)0x7F,(char)0x7F,(char)0x6B,(char)0x63,(char)0x00},   // U+006D (m)
    {(char)0x00,(char)0x00,(char)0x1F,(char)0x33,(char)0x33,(char)0x33,(char)0x33,(char)0x00},   // U+006E (n)
    {(char)0x00,(char)0x00,(char)0x1E,(char)0x33,(char)0x33,(char)0x33,(char)0x1E,(char)0x00},   // U+006F (o)
    {(char)0x00,(char)0x00,(char)0x3B,(char)0x66,(char)0x66,(char)0x3E,(char)0x06,(char)0x0F},   // U+0070 (p)
    {(char)0x00,(char)0x00,(char)0x6E,(char)0x33,(char)0x33,(char)0x3E,(char)0x30,(char)0x78},   // U+0071 (q)
    {(char)0x00,(char)0x00,(char)0x3B,(char)0x6E,(char)0x66,(char)0x06,(char)0x0F,(char)0x00},   // U+0072 (r)
    {(char)0x00,(char)0x00,(char)0x3E,(char)0x03,(char)0x1E,(char)0x30,(char)0x1F,(char)0x00},   // U+0073 (s)
    {(char)0x08,(char)0x0C,(char)0x3E,(char)0x0C,(char)0x0C,(char)0x2C,(char)0x18,(char)0x00},   // U+0074 (t)
    {(char)0x00,(char)0x00,(char)0x33,(char)0x33,(char)0x33,(char)0x33,(char)0x6E,(char)0x00},   // U+0075 (u)
    {(char)0x00,(char)0x00,(char)0x33,(char)0x33,(char)0x33,(char)0x1E,(char)0x0C,(char)0x00},   // U+0076 (v)
    {(char)0x00,(char)0x00,(char)0x63,(char)0x6B,(char)0x7F,(char)0x7F,(char)0x36,(char)0x00},   // U+0077 (w)
    {(char)0x00,(char)0x00,(char)0x63,(char)0x36,(char)0x1C,(char)0x36,(char)0x63,(char)0x00},   // U+0078 (x)
    {(char)0x00,(char)0x00,(char)0x33,(char)0x33,(char)0x33,(char)0x3E,(char)0x30,(char)0x1F},   // U+0079 (y)
    {(char)0x00,(char)0x00,(char)0x3F,(char)0x19,(char)0x0C,(char)0x26,(char)0x3F,(char)0x00},   // U+007A (z)
    {(char)0x38,(char)0x0C,(char)0x0C,(char)0x07,(char)0x0C,(char)0x0C,(char)0x38,(char)0x00},   // U+007B ({)
    {(char)0x18,(char)0x18,(char)0x18,(char)0x00,(char)0x18,(char)0x18,(char)0x18,(char)0x00},   // U+007C (|)
    {(char)0x07,(char)0x0C,(char)0x0C,(char)0x38,(char)0x0C,(char)0x0C,(char)0x07,(char)0x00},   // U+007D (})
    {(char)0x6E,(char)0x3B,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00},   // U+007E (~)
    {(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00,(char)0x00}    // U+007F
};
