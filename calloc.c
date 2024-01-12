//calloc() is a built in function used to dynamically allocate multiple blocks of memory
//calloc stands for clear allocation
//it is different from malloc() intwo ways 
// calloc needs two arguments instead of just one
//memory allocated by calloc is intialized to zero
//memory allocated by malloc is initialized to some garbage value

//Note:calloc and malloc both return NULL when there is no sufficient memory in heap

//syntax; void *calloc(size_t n,size_t size) 
//the first argument  size_t n represents no of block
//the second argument represents the size of each block

//example for calloc: int *ptr = (int*)calloc(10,sizeof(int))
//equivelent malloc: int *ptr = (int*)malloc(10*sizeof(int))