# Parallel_computing
## Different type of examples for parallel_computing.
# 1. Spatial Locality
compile and run with parameters like ./spatial_locality 16 16
   - Row-major vs Column major. In C programming language, the matrix stored as row-major order.
   - The time required to complete the calculations for matrixes of size from 16×16 to
4196 × 4196:
     
     ```
     - 16x16
       - Column Major: 0 | Row Major: 0
     - 32x32
       - Column Major: 0.0002 | Row Major: 0.0002
     - 64x64
       - Column Major: 0.0014 | Row Major: 0.0013
     - 128x128
       - Column Major: 0.0094 | Row Major: 0.0076
     - 256x256
       - Column Major: 0.0578 | Row Major: 0.0349
     - 512x512
       - Column Major: 0.3345 | Row Major: 0.2686
     - 1024x1024
       - Column Major: 2.6895 | Row Major: 2.1553
     - 2048x2048
       - Column Major: 69.9886| Row Major: 17.6988
     - 4196x4196
       - Column Major: 580.3518 | Row Major: 151.1891
       ```
       
<img width="553" alt="Ekran Resmi 2022-06-30 22 54 58" src="https://user-images.githubusercontent.com/58150504/176765591-e4fc666d-51b4-4724-8df2-34117ef3ce93.png">
    - The time required to complete the calculations for matrixes of size from 16×16 to
4196 × 4196:
     
     ```
     - 16x16
       - Column Major: 0 | Row Major: 0
     - 32x32
       - Column Major: 0.0000 | Row Major: 0.0000
     - 64x64
       - Column Major: 0.0001| Row Major: 0.0000
     - 128x128
       - Column Major: 0.0010 | Row Major: 0.0001
     - 256x256
       - Column Major: 0.0124 | Row Major: 0.0017
     - 512x512
       - Column Major: 0.1081| Row Major: 0.0133
     - 1024x1024
       - Column Major: 1.0807 | Row Major: 0.1121
     - 2048x2048
       - Column Major: 62.9122| Row Major: 1.7632
     - 4196x4196
       - Column Major: 268.8593 | Row Major: 14.1835
      ```
      
<img width="530" alt="Ekran Resmi 2022-06-30 23 01 58" src="https://user-images.githubusercontent.com/58150504/176767634-24dcd7ed-c967-481f-8e49-11e28a6374f2.png">

# 2. Basic hello world with MPI.
# 3. Array split using index.
# 4. Array split using MPI_scatter.
# 5. Using MPI_Bcast
