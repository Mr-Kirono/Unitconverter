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
	int choice;
	int quit = 0;
	char exit;
	printf("This program converts units\n");
	while (quit == 0)
	{
		printf("Select a conversion option\n");
		printf("(1) TEMPERATURE CONVERTER | (2) IMPERIAL/METRIC UNIT CONVERTER\n");
		scanf("%d",&choice);
		printf("%d\n",choice);
		if (choice == 1){
			printf("TEMPERATURE CONVERTER\nPlease select a conversion option. || OR press 'q' to quit\n");
			printf("(1) CELCIUS TO FARENHEIT | (2) FARENHEIT TO CELCIUS\n(3) CELCIUS TO KELVIN    | (4) KELVIN TO CELCIUS\n(5) FARENHEIT TO KELVIN  | (6) KELVIN TO FARENHEIT\n");
			scanf("%d%c",&choice,&exit);
			if (exit == 'q' || 'Q')
			{
				quit = 1;
				choice = 0;
			}
			switch (choice)
			{
			case 0:
				printf("Bye bye\n");
				break;
			case 1:
				printf("(1) CELCIUS TO FARENHEIT\n");
				printf("Input temperature\n");
				scanf("%f",&t1.cel);
				printf("%f Celcius is %f Farenheight\n",t1.cel,cel_to_far (t1));
				break;
			case 2:
				printf("(2) FARENHEIT TO CELCIUS\n");
				printf("Input temperature\n");
				scanf("%f",&t1.far);
				printf("%f Farenheight is %f Celcius\n",t1.far,far_to_cel (t1));
				break;
			case 3:
				printf("(3) CELCIUS TO KELVIN\n");
				printf("Input temperature\n");
				scanf("%f",&t1.cel);
				printf("%f Celcius is %f Kelvin\n",t1.cel,cel_to_kel (t1));
				break;
			case 4:
				printf("(4) KELVIN TO CELCIUS\n");
				printf("Input temperature\n");
				scanf("%f",&t1.kel);
				printf("%f Kelvin is %f Celcius\n",t1.kel,kel_to_cel (t1));				
				break;
			case 5:
				printf("(5) FARENHEIT TO KELVIN\n");
				printf("Input temperature\n");
				scanf("%f",&t1.far);
				printf("%f Farenheight is %f Kelvin\n",t1.far,far_to_kel (t1));
				break;
			case 6:
				printf("(6) KELVIN TO FARENHEIT\n");
				printf("Input temperature\n");
				scanf("%f",&t1.kel);
				printf("%f Kelvin is %f Farenheight\n",t1.kel,kel_to_far (t1));
				break;															
			default:
				printf("Invalid input please select one of the provided options.\n");
				break;
			}
		}
		else if (choice == 2)
		{
			printf("IMPERIAL/METRIC UNIT CONVERTER\nPlease select a conversion option. || OR press 'q' to quit\n");
			printf("(1) IMPERIAL TO METRIC CONVERTER | (2) METRIC TO IMPERIAL CONVERTER\n");
			scanf("%d%c",&choice,&exit);
			if (choice == 1){
				printf("IMPERIAL TO METRIC CONVERTER\n");
				printf("Select a conversion\n(1)CONVERT LIQUID UNITS | (2)CONVERT UNITS OF MASS\n(3) CONVERT UNITS OF LENGTH/DISTANCE\n");
				scanf("%d",&choice);
				switch (choice)
				{
				case 1:
					printf("UNITS OF LIQUID CONVERTER\n");
					printf("Select a conversion\n(1) QUARTS TO MILLILITERS | (2) QUARTS TO LITERS\n(3) GALLONS TO MILLILITERS | (4) GALLONS TO LITERS\n");
					scanf("%d",&choice);
						switch (choice)
						{
						case 1:
							printf("QUARTS TO MILLILITERS\n");
							printf("Input measurement:\n");
							scanf("%f",&imp1.quarts);
							printf("%f Quarts is %f Milliliters\n",imp1.quarts,quarts_to_milliliter(imp1));
							break;
						case 2:
							printf("QUARTS TO LITERS\n");
							printf("Input measurement:\n");
							scanf("%f",&imp1.quarts);
							printf("%f Quarts is %f Liters\n",imp1.quarts,quarts_to_liter(imp1));
							break;				
						case 3:
							printf("GALLONS TO MILLILITERS\n");
							printf("Input measurement:\n");
							scanf("%f",&imp1.gallons);
							printf("%f Gallons is %f Milliliters\n",imp1.gallons,gallons_to_milliliter(imp1));
							break;
						case 4:
							printf("GALLONS TO LITERS\n");
							printf("Input measurement:\n");
							scanf("%f",&imp1.gallons);
							printf("%f Gallons is %f Liters\n",imp1.gallons,gallons_to_liter(imp1));
							break;							
						default:
							printf("Invalid input please select one of the provided options.\n");
							break;
						}
					break;
				case 2:
					printf("UNIT OF MASS CONVERTER\n");
					printf("Select a conversion\n(1) OUNCES TO MILLIGRAMS | (2) OUNCES TO GRAMS\n(3) OUNCES TO KILOGRAMS | (4) POUNDS TO MILLIGRAMS\n(5) POUNDS TO GRAMS | (6) POUNDS TO KILOGRAMS\n");
					scanf("%d",&choice);
					switch (choice)
					{
					case 1:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.ounces);
						printf("\n");
						break;
					case 2:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.ounces);
						printf("\n");
						break;
					case 3:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.ounces);
						printf("\n");
						break;
					case 4:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.pounds);
						printf("\n");
						break;
					case 5:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.pounds);
						printf("\n");
						break;
					case 6:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.pounds);
						printf("\n");
						break;																									
					default:
						printf("Invalid input please select one of the provided options.\n");
						break;
					}
					break;				
				case 3:
					printf("UNITS OF DISTANCE/LENGTH CONVERTER\n");
					printf("Select a conversion:\n(1)INCHES TO MILLIMETERS | (2)INCHES TO CENTIMETERS | (3)INCHES TO METERS\n(4)FEET TO MILLIMETERS | (5)FEET TO CENTIMETERS | (6)FEET TO METERS\n(7)MILES TO METERS | (8)MILES TO KILOMETERS\n");
					scanf("%d",&choice);
					switch (choice)
					{
					case 1:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.inches);
						printf("\n");
						break;
					case 2:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.inches);
						printf("\n");
						break;
					case 3:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.inches);
						printf("\n");
						break;
					case 4:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.feet);
						printf("\n");
						break;
					case 5:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.feet);
						printf("\n");
						break;
					case 6:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.feet);
						printf("\n");
						break;
					case 7:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.miles);
						printf("\n");
						break;
					case 8:
						printf("\n");
						printf("\n");
						scanf("%f",&imp1.miles);
						printf("\n");
						break;																																									
					default:
						printf("Invalid input please select one of the provided options.\n");
						break;
					}
					break;
				default:
					printf("Invalid input please select one of the provided options.\n");
					break;
				}
			}
			else if (choice == 2){
				printf("METRIC TO IMPERIAL CONVERTER\n");
				printf("Select a conversion\n(1)CONVERT LIQUID UNITS | (2)CONVERT UNITS OF MASS\n(3) CONVERT UNITS OF LENGTH/DISTANCE\n");
				scanf("%d",&choice);
				switch (choice)
				{
				case 1:
					printf("UNITS OF LIQUID CONVERTER\n");
					printf("Select a conversion:(1)(2)(3)(4)\n");
					scanf("%d",&choice);
					switch (choice)
					{
					case 1:
						/* code */
						break;
					
					default:
						break;
					}
					break;
				case 2:
					printf("UNIT OF MASS CONVERTER\n");
					printf("Select a conversion:(1)(2)(3)(4)(5)(6)\n");
					scanf("%d",&choice);
					switch (choice)
					{
					case 1:
						/* code */
						break;
					
					default:
						break;
					}
					break;					
					break;				
				case 3:
					printf("UNITS OF DISTANCE/LENGTH CONVERTER\n");
					printf("Select a conversion:(1)(2)(3)(4)(5)(6)(7)(8)(9)(10)\n");
					scanf("%d",&choice);	
					switch (choice)
					{
					case 1:
						/* code */
						break;
					
					default:
						break;
					}
					break;									
					break;
				default:
					printf("Invalid input please select one of the provided options.\n");
					break;
				}				
			}
			else {printf("Invalid input, please enter one of the provided options.\n");}
			
		}
		else{printf("Invalid input, please input either '1' or '2'\n");}
	}
	quit=1;
}
	
//Temperature conversions
float cel_to_kel(struct temp t){
	return (t.cel + 273.15);
}

float kel_to_cel (struct temp t){
	return (t.kel - 273.15);
}

float cel_to_far (struct temp t){
	return ((t.cel*1.8)+32);
}

float far_to_cel (struct temp t){
	return ((t.far-32)*(0.5556));
}

float far_to_kel (struct temp t){
	return ((t.far-32)*(0.5556)+273.15);
}

float kel_to_far (struct temp t){
	return ((t.kel-273.15)*(1.8)+32);
}
//Metric to imperial distance conversions
float millimeter_to_inches (struct metric m){
	return (m.millimeter * 0.03937);
}
float millimeter_to_feet (struct metric m){
	return (m.millimeter * 0.0032810);
}
float centimeter_to_inches (struct metric m){
	return (m.centimeter * 0.3937);
}
float centimeter_to_feet (struct metric m){
	return (m.centimeter * 0.032810);
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