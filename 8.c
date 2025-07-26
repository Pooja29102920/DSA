void main( ) 
{  
float amount, rateOfInterest, simpleInterest; 
int noOfYears;  
printf("Give the Principal Sum : "); 
scanf("%f",&amount); 
printf("Give the Rate of Interest : "); 
scanf("%f",&rateOfInterest); 
printf("Give the Number of years : "); 
scanf("%d",&noOfYears);  
simpleInterest=amount*noOfYears*rateOfInterest / 100 ;  
printf("The simple Interest on amount %7.2f for %d years at the rate %4.2f is %6.2f", amount, 
noOfYears, rateOfInterest, simpleInterest); 
} 

