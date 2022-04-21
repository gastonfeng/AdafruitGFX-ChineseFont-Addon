#define V_size 101
#define g_size 20
const int g[] = {-63, -39, -82, -52, -99, -23, -95, 1, -81, -21, -80, -50, -46, -93, -89, -72, -66, -85, -64, -94};
const int V[] = {42, 3, NULL, NULL, 63, 51, 71, 22, 34, 81, 61, 17, 1, 23, 70, 27, 52, 59, 8, 25, 49, 77, 50, 20, 76, 39, 58, 56, 13, 12, 75, 6, 69, 57, 30, 15, 47, 4, 4, 24, 55, 26, 18, 53, 21, 28, 41, 2, 7, 15, 10, 16, 32, 36, 67, 35, 19, 60, 37, 40, 46, 44, 51, 5, 16, 34, 29, 5, 78, 38, 54, 2, 31, 11, 73, 9, 65, 45, 72, 29, 17, 1, 28, 14, 7, 68, 79, 33, 3, 80, 50, 64, 13, 11, 31, 48, 43, 62, 22, 74, 66};
uint32_t hash(uint32_t d,uint8_t* str,int len){
    if (d == 0)
       d = 0x811C9DC5UL;
 for (int i = 0; i < len; ++i)
 {
     d = d ^ (uint32_t)str[i] * 16777619 & 0xffffffff;
 }
 return d;
}
uint32_t lookup(uint8_t* str,int len){
  unsigned long d = g[hash(0,str,len) % g_size];
    if (d<0)
      return V[-d-1];
   return V[hash(d,str,len) % V_size]+95;
}
const unsigned char user_font[]  = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x71, 0xc0, 0x71, 0xc0, 0x71, 0xc0, 0x71, 0xc0, 0x31, 0x80, 0x31, 0x80, 0x31, 0x80, 0x11, 0x0, 0x11, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0xe0, 0x1f, 0x80, 0x79, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0xe0, 0x1f, 0x80, 0x79, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0x6, 0x0, 0x1f, 0x80, 0x36, 0xe0, 0x66, 0x60, 0x66, 0x40, 0x26, 0x0, 0x36, 0x0, 0x1e, 0x0, 0xf, 0x80, 0x6, 0xc0, 0x6, 0x40, 0x26, 0x60, 0x66, 0x60, 0x76, 0xc0, 0x1f, 0x80, 0x6, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x38, 0x60, 0x6c, 0xc0, 0x6c, 0xc0, 0x6d, 0x80, 0x6d, 0x80, 0x3b, 0x0, 0x3, 0x0, 0x6, 0x0, 0x6, 0x0, 0xc, 0x0, 0xd, 0xc0, 0x1b, 0x60, 0x1b, 0x60, 0x33, 0x60, 0x33, 0x60, 0x61, 0xc0, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7, 0x0, 0xd, 0x80, 0x18, 0x80, 0x18, 0x80, 0x19, 0x80, 0xb, 0x0, 0xe, 0x0, 0xc, 0x0, 0x14, 0x0, 0x32, 0x0, 0x62, 0x20, 0x61, 0x20, 0x61, 0x60, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x31, 0x60, 0x1e, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x7, 0x0, 0x3, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x80, 0x1, 0x0, 0x2, 0x0, 0x6, 0x0, 0x4, 0x0, 0xc, 0x0, 0xc, 0x0, 0x18, 0x0, 0x18, 0x0, 0x18, 0x0, 0x18, 0x0, 0x18, 0x0, 0x18, 0x0, 0x18, 0x0, 0x18, 0x0, 0xc, 0x0, 0xc, 0x0, 0x4, 0x0, 0x6, 0x0, 0x2, 0x0, 0x1, 0x0, 0x0, 0x80, 0x0, 0x0, 
0x0, 0x0, 0x10, 0x0, 0x8, 0x0, 0x4, 0x0, 0x6, 0x0, 0x2, 0x0, 0x3, 0x0, 0x3, 0x0, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x3, 0x0, 0x3, 0x0, 0x2, 0x0, 0x6, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x30, 0xc0, 0x39, 0xc0, 0x19, 0x80, 0xf, 0x0, 0x7f, 0xe0, 0x7f, 0xe0, 0xf, 0x0, 0x19, 0x80, 0x39, 0xc0, 0x30, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x7f, 0xe0, 0x7f, 0xe0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x7, 0x80, 0x7, 0x80, 0x3, 0x80, 0x1, 0x80, 0x3, 0x0, 0x4, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x7f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x0, 0x60, 0x0, 0xc0, 0x0, 0xc0, 0x1, 0x80, 0x1, 0x80, 0x3, 0x0, 0x3, 0x0, 0x6, 0x0, 0x6, 0x0, 0xc, 0x0, 0xc, 0x0, 0x18, 0x0, 0x18, 0x0, 0x30, 0x0, 0x30, 0x0, 0x60, 0x0, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x1f, 0x80, 0x30, 0xc0, 0x20, 0xc0, 0x60, 0xe0, 0x61, 0x60, 0x61, 0x60, 0x62, 0x60, 0x62, 0x60, 0x64, 0x60, 0x64, 0x60, 0x68, 0x60, 0x68, 0x60, 0x70, 0x60, 0x30, 0x40, 0x30, 0xc0, 0x1f, 0x80, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x7, 0x0, 0xf, 0x0, 0x1b, 0x0, 0x13, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0, 0x1f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x1f, 0x80, 0x30, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x30, 0x60, 0x0, 0xc0, 0x0, 0xc0, 0x1, 0x80, 0x3, 0x0, 0xc, 0x0, 0x8, 0x0, 0x30, 0x0, 0x30, 0x60, 0x60, 0x60, 0x7f, 0xe0, 0x60, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x60, 0xc0, 0x1, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc, 0x0, 0x3f, 0x0, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0xe0, 0x0, 0xc0, 0x61, 0xc0, 0x63, 0x80, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x1, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x5, 0x80, 0xd, 0x80, 0x9, 0x80, 0x19, 0x80, 0x11, 0x80, 0x31, 0x80, 0x21, 0x80, 0x61, 0x80, 0x7f, 0xe0, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x7f, 0xc0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x6f, 0x80, 0x78, 0xc0, 0x40, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0xc0, 0x0, 0xc0, 0x1, 0x80, 0x7, 0x0, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x6, 0x0, 0xc, 0x0, 0x18, 0x0, 0x18, 0x0, 0x30, 0x0, 0x30, 0x0, 0x60, 0x0, 0x6f, 0x80, 0x70, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0x30, 0xc0, 0x31, 0xc0, 0x1f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x7f, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x0, 0x60, 0x0, 0xc0, 0x0, 0xc0, 0x1, 0x80, 0x1, 0x80, 0x3, 0x0, 0x3, 0x0, 0x2, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x19, 0x80, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x19, 0x80, 0xf, 0x0, 0x19, 0x80, 0x30, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x30, 0xc0, 0x1f, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x1f, 0x80, 0x30, 0xc0, 0x70, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x30, 0xe0, 0x1f, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0xc0, 0x0, 0xc0, 0x1, 0x80, 0x3, 0x0, 0x6, 0x0, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x7, 0x0, 0x3, 0x0, 0x2, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x7f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x7f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x1f, 0x80, 0x30, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x0, 0x60, 0x0, 0xc0, 0x1, 0x80, 0x3, 0x0, 0x3, 0x0, 0x6, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x31, 0x80, 0x60, 0xc0, 0x60, 0x60, 0x67, 0xe0, 0x6c, 0x60, 0x6c, 0x60, 0x6c, 0x60, 0x6c, 0x60, 0x6c, 0x60, 0x6c, 0x60, 0x6c, 0x60, 0x67, 0xc0, 0x60, 0x0, 0x60, 0x0, 0x60, 0xe0, 0x30, 0xc0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x6, 0x0, 0x6, 0x0, 0xf, 0x0, 0xf, 0x0, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x3f, 0xc0, 0x3f, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x79, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x31, 0x80, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x31, 0x80, 0x33, 0x0, 0x3f, 0x0, 0x31, 0xc0, 0x30, 0xe0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xc0, 0x31, 0x80, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0xf, 0x80, 0x18, 0xc0, 0x30, 0x60, 0x30, 0x60, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x60, 0x30, 0x60, 0x30, 0x60, 0x18, 0xc0, 0xf, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7e, 0x0, 0x33, 0x0, 0x31, 0x80, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xc0, 0x30, 0xc0, 0x31, 0x80, 0x33, 0x0, 0x7e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x30, 0xe0, 0x30, 0x60, 0x30, 0x20, 0x30, 0x20, 0x31, 0x0, 0x31, 0x0, 0x33, 0x0, 0x3f, 0x0, 0x33, 0x0, 0x31, 0x0, 0x31, 0x0, 0x30, 0x0, 0x30, 0x20, 0x30, 0x20, 0x30, 0x60, 0x30, 0xe0, 0x7f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x30, 0xe0, 0x30, 0x60, 0x30, 0x20, 0x30, 0x20, 0x30, 0x80, 0x30, 0x80, 0x31, 0x80, 0x3f, 0x80, 0x31, 0x80, 0x30, 0x80, 0x30, 0x80, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0xf, 0x80, 0x18, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0, 0x63, 0xe0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x1f, 0x80, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x79, 0xe0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x3f, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x79, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x3f, 0xc0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x3f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7, 0xe0, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x31, 0x80, 0x71, 0x80, 0x61, 0x80, 0x61, 0x80, 0x33, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x79, 0xe0, 0x30, 0xc0, 0x31, 0x80, 0x31, 0x80, 0x33, 0x0, 0x32, 0x0, 0x36, 0x0, 0x3c, 0x0, 0x3c, 0x0, 0x3a, 0x0, 0x3a, 0x0, 0x33, 0x0, 0x31, 0x0, 0x31, 0x80, 0x31, 0x80, 0x30, 0xc0, 0x30, 0xc0, 0x79, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x78, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x20, 0x30, 0x20, 0x30, 0x60, 0x30, 0xe0, 0x7f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x79, 0xe0, 0x69, 0x60, 0x69, 0x60, 0x6f, 0x60, 0x66, 0x60, 0x66, 0x60, 0x66, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x70, 0xe0, 0x30, 0xc0, 0x30, 0xc0, 0x38, 0xc0, 0x38, 0xc0, 0x38, 0xc0, 0x3c, 0xc0, 0x34, 0xc0, 0x36, 0xc0, 0x32, 0xc0, 0x33, 0xc0, 0x31, 0xc0, 0x31, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0x40, 0x78, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x30, 0xc0, 0x30, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x30, 0xc0, 0x30, 0xc0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x31, 0xc0, 0x30, 0xc0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xc0, 0x31, 0xc0, 0x3f, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x30, 0x0, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x31, 0x80, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x6c, 0xc0, 0x64, 0xc0, 0x66, 0xc0, 0x33, 0x80, 0x1f, 0x0, 0x0, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x31, 0x80, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x31, 0x80, 0x3f, 0x0, 0x32, 0x0, 0x32, 0x0, 0x33, 0x0, 0x31, 0x0, 0x31, 0x80, 0x30, 0x80, 0x30, 0xc0, 0x30, 0x40, 0x78, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x1f, 0x40, 0x31, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0x0, 0x30, 0x0, 0x38, 0x0, 0xe, 0x0, 0x7, 0x80, 0x1, 0xc0, 0x0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0x70, 0xc0, 0x5f, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x66, 0x60, 0x46, 0x20, 0x46, 0x20, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x1f, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x79, 0xe0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x19, 0x80, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x70, 0xe0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x9, 0x0, 0xf, 0x0, 0xf, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x26, 0x40, 0x26, 0x40, 0x26, 0x40, 0x26, 0x40, 0x36, 0xc0, 0x36, 0xc0, 0x36, 0xc0, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x70, 0xe0, 0x30, 0xc0, 0x30, 0xc0, 0x19, 0x80, 0x19, 0x80, 0x9, 0x0, 0x9, 0x0, 0xf, 0x0, 0x6, 0x0, 0x6, 0x0, 0xf, 0x0, 0x9, 0x0, 0x9, 0x0, 0x19, 0x80, 0x19, 0x80, 0x30, 0xc0, 0x30, 0xc0, 0x70, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x70, 0xe0, 0x30, 0xc0, 0x30, 0xc0, 0x10, 0x80, 0x10, 0x80, 0x19, 0x80, 0x9, 0x0, 0x9, 0x0, 0xf, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x6, 0x0, 0x1f, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0x70, 0xc0, 0x60, 0xc0, 0x41, 0x80, 0x41, 0x80, 0x3, 0x0, 0x3, 0x0, 0x6, 0x0, 0x6, 0x0, 0xc, 0x0, 0xc, 0x0, 0x18, 0x0, 0x18, 0x0, 0x30, 0x0, 0x30, 0x20, 0x60, 0x60, 0x60, 0xe0, 