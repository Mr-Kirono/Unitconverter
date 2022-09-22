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
struct choice{
	char choice;
};
//Temperature conversions
float cel_to_kel(struct temp t);
float kel_to_cel (struct temp t);
float cel_to_far (struct temp t);
float far_to_cel (struct temp t);
float far_to_kel (struct temp t);
float kel_to_far (struct temp t);
//Metric to imperial distance conversions
float millimeter_to_inches (struct metric m);
float millimeter_to_feet (struct metric m);
float millimeter_to_miles (struct metric m);
float centimeter_to_inches (struct metric m);
float centimeter_to_feet (struct metric m);
float centimeter_to_miles (struct metric m);
float meter_to_inches (struct metric m);
float meter_to_feet (struct metric m);
float meter_to_miles (struct metric m);
float kilometer_to_inches (struct metric m);
float kilometer_to_feet (struct metric m);
float kilometer_to_miles (struct metric m);
//Metric to imperial mass conversions
float milligram_to_ounce (struct metric m);
float milligram_to_pounds (struct metric m);
float gram_to_ounce (struct metric m);
float gram_to_pound (struct metric m);
float kilogram_to_ounce (struct metric m);
float kilogram_to_pounds (struct metric m);
//Metric to imperial Liquid conversions
float milliliter_to_quarts (struct metric m);
float milliliter_to_gallons (struct metric m);
float liter_to_quarts (struct metric m);
float liter_to_gallon (struct metric m);
// Imperial to metric distance conversions
float inches_to_millimeters (struct imperial imp);
float inches_to_centimeters (struct imperial imp);
float inches_to_meters (struct imperial imp);
float inches_to_kilometers (struct imperial imp);
float feet_to_millimeters (struct imperial imp);
float feet_to_centimeters (struct imperial imp);
float feet_to_meters (struct imperial imp);
float feet_to_kilometers (struct imperial imp);
float miles_to_millimeters (struct imperial imp);
float miles_to_centimeters (struct imperial imp);
float miles_to_meters (struct imperial imp);
float miles_to_kilometers (struct imperial imp);
//Imperial to metric mass conversions
float ounces_to_milligram(struct imperial imp);
float ounces_to_grams(struct imperial imp);
float ounces_to_kilogram(struct imperial imp);
float pounds_to_milligram(struct imperial imp);
float pounds_to_grams(struct imperial imp);
float pounds_to_kilogram(struct imperial imp);
//Imperial to metric liquid conversions
float quarts_to_milliliter(struct imperial imp);
float quarts_to_liter(struct imperial imp);
float gallons_to_milliliter(struct imperial imp);
float gallons_to_liter(struct imperial imp);

int main(){
	struct temp t1;
	struct metric m1;
	struct imperial imp1;
	struct choice *ch1,*ch2,*ch3,*ch4,*ch5,*ch6,*ch7,*ch8;
	int x = 0;
	printf("This program converts units\n\n");
	Options:
		printf("Select an option for conversion\n\n");
		printf("(A) TEMPERATURE CONVERTER\n (B) IMPERIAL/METRIC CONVERTER\n");
		scanf("%c",&ch1->choice);
		//Temperature conversion
		if (ch1 == 'A' || 'a') {
		choice_temp:
			printf("Select a conversion\n");
			printf("(A) FARENHEIGHT TO CELCIUS | (B) CELSIUS TO FARENHEIGHT\n(C) CELCIUS TO KELVIN | (D) KELVIN TO CELCIUS\n(E) FARENHEIGHT TO KELVIN | (F) KELVIN TO FARENHEIGHT\n");
			printf("Or input 'Q' to go back to previous menu.\n");
			printf("Input choice: \n");
			scanf("%c",&ch2->choice);
			if (ch2 == 'A' || 'a') {
				choice_a:
					printf("Farenheight to Celcius\n Input temperature: \n");
					scanf("%f %c",&t1.far,&ch2->choice);
						if (ch2 == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Farenheight is %f Celcius \n",t1.far, far_to_cel(t1));goto choice_a;}
			}
			else if (ch1 == 'B' || 'b') {
				choice_b:
					Printf("Celcius to Farenheight\n Input temperature: \n");
					scanf("%f %c",&t1.cel,&ch3->choice);
						if (ch3 == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Celcius is %f Farenheight \n",t1.cel, cel_to_far(t1));goto choice_b;}
			}
			else if (ch1 == 'C' || 'c') {
				choice_c:
					Printf("Celcius to Kelvin\n Input temperature: \n");
					scanf("%f %c",&t1.cel,&ch4->choice);
						if (ch4 == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Celcius is %f Kelvin \n",t1.cel, cel_to_kel(t1));goto choice_c;}
			}
			else if (ch1 == 'D' || 'd') {
				choice_d:
					Printf("Kelvin to Celcius\n Input temperature: \n");
					scanf("%f %c",&t1.kel,&ch5->choice);
						if (ch5 == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Farenheight is %f Celsius \n",t1.far, far_to_cel(t1));goto choice_d;}
			}
			else if (ch1 == 'E' || 'e') {
				choice_e:
					Printf("Farenheight to Kelvin\n Input temperature: \n");
					scanf("%f %c",&t1.far,&ch6->choice);
						if (ch6 == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Farenheight is %f Kelvin \n",t1.far, far_to_kel(t1));goto choice_e;}
			}
			else if (ch1 == 'F' || 'f') {
				choice_f:
					Printf("Kelvin to Farenheight\n Input 'Q' to go back to previous menu\n Input temperature: \n");
					scanf("%f %c",&t1.kel,&ch7->choice);
						if (ch7 == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Kelvin is %f Farenheight \n",t1.kel, kel_to_far(t1));goto choice_f;}
			}
			else if (ch1 == 'Q'||'q'){goto Options;}
			else {printf("Invalid input, please select a valid option\n");goto choice_temp;}
		}
		// Metric/Imperial conversion
		else if (ch1 == 'B' || 'b'){
			choice_unit:
				printf("Select a conversion\n");
				printf("(A) METRIC LENGTH TO IMPERIAL LENGTH | (B) IMPERIAL LENGTH TO METRIC LENGTH\n(C) METRIC MASS TO IMPERIAL MASS | (D) IMPERIAL MASS TO METRIC MASS\n(E) METRIC LIQUID TO IMPERIAL LIQUID | (F) IMPERIAL LIQUID TO METRIC LIQUID\n");
				printf("Or Input 'Q' to go back to previous menu\n");
				printf("Input choice: \n");
				scanf("%c",&ch8->choice);
				if (ch8 == 'A' || 'a') {
					unit_a:
						printf("(A) METRIC LENGTH TO IMPERIAL LENGTH\n");
						printf("Inputs will be converted into ALL Imperial equivalents\nSelect a conversion\n");
						printf("(1) MILLIMETER TO IMPERIAL | (2) CENTIMETER TO IMPERIAL\n(3) METER TO IMPERIAL | (4) KILOMETER TO IMPERIAL\n");
						printf("Or Input 'Q' to go back to previous menu\n");
						printf("Input choice: \n");
						scanf("%c %d",&ch8->choice,&x);
						if (ch8 == 'Q' || 'q'){goto choice_unit;}
						switch (x)
						{
						case 1:
							printf("Input number of millimeters: ");
							scanf("%f",&m1.millimeter);
							printf("%f millimeters is: \n%f inches\n",m1.millimeter,millimeter_to_inches(m1));
							printf("%f feet\n",millimeter_to_feet(m1));
							printf("%f miles\n",millimeter_to_miles(m1));
							break;
						case 2:
							printf("Input number of centimeters: ");
							scanf("%f",&m1.centimeter);
							printf("%f centimeters is: \n%f inches\n",m1.centimeter,centimeter_to_inches(m1));
							printf("%f feet\n",centimeter_to_feet(m1));
							printf("%f miles\n",centimeter_to_miles(m1));
							break;
						case 3:
							printf("Input number of meters: ");
							scanf("%f",&m1.meter);
							printf("%f meters is: \n%f inches\n",m1.meter,meter_to_inches(m1));
							printf("%f feet\n",meter_to_feet(m1));
							printf("%f miles\n",meter_to_miles(m1));
							break;
						case 4:
							printf("Input number of kilometers: ");
							scanf("%f",&m1.kilometer);
							printf("%f kilometers is: \n%f inches\n",kilometer_to_inches(m1));
							printf("%f feet\n",kilometer_to_feet(m1));
							printf("%f miles\n",kilometer_to_miles(m1));
							break;
						default:
							printf("Invalid option, please pick one of the provided options\n");
							goto unit_a;
							break;
						}
				}
				else if (ch1 == 'B' ||'b'){
					unit_b:
						printf("(B) IMPERIAL LENGTH TO METRIC LENGTH\n");
						printf("Inputs will be converted into ALL Metric equivalents\nSelect a conversion\n");
						printf("(1) INCH TO METRIC | (2) FEET TO METRIC \n(3) MILES TO METRIC\n");
						printf("Or Input 'Q' to go back to previous menu\n");
						printf("Input choice: \n");
						scanf("%c %d",&ch1->choice,&x);
						if (ch1 == 'Q' || 'q'){goto choice_unit;}
						switch (x)
						{
						case 1:
							printf("Input number of Inches: ");
							scanf("%f",&imp1.inches);
							printf("%f Inches is: \n%f millimeters\n",imp1.inches,inches_to_millimeters(imp1));
							printf("%f centimeters\n",inches_to_centimeters(imp1));
							printf("%f meters\n",inches_to_meters(imp1));
							printf("%f kilometers\n",inches_to_kilometers(imp1));
							break;
						case 2:
							printf("Input number of feet: ");
							scanf("%f",&imp1.feet);
							printf("%f feet is: \n%f millimeters\n",imp1.feet,feet_to_millimeters(imp1));
							printf("%f centimeters\n",feet_to_centimeters(imp1));
							printf("%f meters\n",feet_to_meters(imp1));
							printf("%f kilometers\n",feet_to_kilometers(imp1));
							break;
						case 3:
							printf("Input number of miles: ");
							scanf("%f",&imp1.miles);
							printf("%f miles is: \n%f inches\n",imp1.miles,miles_to_millimeters(imp1));
							printf("%f centimeters\n",miles_to_centimeters(imp1));
							printf("%f meters\n",miles_to_meters(imp1));
							printf("%f kilometers\n",miles_to_kilometers(imp1));
							break;
						default:
							printf("Invalid option, please pick one of the provided options\n");
							goto unit_b;
							break;
						}
				}
				else if (choice == 'C' || 'c'){
					unit_c:
						printf("(C) METRIC MASS TO IMPERIAL MASS\n");
						printf("Inputs will be converted into ALL Imperial equivalents\nSelect a conversion\n");
						printf("(1) MILLIGRAM TO IMPERIAL MASS | (2) GRAM TO IMPERIAL MASS\n(3) KILOGRAM TO IMPERIAL MASS\n");
						printf("Or Input 'Q' to go back to previous menu\n");
						printf("Input choice: \n");
						scanf("%c %d",&choice,&x);
						if (choice == 'Q' || 'q'){goto choice_unit;}
						switch (x)
						{
						case 1:
							printf("Input number of milligrams: ");
							scanf("%f",&m1.milligram);
							printf("%f milligrams is: \n%f ounces\n",m1.milligram,milligram_to_ounce(m1));
							printf("%f pounds\n",milligram_to_pounds(m1));
							break;
						case 2:
							printf("Input number of grams: ");
							scanf("%f",&m1.gram);
							printf("%f grams is: \n%f ounces\n",m1.gram,gram_to_ounce(m1));
							printf("%f pounds\n",gram_to_pound(m1));
							break;
						case 3:
							printf("Input number of kilograms: ");
							scanf("%f",&m1.kilogram);
							printf("%f kilograms is: \n%f ounces\n",m1.kilogram,kilogram_to_ounce(m1));
							printf("%f pounds\n",kilogram_to_pounds(m1));
							break;
						default:
							printf("Invalid option, please pick one of the provided options\n");
							goto unit_c;
							break;
						}				
				}
				else if (choice == 'D' || 'd'){
					unit_d:
						printf("(D) IMPERIAL MASS TO METRIC MASS\n");					
						printf("Inputs will be converted into ALL Metric equivalents\nSelect a conversion\n");
						printf("(1) OUNCES TO METRIC MASS | (2) POUNDS TO METRIC MASS\n");
						printf("Or Input 'Q' to go back to previous menu\n");
						printf("Input choice: \n");
						scanf("%c %d",&choice,&x);
						if (choice == 'Q' || 'q'){goto choice_unit;}
						switch (x)
						{
						case 1:
							printf("Input number of Ounces: ");
							scanf("%f",&imp1.ounces);
							printf("%f ounces is: \n%f milligrams\n",imp1.ounces,ounces_to_milligram(imp1));
							printf("%f grams\n",ounces_to_grams(imp1));
							printf("%f kilograms\n",ounces_to_kilogram(imp1));
							break;
						case 2:
							printf("Input number of Pounds: ");
							scanf("%f",&imp1.pounds);
							printf("%f Pounds is: \n%f milligrams\n",imp1.pounds,pounds_to_milligram(imp1));
							printf("%f grams\n",pounds_to_grams(imp1));
							printf("%f kilograms\n",pounds_to_kilogram(imp1));
							break;
						default:
							printf("Invalid option, please pick one of the provided options\n");
							goto unit_d;
							break;
						}				
				}
				else if (choice == 'E' || 'e'){
					unit_e:
						printf("(E) METRIC LIQUID TO IMPERIAL LIQUID\n");				
						printf("Inputs will be converted into ALL Imperial equivalents\nSelect a conversion\n");
						printf("(1) MILLILITERS TO IMPERIAL LIQUID | (2) LITERS TO IMPERIAL LIQUID\n");
						printf("Or Input 'Q' to go back to previous menu\n");
						printf("Input choice: \n");
						scanf("%c %d",&choice,&x);
						if (choice == 'Q' || 'q'){goto choice_unit;}
						switch (x)
						{
						case 1:
							printf("Input number of Milliliters: ");
							scanf("%f",&m1.milliliter);
							printf("%f millimeters is: \n%f quarts\n",m1.milliliter,milliliter_to_quarts(m1));
							printf("%f gallons\n",milliliter_to_gallons(m1));
							break;
						case 2:
							printf("Input number of Liters: ");
							scanf("%f",&m1.liter);
							printf("%f Liters is: \n%f quarts\n",m1.liter,liter_to_quarts(m1));
							printf("%f gallons\n",liter_to_gallon(m1));
							break;
						default:
							printf("Invalid option, please pick one of the provided options\n");
							goto unit_e;
							break;
						}					
				}
				else if (choice == 'F' || 'f'){
					unit_f:
						printf("(F) IMPERIAL LIQUID TO METRIC LIQUID\n");				
						printf("Inputs will be converted into ALL Metric equivalents\nSelect a conversion\n");
						printf("(1) QUARTS TO METRIC LIQUID | (2) GALLONS TO METRIC LIQUID\n");
						printf("Or Input 'Q' to go back to previous menu\n");
						printf("Input choice: \n");
						scanf("%c %d",&choice,&x);
						if (choice == 'Q' || 'q'){goto choice_unit;}
							switch (x)
						{
						case 1:
							printf("Input number of Quarts: ");
							scanf("%f",&imp1.quarts);
							printf("%f Quarts is: \n%f milliliters\n",imp1.quarts,quarts_to_milliliter(imp1));
							printf("%f liters\n",quarts_to_liter(imp1));
							break;
						case 2:
							printf("Input number of Gallons: ");
							scanf("%f",&imp1.gallons);
							printf("%f Gallons is: \n%f milliliters\n",imp1.gallons,gallons_to_milliliter(imp1));
							printf("%f liters\n",gallons_to_liter(imp1));
							break;
						default:
							printf("Invalid option, please pick one of the provided options\n");
							goto unit_f;
							break;
						}					
				}
				else if (choice == 'Q'||'q'){goto Options;}
				else {printf("Invalid choice, please select a valid option\n");goto choice_unit;}
		}
		else {printf("Invalid option, please select one of the conversion options\n"); goto Options;}
return 0;
}
//Temperature conversions
float cel_to_kel(struct temp t){
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
float millimeter_to_inches (struct metric m){
	return (m.millimeter * 0.03937);
}
float millimeter_to_feet (struct metric m){
	return (m.millimeter * 0.0032810);
}
float millimeter_to_miles (struct metric m){
	return (m.millimeter * 0.0000006214);
}
float centimeter_to_inches (struct metric m){
	return (m.centimeter * 0.3937);
}
float centimeter_to_feet (struct metric m){
	return (m.centimeter * 0.032810);
}
float centimeter_to_miles (struct metric m){
	return (m.centimeter * 0.000006214);
}
float meter_to_inches (struct metric m){
	return (m.meter * 39.37);
}
float meter_to_feet (struct metric m){
	return (m.meter * 3.28);
}
float meter_to_miles (struct metric m){
	return (m.meter * 0.0006214);
}
float kilometer_to_inches (struct metric m){
	return (m.kilometer * 39370.08);
}
float kilometer_to_feet (struct metric m){
	return (m.kilometer * 3280.84); 
}
float kilometer_to_miles (struct metric m){
	return (m.kilometer * 0.6214); 
}
//Metric to imperial mass conversions
float milligram_to_ounce (struct metric m){
	return  (m.milligram * 0.00003527);
}
float milligram_to_pounds (struct metric m){
	return (m.milligram * 0.000002205); 
}
float gram_to_ounce (struct metric m){
	return (m.gram * 0.03527); 
}
float gram_to_pound (struct metric m){
	return (m.gram * 0.002205);
}
float kilogram_to_ounce (struct metric m){
	return  (m.kilogram * 35.27);
}
float kilogram_to_pounds (struct metric m){
	return (m.kilogram * 2.20);
}
//Metric to imperial Liquid conversions
float milliliter_to_quarts (struct metric m){
	return  (m.milliliter * 0.0008799);
}
float milliliter_to_gallons (struct metric m){
	return  (m.milliliter * 0.000220);
}
float liter_to_quarts (struct metric m){
	return  (m.liter * 0.8799);
}
float liter_to_gallon (struct metric m){
	return  (m.liter * 0.220);
}
// Imperial to metric distance conversions
float inches_to_millimeters (struct imperial imp){
	return  (imp.inches * 25.4);
}
float inches_to_centimeters (struct imperial imp){
	return  (imp.inches * 2.54);
}
float inches_to_meters (struct imperial imp){
	return  (imp.inches * 0.0254);
}
float inches_to_kilometers (struct imperial imp){
	return  (imp.inches * 0.0000254);
}
float feet_to_millimeters (struct imperial imp){
	return  (imp.feet * 304.8);
}
float feet_to_centimeters (struct imperial imp){
	return  (imp.feet * 30.48);
}
float feet_to_meters (struct imperial imp){
	return  (imp.feet * 0.3048);
}
float feet_to_kilometers (struct imperial imp){
	return  (imp.feet * 0.0003048);
}
float miles_to_millimeters (struct imperial imp){
	return  (imp.miles * 1609344.00);
}
float miles_to_centimeters (struct imperial imp){
	return  (imp.miles * 160934.40);
}
float miles_to_meters (struct imperial imp){
	return  (imp.miles * 1609.34);
}
float miles_to_kilometers (struct imperial imp){
	return  (imp.miles * 1.61);
}
//Imperial to metric mass conversions
float ounces_to_milligram(struct imperial imp){
	return (imp.ounces * 28349.52);
}
float ounces_to_grams(struct imperial imp){
	return (imp.ounces * 28.35);
}
float ounces_to_kilogram(struct imperial imp){
	return (imp.ounces * 0.02835);
}
float pounds_to_milligram(struct imperial imp){
	return (imp.pounds * 453592.37);
}
float pounds_to_grams(struct imperial imp){
	return (imp.pounds * 453.59);
}
float pounds_to_kilogram(struct imperial imp){
	return (imp.pounds * 0.4536);
}
//Imperial to metric liquid conversions
float quarts_to_milliliter(struct imperial imp){
	return (imp.quarts * 1136.52);
}
float quarts_to_liter(struct imperial imp){
	return (imp.quarts * 1.14);
}
float gallons_to_milliliter(struct imperial imp){
	return (imp.gallons * 4546.09);
}
float gallons_to_liter(struct imperial imp){
	return (imp.gallons * 4.55);
}