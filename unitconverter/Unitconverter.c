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

int main(){
	struct temp t1;
	struct metric m1;
	struct imperial imp1;
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
			printf("(A) FARENHEIGHT TO CELCIUS | (B) CELSIUS TO FARENHEIGHT\n(C) CELCIUS TO KELVIN | (D) KELVIN TO CELCIUS\n(E) FARENHEIGHT TO KELVIN | (F) KELVIN TO FARENHEIGHT\n");
			printf("Or input 'Q' to go back to previous menu.\n");
			printf("Input choice: \n");
			scanf("%c",&choice);
			if (choice == 'A' || 'a') {
				choice_a:
					Printf("Farenheight to Celcius\n Input temperature: \n");
					scanf("%f %c",&t1.far,&choice);
						if (choice == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Farenheight is %f Celcius \n",t1.far, far_to_cel(t1));goto choice_a;}
			}
			else if (choice == 'B' || 'b') {
				choice_b:
					Printf("Celcius to Farenheight\n Input temperature: \n");
					scanf("%f %c",&t1.cel,&choice);
						if (choice == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Celcius is %f Farenheight \n",t1.cel, cel_to_far(t1));goto choice_b;}
			}
			else if (choice == 'C' || 'c') {
				choice_c:
					Printf("Celcius to Kelvin\n Input temperature: \n");
					scanf("%f %c",&t1.cel,&choice);
						if (choice == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Celcius is %f Kelvin \n",t1.cel, cel_to_kel(t1));goto choice_c;}
			}
			else if (choice == 'D' || 'd') {
				choice_d:
					Printf("Kelvin to Celcius\n Input temperature: \n");
					scanf("%f %c",&t1.kel,&choice);
						if (choice == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Farenheight is %f Celsius \n",t1.far, far_to_cel(t1));goto choice_d;}
			}
			else if (choice == 'E' || 'e') {
				choice_e:
					Printf("Farenheight to Kelvin\n Input temperature: \n");
					scanf("%f %c",&t1.far,&choice);
						if (choice == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Farenheight is %f Kelvin \n",t1.far, far_to_kel(t1));goto choice_e;}
			}
			else if (choice == 'F' || 'f') {
				choice_f:
					Printf("Kelvin to Farenheight\n Input 'Q' to go back to previous menu\n Input temperature: \n");
					scanf("%f %c",&t1.kel,&choice);
						if (choice == 'Q'||'q'){goto choice_temp;}
						else {printf("%f Kelvin is %f Farenheight \n",t1.kel, kel_to_far(t1));goto choice_f;}
			}
			else if (choice == 'Q'||'q'){goto Options;}
			else {printf("Invalid input, please select a valid option\n");goto choice_temp;}
		}
		// Metric/Imperial conversion
		else if (choice == 'B' || 'b'){
			choice_unit:
				printf("Select a conversion\n");
				printf("(A) METRIC LENGTH TO IMPERIAL LENGTH | (B) IMPERIAL LENGTH TO METRIC LENGTH\n(C) METRIC MASS TO IMPERIAL MASS | (D) IMPERIAL MASS TO METRIC MASS\n(E) METRIC LIQUID TO IMPERIAL LIQUID | (F) IMPERIAL LIQUID TO METRIC LIQUID\n");
				printf("Or Input 'Q' to go back to previous menu\n");
				printf("Input choice: \n");
				scanf("%c",&choice);
				if (choice == 'A' || 'a') {
					printf("(A) METRIC LENGTH TO IMPERIAL LENGTH\n");
					printf("Inputs will be converted into ALL Imperial equivalents\nSelect a conversion\n");
					printf("(A) MILLIMETER TO IMPERIAL | (B) CENTIMETER TO IMPERIAL\n(C) METER TO IMPERIAL | (D) KILOMETER TO IMPERIAL\n");
					printf("Or Input 'Q' to go back to previous menu\n");
					printf("Input choice: \n");
					scanf("%c",&choice);
				}
				else if (choice == 'B' ||'b'){
					printf("(B) IMPERIAL LENGTH TO METRIC LENGTH\n");
					printf("Inputs will be converted into ALL Metric equivalents\nSelect a conversion\n");
					printf("(A) INCH TO METRIC | (B) FEET TO METRIC \n(C) MILES TO METRIC\n");
					printf("Or Input 'Q' to go back to previous menu\n");
					printf("Input choice: \n");
					scanf("%c",&choice);
				}
				else if (choice == 'C' || 'c'){
					printf("(C) METRIC MASS TO IMPERIAL MASS\n");
					printf("Inputs will be converted into ALL Imperial equivalents\nSelect a conversion\n");
					printf("(A) MILLIGRAM TO IMPERIAL MASS | (B) GRAM TO IMPERIAL MASS\n(C) KILOGRAM TO IMPERIAL MASS\n");
					printf("Or Input 'Q' to go back to previous menu\n");
					printf("Input choice: \n");
					scanf("%c",&choice);
				}
				else if (choice == 'D' || 'd'){
					printf("(D) IMPERIAL MASS TO METRIC MASS\n");					
					printf("Inputs will be converted into ALL Metric equivalents\nSelect a conversion\n");
					printf("(A) OUNCES TO METRIC MASS | (B) POUNDS TO METRIC MASS\n");
					printf("Or Input 'Q' to go back to previous menu\n");
					printf("Input choice: \n");
					scanf("%c",&choice);
				}
				else if (choice == 'E' || 'e'){
					printf("(E) METRIC LIQUID TO IMPERIAL LIQUID\n");				
					printf("Inputs will be converted into ALL Imperial equivalents\nSelect a conversion\n");
					printf("(A) MILLILITERS TO IMPERIAL LIQUID | (B) LITERS TO IMPERIAL LIQUID\n");
					printf("Or Input 'Q' to go back to previous menu\n");
					printf("Input choice: \n");
					scanf("%c",&choice);
				}
				else if (choice == 'F' || 'f'){
					printf("(F) IMPERIAL LIQUID TO METRIC LIQUID\n");				
					printf("Inputs will be converted into ALL Metric equivalents\nSelect a conversion\n");
					printf("(A) QUARTS TO METRIC LIQUID | (B) GALLONS TO METRIC LIQUID\n");
					printf("Or Input 'Q' to go back to previous menu\n");
					printf("Input choice: \n");
					scanf("%c",&choice);
				}
				else if (choice == 'Q'||'q'){goto Options;}
				else {printf("Invalid choice, please select a valid option\n");goto choice_unit;}
		}
		else {printf("Invalid option, please select one of the conversion options\n"); goto Options;}
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
float millimeter_to_inches (struct metric m){
	return (m.millimeter * 0.03937);
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
