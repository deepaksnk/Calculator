/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float trig();
int vecd();
int basic();
int mata();
int mats();
int matm();
int matd();
int matt();
int vecad();
int vecs();
int vecc();
int vecan();
int frac();
int comp();
int main()

{
    int n, stop, m, v;
    
    stop = 1;
    while (stop!=0){
        printf(" \n1(Basic Operations)\n2(Fractions) \n3(Complex Numbers) \n4(Trigonometry) \n5(Matrix)  \n6(Vectors) \nEnter the choice  \n ");
        scanf ("%d" , &n);
        if (n==1){
            basic();
        }
        else{
            if (n==2){
                frac();
            }
            else{
                if (n==3){
                    comp();
                }
                else{
                    if (n==4){
                        trig();
                    }
                    else{
                        if (n==5){
                            int stop1;
                            
                            stop1 = 1;
                            while (stop1!=0){
                                printf(" \n1(Matrix Addition) \n2(Matrix Subtraction) \n3(Matrix Multiplication)  \n4(Matrix Determinants)  \n5(Matrix Transpose) \nEnter the choice \n  ");
                                scanf ("%d",&m);
                                if (m==1){
                                    mata();
                                }
                                else{
                                    if (m==2){
                                        mats();
                                    }
                                    else{
                                        if (m==3){
                                            matm();
                                        }
                                        else{
                                            if( m==4){
                                                matd();
                                            }
                                            else{
                                                if (m==5){
                                                    matt();
                                                }
                                                else{
                                                    printf("Incorrect Choice");
                                                }
                                            }
                                        }
                                    }
                                }
                                printf("\nEnter 0 to Exit or  Press any other  number for Menu: ");
                                scanf ("%d",&stop1);
                            }
                        }
                        else{
                            if (n==6){
                                int stop1;
                                
                                stop1 = 1;
                                while (stop1!=0){
                                    printf(" \n1(Vector Addition) \n2(Vector Subtraction) \n3(Scalar Product {dot} )  \n4(Vector Product {cross} )  \n5(Vector Angle) \nEnter the choice \n  ");
                                    scanf("%d",&v);
                                    if (v==1){
                                        vecad();
                                    }
                                    else{
                                        if (v==2){
                                            vecs();
                                        }
                                        else{
                                            if (v==3){
                                                vecd();
                                            }
                                            else{
                                                if (v==4){
                                                    vecc();
                                                }
                                                else{
                                                    if (v==5){
                                                        vecan();
                                                    }
                                                    else{
                                                        printf("Incorrect Choice");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    printf("\nEnter 0 to Exit or  Press any other  number for Menu: ");
                                    scanf ("%d",&stop1);
                                }
                            }
                            else{
                                printf("Incorrect Choice");
                            }
                        }
                    }
                }   
            }
        }
        printf("\nEnter 0 to Exit or  Press any other  number for Menu: ");
        scanf ("%d",&stop);
    }
}













int basic()
{
    float a, b, choice;

    
    printf("Enter the numbers:\n");
    scanf("%f%f", &a, &b);

    
    printf("\nInput your choice to make an operation\n");
    printf("\n1 : for Addition");
    printf("\n2 : for Substraction");
    printf("\n3: for Multiplication");
    printf("\n4 : for Division");
    printf("\n5 : for Percentage");
   

    printf("\n\nEnter your choice: ");
    scanf("%f", &choice);

    
    printf("\n");
    if (choice == 1) {
        printf("Addition of %f + %f = %f\n", a, b, a + b);
    } 
	else if (choice == 2) {
         printf("Substraction of %f - %f = %f\n", a, b, a - b);
    }
    else if (choice == 3) {
        printf("product of %f*%f = %f\n", a, b, a*b);
    }
    else if (choice == 4) {
        printf("division of %f/%f = %f\n", a, b, a/b);
    }
     else if (choice == 5) {
        printf("percentage of %f/%f = %f\n", a, b, a/b*100);
    }
	else {
        printf("\nKindly input correct choice\n");
    }
    return 0;
}












int mata()
{
    int m,n,A[10][10],B[10][10],C[10][10]; 
    printf("Enter number of rows\n");     
    scanf("%d",&m);
    printf("Enter number of columns\n");  
    scanf("%d",&n);
    printf("Enter matrix A elements\n");
    for(int i=0;i<m;i++)                    
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element A[%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter matrix B elements\n");  
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("Enter element B[%d][%d] :",i,j);
           scanf("%d",&B[i][j]); 
        }
    }
    printf("Sum Of the Matrix \n");                
     
     for(int i=0;i<m;i++)            
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]); 
        }
        printf("\n");
    }
     return 0;
}













int mats()
{
    int m,n,A[10][10],B[10][10],C[10][10]; 
    printf("Enter number of rows\n");     
    scanf("%d",&m);
    printf("Enter number of columns\n");  
    scanf("%d",&n);
    printf("Enter matrix A elements\n");
    for(int i=0;i<m;i++)                    
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element A[%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter matrix B elements\n");  
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("Enter element B[%d][%d] :",i,j);
           scanf("%d",&B[i][j]); 
        }
    }
    printf("Sum Of the Matrix \n");                
     
     for(int i=0;i<m;i++)            
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
            printf("%d ",C[i][j]); 
        }
        printf("\n");
    }
     return 0;
}













int matt()
{
    int m, n, i, j, matrix[3][3], transpose[3][3];
   
   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);
   
   printf("Enter elements of the matrix\n");
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];
   printf("Transpose of the matrix:\n");

   for (i = 0; i< n; i++)
   {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
      printf("\n");
   }
   return 0;
}









int vecad()
{
    int vect1[3], vect2[3];
  int result[3];	
  int n, i;
  
  printf ("Enter vector size: ");
  scanf ("%d", &n);
  
  printf ("Enter elements of vector vect1:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &vect1[i]);
    
  printf ("Enter elements of vector vect2:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &vect2[i]);
    
  for (i = 0; i < n; i++)
    result[i] = vect1[i] + vect2[i];

  printf ("Addition of Vectors :\n");

  for (i = 0; i < n; i++)
    printf ("%d ", result[i]);
}













int vecs()
{
    int vect1[3], vect2[3];
  int result[3];	
  int n, i;
  
  printf ("Enter vector size: ");
  scanf ("%d", &n);
  
  printf ("Enter elements of vector vect1:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &vect1[i]);
    
  printf ("Enter elements of vector vect2:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &vect2[i]);
    
  for (i = 0; i < n; i++)
    result[i] = vect1[i] - vect2[i];

  printf ("Subtraction of Vectors :\n");

  for (i = 0; i < n; i++)
    printf ("%d ", result[i]);
}















int vecc()
{
    int a1,a2,a3,b1,b2,b3,i,j,k;
    
    printf("Enter Value of Vector 1 (a1): \n");scanf("%d", &a1);
    printf("Enter Value of Vector 1 (a2): \n");scanf("%d", &a2);
    printf("Enter Value of Vector 1 (a3): \n");scanf("%d", &a3);
    printf("Enter Value of Vector 2 (b1): \n");scanf("%d", &b1);
    printf("Enter Value of Vector 2 (b2): \n");scanf("%d", &b2);
    printf("Enter Value of Vector 2 (b3): \n");scanf("%d", &b3);
     
     i=a2*b3-b2*a3 ;
     j=a1*b3-b1*a3 ;
     k=a1*b2-b1*a2 ;
    
    printf("Cross Product of Two Vectors is: %d %d %d " , i, j, k);
    
    return 0;
}












int vecan()
{
    int a1,a2,a3,b1,b2,b3;
    float i;
    printf("Enter Value of Vector 1 (a1): \n");scanf("%d", &a1);
    printf("Enter Value of Vector 1 (a2): \n");scanf("%d", &a2);
    printf("Enter Value of Vector 1 (a3): \n");scanf("%d", &a3);
    printf("Enter Value of Vector 2 (b1): \n");scanf("%d", &b1);
    printf("Enter Value of Vector 2 (b2): \n");scanf("%d", &b2);
    printf("Enter Value of Vector 2 (b3): \n");scanf("%d", &b3);
    
    i=(acos(((a1*b1)+(a2*b2)+(a3*b3))/(sqrt((a1*a1)+(a2*a2)+(a3*a3))*sqrt((b1*b1)+(b2*b2)+(b3*b3))))*360)/(3.14159*2);
    
    
    printf("Angle = %f Degrees",i);
    
    return 0;
}












int frac()
{
    float add,sub,mul,dd;
    float a,b,c,d,choice;
    printf("Enter Value of Numerator1: \n");scanf("%f", &a);
    printf("Enter Value of Numerator2: \n");scanf("%f", &b);
    printf("Enter Value of Denominator1: \n");scanf("%f", &c);
    printf("Enter Value of Denominator2: \n");scanf("%f", &d);
    
    printf("\nInput your choice to make an operation\n");
    printf("\n1 : for Addition with same Denominator");
    printf("\n2 : for Addition with Different Denominator");
    printf("\n3 : for Subtraction with same Denominator");
    printf("\n4 : for Subtraction with Different Denominator");
    printf("\n5 : for Multiplication");
    printf("\n6 : for Division");
    
    printf("\n\nEnter your choice: ");
    scanf("%f", &choice);
    
     printf("\n");
    if (choice == 1){
    add=((a+b/d));
    printf("\nAddition: %f",add);}
    
    else if (choice == 2){
    add=((a*d)+(c*b)/(c*d));
    printf("\nAddition: %f",add);}
    
    else if (choice == 3){
    sub=((a-b/d));
    printf("\nSubtraction: %f",sub);}
    
    else if (choice == 4){
    sub=((a*d)-(c*b)/(c*d));
    printf("\nSubtraction: %f",sub);}
    
    else if (choice == 5){
    mul=((a*d)*(b*c)/(c*d));
    printf("\nMultiplication: %f",mul);}
    
    else if (choice == 6){
    dd=((a*b)*(c*d)/(c*b));
    printf("\nDivision: %f",dd);}
    
    else {
        printf("\nKindly input correct choice\n");
    }
}












int comp()
{
    int choice;
    printf("\nInput your choice to make an operation\n");
    printf("\n1 : for Complex no. Addition");
    printf("\n2 : for Complex no. Substraction");
    printf("\n3 : for Complex no. Multiplication");
    printf("\n4 : for Complex no. Division");
   

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
 
  printf("\n");
    if (choice == 1)
   {
    struct complex
{
   int real, img;
}a,b,c;
 
{
   
 
    printf("Please enter first complex number\n");
    printf("Enter Real part of the 1st complex number\n");
    scanf("%d", &a.real);
    printf("Enter Imaginary part of the 1st complex number without i\n");
    scanf("%d", &a.img);
    
    printf("Please enter second complex number\n");
    printf("Enter Real part of the 2nd complex number\n");
    scanf("%d", &b.real);
    printf("Enter Imaginary part of the 2nd complex number without i\n");
    scanf("%d", &b.img);
    
   c.real = a.real + b.real;
   c.img = a.img + b.img;
 
   printf("Sum of the complex numbers: (%d) + (%di)\n", c.real, c.img);
}
   }
   else if (choice == 2)
   {
    struct complex
{
   int real, img;
}a,b,c;
 

{
   
 
    printf("Please enter first complex number\n");
    printf("Enter Real part of the 1st complex number\n");
    scanf("%d", &a.real);
    printf("Enter Imaginary part of the 1st complex number without i\n");
    scanf("%d", &a.img);
    
    printf("Please enter second complex number\n");
    printf("Enter Real part of the 2nd complex number\n");
    scanf("%d", &b.real);
    printf("Enter Imaginary part of the 2nd complex number without i\n");
    scanf("%d", &b.img);
    
   c.real = a.real - b.real;
   c.img = a.img - b.img;
 
   printf("Difference of the complex numbers: (%d) - (%di)\n", c.real, c.img);
}
   }
   
   else if (choice == 3) 
   {
    struct complex
{
   float real, img;
}a,b,c;
 
{
   
 
    printf("Please enter first complex number\n");
    printf("Enter Real part of the 1st complex number\n");
    scanf("%f", &a.real);
    printf("Enter Imaginary part of the 1st complex number without i\n");
    scanf("%f", &a.img);
    
    printf("Please enter second complex number\n");
    printf("Enter Real part of the 2nd complex number\n");
    scanf("%f", &b.real);
    printf("Enter Imaginary part of the 2nd complex number without i\n");
    scanf("%f", &b.img);
    
   c.real = a.real * b.real - a.img * b.img;
   c.img = a.real * b.img + a.img * b.real;
 
   printf("PRODUCT = %f + i %f", c.real, c.img);
}
   }
   
   else if (choice == 4) 
   {
       struct complex
{
   float real, img, dd, dd1;
}a,b,c;
 
{
   
 
    printf("Please enter first complex number\n");
    printf("Enter Real part of the 1st complex number\n");
    scanf("%f", &a.real);
    printf("Enter Imaginary part of the 1st complex number without i\n");
    scanf("%f", &a.img);
    
    printf("Please enter second complex number\n");
    printf("Enter Real part of the 2nd complex number\n");
    scanf("%f", &b.real);
    printf("Enter Imaginary part of the 2nd complex number without i\n");
    scanf("%f", &b.img);
    
   c.dd = (a.real + b.img)/(b.real - a.img);
   c.dd1= (b.real - a.img)/(b.real - a.img);
   
   printf("Divison of Complex = %f + %fi ", c.dd, c.dd1);
}
   }
   
   else 
   {
        printf("\nKindly input correct choice\n");
    }
    
    return 0;
}













int vecd()
{
    int vect1[3], vect2[3];
  int result[3];	
  int n, i;
  
  printf ("Enter vector size: ");
  scanf ("%d", &n);
  
  printf ("Enter elements of vector vect1:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &vect1[i]);
    
  printf ("Enter elements of vector vect2:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &vect2[i]);
    
  for (i = 0; i < n; i++)
    result[i] = vect1[i] * vect2[i];

  printf ("Dot Product of Vectors :\n");

  for (i = 0; i < n; i++)
    printf ("%d ", result[i]);
}











float trig()
{
    float a, b, c, x, y, z, k, i, n, g, q, u;
    int e, stop;
    
    stop = 1;
    while (stop!=0){
        printf(" \n1(Sin) \n2(Cos)  \n3(Tan)\n4(Cosec) \n5(Sec) \n6(Cot) \n7(Sin^-1)  \n8(Cos^-1) \n9(Tan^-1)  \n10(Cosec^-1)  \n11(Sec^-1)  \n12(Cot^-1) \nEnter the Choice  \n ");
        scanf ("%d",&e);
        if (e==1){
            printf("Enter Value for Sine: ");
            scanf("%f",&a);
            c = (a*3.14159)/180;
            printf("The Value of Sine %f is %f", a, sin(c));
        }
        else{
            if (e==2){
                printf("Enter Value for Cosine: ");
                scanf("%f",&b);
                c = (b*3.14159)/180;
                printf("The Value of Cosine %f is %f",b ,cos(c));
            }
            else{
                if (e==3){
                    printf("Enter Value for Tangent (other than 90 and 270): ");
                    scanf("%f",&c);
                    x = (c*3.14159)/180;
                    printf("The Value of Tangent %f is %f",c,tan(x));
                }
                else{
                    if (e==4){
                        printf("Enter Value for Cosecant (other than 0, 180 and 360): ");
                        scanf ("%f",&x);
                        c = (x*3.14159)/180;
                        printf("The Value of Cosecant %f is %f" , x, 1/sin(c));
                    }
                    else{
                        if (e==5){
                            printf("Enter Value for Secant (other than 90 and 270): ");
                            scanf("%f",&y);
                            c = (y*3.14159)/180;
                            printf("The Value of Secant %f is %f" , y,1/cos(c));
                        }
                        else{
                            if (e==6){
                                printf("Enter Value for Cotangent (other than 0, 180 and 360): ");
                                scanf("%f",&z);
                                c = (z*3.14159)/180;
                                printf("The Value of Cotangent %f is %f" , z , 1/tan(c));
                            }
                            else{
                                if (e==7){
                                    printf("Enter Value for Sine Inverse [-1 to 1]: ");
                                    scanf("%f",&k);
                                    printf("The Value of Sine Inverse %f is %f" ,k , asin(k)*(180/3.14));
                                }
                                else{
                                    if (e==8){
                                        printf("Enter Value for Cosine Inverse [-1 to 1]: ");
                                        scanf("%f",&i);
                                        printf("The Value of Cosine Inverse %f is %f " ,i ,acos(i)*(180/3.14));
                                    }
                                    else{
                                        if (e==9){
                                            printf("Enter Value for Tangent Inverse: ");
                                            scanf("%f",&n);
                                            printf("The Value of Tangent Inverse %f is %f" , n, atan(n)*(180/3.14));
                                        }
                                        else{
                                            if (e==10){
                                                printf("Enter Value for Cosecant Inverse other than (-1 to 1): ");
                                                scanf("%f",&g);
                                                printf("The Value of Cosecant Inverse %f is %f" , g , asin(1/g)*(180/3.14));
                                            }
                                            else{
                                                if (e==11){
                                                    printf("Enter Value for Secant Inverse other than (-1 to 1): ");
                                                    scanf("%f",&q);
                                                    printf("The Value of Secant Inverse %f is %f" , q, acos(1/q)*(180/3.14));
                                                }
                                                else{
                                                    if (e==12){
                                                        printf("Enter Value for Cotangent Inverse: ");
                                                        scanf("%f",&u);
                                                        printf("The Value of Cotangent Inverse %f is %f" , u , atan(1/u)*(180/3.14));
                                                    }
                                                    else{
                                                        printf("Incorrect Choice");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("\nEnter 0 to Exit or  Press any other  number for Menu: ");
        scanf("%d",&stop);
    }
}














int matm()
{
    int n, rows1, rows2, columns2, columns1, number, length1, index;
    int mult, index1, index2, length3, index3, sum, t, s, x;
    
    printf("Enter the size of the square Matrix (2 or 3): ");
    scanf("%d",&n);
    length1 = pow (n,2);
    int grid2[length1];
    int grid1[length1];
    
    for (index = 0; index <= length1-1; index=index+1){
        printf("Enter matrix 1 values: \n");
        for (rows1 = 0; rows1 <= n-1; rows1=rows1+1){
            for (columns1 = 0; columns1<= n-1; columns1=columns1+1){
                index = n*rows1+columns1;
                printf("Enter element no %d:" , (index+1));
                scanf("%d",&number);
                grid1[index] = number;
            }
        }
    }
    for (index = 0;  index<= length1-1; index = index +1){
        printf("Enter matrix 2 values:\n");
        for (rows2 = 0; rows2<= n-1; rows2=rows2+1){
            for (columns2 = 0; columns2<= n-1; columns2=columns2+1){
                index = n*rows2+columns2;
                printf("Enter element no %d :" , (index+1));
                scanf("%d",&number);
                grid2[index] = number;
            }
        }
    }
    length3 = pow(n,2);
    int grid3[length3];
    
    s = 0;
    x = n-1;
    index3 = 0;
    while (s<=n|| x<=length1-1){
        index2 = 0;
        for (t = 0; t<= n-1; t= t+1){
            index2 = t;
            sum = 0;
            for (index1 = s; index1<= x; index1=index1+1){
                mult = grid1[index1]*grid2[index2];
                sum = sum+mult;
                index2 = index2+n;
            }
            grid3[index3] = sum;
            index3 = index3+1;
        }
        s = s+n;
        x = x+n;
    }
    if (n==2){
        for (index = 0; index<=pow(n,2)-1;index=index+2){
            printf("%d   %d\n" , grid3[index] , grid3[index+1]);
        }
    }
    else{
        if (n==3){
            for (index = 0; index <= pow(n,2)-1; index = index + 3){
                printf("%d  %d  %d\n"  , grid3[index] , grid3[index+1] , grid3[index+2]);
            }
        }
    }
}














int matd()
{
    float determinent;
    int size, n, index, x;
    
    printf("Enter the size of the square Matrix (2 or 3): ");
    scanf("%d",&size);
    n = size*size;
    int matrix[n];
    
    printf("Enter the Values: \n");
    for (index = 0; index<= n-1; index =index+1){
        printf("Enter element no %d :" , (index+1));
        scanf("%d",&x);
        matrix[index] = x;
    }
    determinent = 0;
    if (size==3){
        determinent = matrix[0]*((matrix[4]*matrix[8])-(matrix[5]*matrix[7]));
        determinent = determinent-(matrix[1]*((matrix[3]*matrix[8])-(matrix[6]*matrix[5])));
        determinent = determinent+(matrix[2]*((matrix[3]*matrix[7])-(matrix[6]*matrix[4])));
    }
    else{
        if (size==2){
            determinent = matrix[0]*matrix[3];
            determinent = determinent-(matrix[1]*matrix[2]);
        }
        else{
            if (size==1){
                determinent = x;
            }
        }
    }
    printf("Determinent: %f" , determinent);
}