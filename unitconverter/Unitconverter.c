#include<stdio.h>
#include<math.h>

struct temp {
	float cel;
	float far;
	float kel;
};

struct metric{
	float millimeter;
	float centimeter;
	float meter;
	float kilometer;
	float milliliter;
	float liter;
	float milligram;
	float gram;
	float kilogram;
};

struct imperial{
        float inches;
        float feet;
	float miles;
	float ounces;
	float cups;
	float quarts;
	float gallons;
	float pounds;
};


int main()
{
	struct temp *tempPtr, t;
	struct metric;
	struct imperial;
	char choice;
	printf("This program converts units\n\n");

Options:
	printf("Select an option for conversion\n\n");
	printf("(A) TEMPERATURE CONVERTER\n (B) IMPERIAL/METRIC CONVERTER\n");
	scanf("%c",&choice);

//Temperature conversion
if (choice == 'A' || 'a') {
choice_temp:
	printf("Select a conversion\n");
	printf("(A) fARENHEIGHT TO CELCIUS\n (B) CELSIUS TO FARENHEIGHT\n (C) CELCIUS TO KELVIN\n (D) KELVIN TO CELCIUS\n (E) FARENHEIGHT TO KELVIN\n (F) KELVIN TO FARENHEIGHT\n");
	printf("Input choice: \n");
	scanf("%c",&choice);
	if (choice == 'A' || 'a') {
		Printf("Farenheight to Celcius\n Input temperature: \n");
		scanf("%f",&tempPtr->far);
		printf("%f Farenheight is %f Celcius \n",tempPtr->far, far_to_cel(tempPtr->t.far));
	}
	else if (choice == 'B' || 'b') {
		Printf("Celcius to Farenheight\n Input temperature: \n");
                scanf("%f",&tempPtr->cel);
                printf("%f Celcius is %f Farenheight \n",tempPtr->cel, cel_to_far(tempPtr->cel));
	}
	else if (choice == 'C' || 'c') {
		Printf("Celcius to Kelvin\n Input temperature: \n");
                scanf("%f",&tempPtr->cel);
                printf("%f Celcius is %f Kelvin \n",tempPtr->cel, cel_to_kel(tempPtr->cel));
	}
	else if (choice == 'D' || 'd') {
		Printf("Kelvin to Celcius\n Input temperature: \n");
                scanf("%f",&tempPtr->kel);
                printf("%f Kelvin is %f Celcius \n",tempPtr->kel, kel_to_cel(tempPtr->kel));
	}
	else if (choice == 'E' || 'e') {
		Printf("Farenheight to Kelvin\n Input temperature: \n");
                scanf("%f",&tempPtr->far);
                printf("%f Farenheight is %f Kelvin \n",tempPtr->far, far_to_kel(tempPtr->far));
	}
	else if (choice == 'F' || 'f') {
		Printf("Kelvin to Farenheight\n Input temperature: \n");
                scanf("%f",&tempPtr->kel);
                printf("%f Kelvin is %f Farenheight \n",tempPtr->kel, kel_to_far(tempPtr->kel));
	}
	else {printf("Invalid input, please selce valid option\n");goto choice_temp;}
}

// Metric/Imperial conversion
else if (choice == 'B' || 'b'){

}
else {printf("Invalid option, please select one of the conversion options\n"); goto Options;}
}
//Temperature conversions
float cel_to_kel(struct temp t)
{
	return (t.cel + 273.15);
}

float kel_to_cel (struct temp t){
	return (t.kel - 273.15);
}

float cel_to_far (struct temp t){
	return (t.cel*(9/5)+32);
}

float far_to_cel (struct temp t){
	return ((t.far-32)*(5/9));
}

float far_to_kel (struct temp t){
	return ((t.far-32)*(5/9)+273.15);
}

float kel_to_far (struct temp t){
	return ((t.kel-273.15)*(9/5)+32);
}
//Metric to imperial distance conversions
float millimeter_to_imperial (struct metric m,struct imperial imp){
	imp.inches = (m.millimeter * 0.03937);
	imp.feet = (m.millimeter * 0.0032810);
	imp.miles = (m.millimeter * 0.0000006214);
	printf("%f millimeters is:\n %f inches\n %f feet\n %f miles\n", m.millimeter, imp.inches, imp.feet, imp.miles);
}
float centimeter_to_imperial (struct metric m,struct imperial imp){
	imp.inches = (m.centimeter * 0.3937);
	imp.feet = (m.centimeter * 0.032810);
    imp.miles = (m.centimeter * 0.000006214);
    printf("%f centimeters is:\n %f inches\n %f feet\n %f miles\n", m.centimeter, imp.inches, imp.feet, imp.miles);
}
float meter_to_imperial (struct metric m, struct imperial imp){
	imp.inches = (m.meter * 39.37);
	imp.feet = (m.meter * 3.28);
    imp.miles = (m.meter * 0.0006214);
    printf("%f meters is: \n %f inches\n %f feet\n %f miles\n", m.centimeter, imp.inches, imp.feet, imp.miles);
}
float kilometer_to_imperial (struct metric m, struct imperial imp){
	imp.inches = (m.kilometer * 39370.08);  
    imp.feet = (m.kilometer * 3280.84);     
    imp.miles = (m.kilometer * 0.6214);  
    printf("%f Kilometers is:\n %f inches\n %f feet\n %f miles\n", m.kilometer, imp.inches, imp.feet, imp.miles); 
}
//Metric to imperial mass conversions
float milligram_to_imperial (struct metric m,struct imperial imp){
	imp.ounces = (m.milligram * 0.00003527);    
    imp.pounds = (m.milligram * 0.000002205);  
    printf("%f milligrams is:\n %f ounces\n %f pounds\n", m.milligram, imp.ounces, imp.pounds); 
}
float gram_to_imperial (struct metric m,struct imperial imp){
	imp.ounces = (m.gram * 0.03527);
    imp.pounds = (m.gram * 0.002205);
    printf("%f grams is:\n %f ounces\n %f pounds\n", m.gram, imp.ounces, imp.pounds); 
}
float kilogram_to_imperial (struct metric m,struct imperial imp){
	imp.ounces = (m.kilogram * 35.27);
    imp.pounds = (m.kilogram * 2.20);
    printf("%f kilograms is:\n %f ounces\n %f pounds\n", m.kilogram, imp.ounces, imp.pounds); 
}
//Metric to imperial Liquid conversions
float millileter_to_imperial (struct metric m,struct imperial imp){
	imp.quarts = (m.milliliter * 0.0008799);
    imp.gallons = (m.milliliter * 0.000220);
    printf("%f milliliters is:\n %f quarts\n %f gallons\n", m.milliliter, imp.quarts, imp.gallons); 
}
float liter_to_imperial (struct metric m,struct imperial imp){
	imp.quarts = (m.liter * 0.8799);
    imp.gallons = (m.liter * 0.220);
    printf("%f liters is:\n %f quarts\n %f gallons\n", m.milligram, imp.quarts, imp.gallons); 
}
// Imperial to metric distance conversions
float inches_to_metric(struct metric m,struct imperial imp){
	m.millimeter = (imp.inches * 25.4);
	m.centimeter = (imp.inches * 2.54);
	m.meter = (imp.inches * 0.0254);
	m.kilometer = (imp.inches * 0.0000254);
	printf("%f Inches is:\n %f millimeters\n %f centimeters\n %f meters\n %f kilometers\n", imp.inches, m.millimeter, m.centimeter, m.meter, m.kilometer);
} 
float feet_to_metric(struct metric m,struct imperial imp){
	m.millimeter = (imp.feet * 304.8);
	m.centimeter = (imp.feet * 30.48);
	m.meter = (imp.feet * 0.3048);
	m.kilometer = (imp.feet * 0.0003048);
	printf("%f Feet is:\n %f millimeters\n %f centimeters\n %f meters\n %f kilometers\n", imp.feet, m.millimeter, m.centimeter, m.meter, m.kilometer);
}
float miles_to_metric(struct metric m,struct imperial imp){
	m.millimeter = (imp.miles * 1609344.00);
	m.centimeter = (imp.miles * 160934.40);
	m.meter = (imp.miles * 1609.34);
	m.kilometer = (imp.miles * 1.61);
	printf("%f Miles is:\n %f millimeters\n %f centimeters\n %f meters\n %f kilometers\n", imp.miles, m.millimeter, m.centimeter, m.meter, m.kilometer);
}
//Imperial to metric mass conversions
float ounces_to_metric(struct metric m,struct imperial imp){
	m.milligram = (imp.ounces * 28,349.52);    
    m.gram = (imp.ounces * 28.35);  
    m.kilogram = (imp.ounces * 0.02835); 
    printf("%f Ounces is:\n %f milligrams\n %f grams\n %f kilograms\n", imp.ounces, m.milligram, m.gram, m.kilogram);
}
float pounds_to_metric(struct metric m,struct imperial imp){
	m.milligram = (imp.pounds * 453,592.37);    
    m.gram = (imp.pounds * 453.59);  
    m.kilogram = (imp.pounds * 0.4536); 
    printf("%f Pounds is:\n %f milligrams\n %f grams\n %f kilograms\n", imp.pounds, m.milligram, m.gram, m.kilogram);
}
//Imperial to metric liquid conversions
float quarts_to_metric(struct metric m,struct imperial imp){
	m.milliliter= (imp.quarts * 1,136.52);
    m.liter = (imp.quarts * 1.14);
    printf("%f Quarts is:\n %f millileters\n %f liters\n", imp.quarts, m.milliliter, m.liter); 
}
float gallons_to_metric(struct metric m,struct imperial imp){
	m.milliliter= (imp.gallons * 4,546.09);
    m.liter = (imp.gallons * 4.55);
    printf("%f Gallons is:\n %f millileters\n %f liters\n", imp.gallons, m.milliliter, m.liter); 
}
