6

1.struct A inA;

inA
 look at right -> no right
 look at left -> struct a


 inA is a struct a


2. int *p

   p is a pointer to 'int'


3. int A[5]

   start from variable name 'A'
      look right ->[5]
      look left ->5

      'A' is array 5 of integers

4. int my_add(int,int)

  my_add is function accpecting two int,int returning int

5. struct A *pA

  pA is pointer to struct A

6. 

float *parr[10]

parr is array 10 of pointer to float


7.
float (*parr)[10]

parr is pointer to array 10 of float

8. 
int (*pfn)(int,int)

 pfn is pointer to function accpecting int, int returning int

9.
int **pp;

 pp is pointer to pointer to int

10.
   int (*p[4])(int,int)

   p is array 4 of pointer to function accpecting int,int returning int


11.
  int (*f(int,int))(int);

 f is function accpecting int int returning pointer to function accpecting int returning int


 12 char **argv

   argv is pointer to pointer to char
   
13. int (*daytab)[13]

  daytab is pointer to array 13 of integers

14 
   int* daytab[13]

   daytab is array 13 of pointer to integers

 15
   void* comp()

   comp is function accpecting void returning pointer to void 

 16.
  void(*comp)()
   comp is a pointer to function accpecting void ,returning void

17.
  char(*(*x()[])())   


  x is a function accpecting nothing, returning pointer to array of pointer to function accpecting nothing
  returning char 

18.
  char(*(*x[3])())[5]
 
 start from variable name :X

 look at right -> [3]

 x is array 3
   look at left -> *
 x is array 3 of pointer to
   look at right -> ()
 x is array 3 of pointer to function accpecting nothing
   look at left -> *
 x is array 3 of pointer to function accpecting nothing returning pointer to
   look at right -> []
 x is array 3 of pointer to function accpecting nothing returning pointer to array 5 of 
   look at lect -> char
 x is array 3 of pointer function to function accpecting nothing returning pointer to array five of char
 









