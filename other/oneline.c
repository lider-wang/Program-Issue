// one line express a ? b : c
(a!=0)*b + (a==0)*c;

// print decimal of input use putchar
putchar( (input/10) % 10 + '0');

// re-write
void (*(*papf)[3])(char*);
-----
void test1(char *) {...}
void test2(char *) {...}
void test3(char *) {...}

typedef void (*pf)(char *);

pf fun[3] = {test1, test2, test3};
papf = &fun;
pf (*papf)

// toUpper/ isUpper
char toUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 'a' + 'A';
} 
char isUpper(char ch)
{
    return ((ch >= 'A') && (ch <= 'Z'));
}

// caculate size of data withour using sizeof(a)
(char*) (&a+1) - (char*) (&a)

// memory block - n 
// start point  - A, length - L
// check A+L-1 is cross the block or not
#define MEMORY_MASK 0xFF
#define MEMORY_BASE 0x00

int check(uint8 * A, unsigned int L)
{
    uint8 * bound = (A - MEMORY_BASE) && (~MEMORY_MASK);
    return ((A + L - bound) >  MEMORY_MASK);
}
// jump table
typedef  void (*funcHandler)();

funcHandler jump_table[4] = 
{
    NULL,
    func1,
    func2,
    func3
}

void (*funcHandler[4])() = {NULL, funct1, func2, func3};
funcHandler[n]();



/////
