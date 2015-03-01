
//------------------------------------------------------------
//write back跟write through, 分別針對怎樣的程式  performance會比較好?
Write Through(即刻寫回):

  - WRITE HIT
    write cache and memory in the same time
  - WRITE MISS (要寫的地址不再cache中)
    * no write allocate policy -> write the data into memory directly.
    * write allocate policy    -> copy the matched memory block into cache and write to cache.
 
Write Back(稍後寫回):
    
  - WRITE HIT
    only write cache and set dirty bit, write memory when you need to erase the cache data.
  - WRITE MISS
//------------------------------------------------------------
Bus種類
1.Data Bus:傳輸資料/指令用
2.Address Bus:存取memory之位址
3.Control Bus:由control Unit發出之control signal
//------------------------------------------------------------
怎麼寫會讓CPU pipeline運作比較好
//------------------------------------------------------------
做context switch時候  MMU有做什麼動作?
//------------------------------------------------------------
const int a; // integer a which is const 
int const a; // const integer a 
const int * a; // pointer to the integer which is pointer
int * const a; // const pointer to the int 
int const * a const; // dual
//------------------------------------------------------------
//static 的作用?
1. a static variable inside a function keeps its value between invocations.
2. a static function or global function is "seen" only in the file it's declare in.
//------------------------------------------------------------
//Interrupt
Interrupt service routine  不能傳遞參數
Interrupt service routine  不能返回值
Interrupt service rouine 有些compiler 不允許floating point
//------------------------------------------------------------
11.vim的好處在哪。
//------------------------------------------------------------
12.Volatile變數的使用時機，如果不用它，平常程式會把資料存在哪
    * Memory-mapped peripheral registers
    * Global variables modified by an interrupt service routine
    * Global variables within a multi-threaded application 。

  UINT1 * ptr = (UINT1 *) 0x1234;

  // Wait for register to become non-zero.
  while (*ptr == 0);
  // Do something else. 
         