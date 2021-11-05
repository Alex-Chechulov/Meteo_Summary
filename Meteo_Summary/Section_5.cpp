#include "Section_5.h"

//–аздел 5
									//ќтличительна€ группа раздела 5
String^ Struct_555()
{
	return "555 ";
}

//1EsnT'gT'g
									//1 Ц отличительна€ цифра группы
									//≈ Ц состо€ние поверхности почвы при отсутствии снежного покрова 
									//snT'gT'g Ц температура подстилающей поверхности в срок наблюдени€ 
									//sn Ц знак температуры
									//T'gT'g Ц значение в градусах ÷ельси€ с точностью до одного градуса
String^ Struct_1EsnTgTg(String^ Ok_Temperature_of_soil, int Ok_Condition_of_soil_surfase)
{
	String^ Summary;
	int Temperature_of_soil = Convert::ToInt32(Ok_Temperature_of_soil);
	String^ Sign = "0";
	if (Temperature_of_soil < 0) {
		Sign = "1";
		Temperature_of_soil = -Temperature_of_soil;
	}

	Summary += "1";
	if (Ok_Condition_of_soil_surfase < 10)Summary += Convert::ToString(Ok_Condition_of_soil_surfase);
	else Summary += "/";
	if (Temperature_of_soil < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_soil);
	else Summary += Sign + Convert::ToString(Temperature_of_soil);
	Summary += " ";
	return Summary;
}

//5snT24T24T24
						//5 Ц отличительна€ цифра группы
						//snT24T24T24 Ц средн€€ температура воздуха за прошедшие сутки, заканчивающиес€ в срок передачи группы
						//sn Ц знак температуры
						//T24T24T24 Ц значение в градусах ÷ельси€ с точностью до дес€тых долей градуса
String ^ Struct_5snT24T24T24(String^ Ok_Average_of_air_temperature)
{
	String^ Summary;
	double Average_of_air_temperature = Convert::ToDouble(Ok_Average_of_air_temperature);
	String^ Sign = "0";
	if (Average_of_air_temperature < 0) {
		Sign = "1";
		Average_of_air_temperature = -Average_of_air_temperature;
	}

	Summary += "5";
	if (Average_of_air_temperature < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Average_of_air_temperature * 10.0);
	else if (Average_of_air_temperature < 10.0) Summary += Sign + "0" + Convert::ToString(Average_of_air_temperature * 10.0);
	else Summary += Sign + Convert::ToString(Average_of_air_temperature * 10.0);
	Summary += " ";

	return Summary;
}

//52snT2T2
						//52 Ц отличительные цифры группы
						//snT2T2 Ц минимальна€ температура воздуха за ночь на высоте 2 см от поверхности почвы
						//sn Ц знак температуры
						//T2T2 Ц значение в градусах ÷ельси€ с точностью до одного градуса
String^ Struct_52snT2T2(String^ Ok_Min_air_temperature_for_night)
{
	String^ Summary;
	int Min_air_temperature_for_night = Convert::ToInt32(Ok_Min_air_temperature_for_night);
	String^ Sign = "0";
	if (Min_air_temperature_for_night < 0) {
		Sign = "1";
		Min_air_temperature_for_night = -Min_air_temperature_for_night;
	}

	Summary += "52";
	if (Min_air_temperature_for_night < 10.0) Summary += Sign + "0" + Convert::ToString(Min_air_temperature_for_night);
	else Summary += Sign + Convert::ToString(Min_air_temperature_for_night);
	Summary += " ";
	return Summary;
}

//530f12f12
						//530 Ц отличительные цифры группы
						//f12f12 Ц максимальна€ скорость ветра при порывах за прошедшие полусутки, заканчивающиес€ в срок передачи группы
String^ Struct_530f12f12(String^ Ok_Maximum_of_wind_speed)
{
	String^ Summary;
	int Maximum_of_wind_speed = Convert::ToInt32(Ok_Maximum_of_wind_speed);

	Summary += "530";
	if (Maximum_of_wind_speed < 10)
		Summary += "0" + Convert::ToString(Maximum_of_wind_speed);
	else Summary += Convert::ToString(Maximum_of_wind_speed);
	Summary += " ";
	return Summary;
}

//7R24R24R24/
						//7 Ц отличительна€ цифра группы
						//R24R24R24 Ц количество осадков, выпавших за сутки
						//  / Ц коса€ черта (ставитс€ об€зательно, чтобы группа была п€тизначной, как все остальные)
double Rainfall_per_day1;
double Rainfall_per_day;
String^ Struct_7R24R24R24(String^ Ok_Rainfall_per_day)
{
	String^ Summary;
	Rainfall_per_day1 = Convert::ToDouble(Ok_Rainfall_per_day);
	Rainfall_per_day = Rainfall_per_day1;
	if (Rainfall_per_day < 1)Rainfall_per_day = Rainfall_per_day * 10 + 990;
	else if (Rainfall_per_day <= 989)Rainfall_per_day = (int)Rainfall_per_day;
	else if (Rainfall_per_day > 989)Rainfall_per_day = 989;


	Summary += "7";
	if (Rainfall_per_day < 10)Summary += "00" + Convert::ToString(Rainfall_per_day);
	else if (Rainfall_per_day < 100)Summary += "0" + Convert::ToString(Rainfall_per_day);
	else Summary += Convert::ToString(Rainfall_per_day);
	Summary += "/ ";
	return Summary;
}

//88R24R24R24
						//88 Ц отличительные цифры группы
						//R24R24R24 Ц количество осадков за сутки, составл€ющее 30 мм и более
String^ Struct_88R24R24R24()
{
	String^ Summary;
	if (Rainfall_per_day1 >= 30)
	{
		Summary += "88";
		if (Rainfall_per_day < 100)Summary += "0" + Convert::ToString(Rainfall_per_day);
		else Summary += Convert::ToString(Rainfall_per_day);
		Summary += " ";
	}
	return Summary;
}

