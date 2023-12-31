* SPARSE MATRIX : A sparse matrix is a special case of a matrix in which the number of zero elements is much higher than the number of non-zero elements.
                 As a rule of thumb, if 2/3 of the total elements in a matrix are zeros, it can be called a sparse matrix.

* REQUIRMENTS : 
              1. storage: a sparse matrix contains lesser non-zero elements than zero elements, so less memory can be used
              2. Computing time : we need to travers non zero elements only, rather than traversing all the sparse matrix elements, it saves computing time by logically 
                                  data structure traversing non-elements 

** ARRAY REPRESENTATION OF THE SPARSE MATRIX: 
  1. A sparse matrix using a 2-D array leads to the wastage of lots of memory
  2. as we store zero matrix, so empty space will created and wastage of memory will happen.
  3. To avoid storage wastage we can store only non-zerto elements.

EX.     |0 4 0 5|
        |0 0 3 6|
        |0 0 2 0|
        |2 0 0 0|     . here the no of non-zero elements = 7
        |1 0 0 0|     . here total elements = 20    ** sparsity = 7/20 ..  **
