 // Find the Roots of a Quadratic Equation
 
 #include<stdio.h>
 #include<math.h>
	int main ()
	{
    double a,b,c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant= b*b-4*a*c;
 
               // condition for real and different roots
    if(discriminant>0)
   { 
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("root1 = %.2f and root2 = %.2f", root1, root2);
   }
    else
   {
  	 printf("Imaginary number");
   } 
  return 0;
}
