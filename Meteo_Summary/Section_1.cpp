#include "Section_1.h"

int Ok_6RRRtr = 0;
int Ok_7wwW1W2 = 0;
int Height_of_cloud = 0;
String^ iRixhVV(String^ Availability_6RRRtr, String^ Availability_7wwW1W2, String^ Type_of_station, String^ Ok_Cloud_height, String^ OkS_Visibility_range_cloud)
{


	String^ Summary;

	if (Availability_6RRRtr == "Включена в раздел 1 и 3")Ok_6RRRtr = 0;
	else if (Availability_6RRRtr == "Включена в раздел 1")Ok_6RRRtr = 1;
	else if (Availability_6RRRtr == "Включена в раздел 3")Ok_6RRRtr = 2;
	else if (Availability_6RRRtr == "Не включена (Осадков не было)")Ok_6RRRtr = 3;
	else if (Availability_6RRRtr == "Не включена (Количество осадков не измерялось)")Ok_6RRRtr = 4;

	
	if (Availability_7wwW1W2 == "Включена") Ok_7wwW1W2 = 1;
	else if (Availability_7wwW1W2 == "Не включена (Нет явлений подлежащих передаче)") Ok_7wwW1W2 = 2;
	else if (Availability_7wwW1W2 == "Не включена (Наблюдения не производились)") Ok_7wwW1W2 = 3;

	if (Type_of_station == "Обслуживаемая персоналом") Ok_7wwW1W2 += 0;
	else if (Type_of_station == "Автоматическая") Ok_7wwW1W2 += 3;

	
	if (Ok_Cloud_height != "/")
	{
		Height_of_cloud = Convert::ToInt32(Ok_Cloud_height);
		if (Height_of_cloud < 50)Ok_Cloud_height = "0";
		else if (Height_of_cloud <= 100)Ok_Cloud_height = "1";
		else if (Height_of_cloud <= 200)Ok_Cloud_height = "2";
		else if (Height_of_cloud <= 300)Ok_Cloud_height = "3";
		else if (Height_of_cloud <= 600)Ok_Cloud_height = "4";
		else if (Height_of_cloud <= 1000)Ok_Cloud_height = "5";
		else if (Height_of_cloud <= 1500)Ok_Cloud_height = "6";
		else if (Height_of_cloud <= 2000)Ok_Cloud_height = "7";
		else if (Height_of_cloud <= 2500)Ok_Cloud_height = "8";
		else if (Height_of_cloud > 2500)Ok_Cloud_height = "9";
	}

	double Visibility_range_cloud = Convert::ToDouble(OkS_Visibility_range_cloud);
	int Ok_Visibility_range_cloud = 0;
	if (Visibility_range_cloud <= 5.0)Ok_Visibility_range_cloud = 10 * Visibility_range_cloud;
	else if (Visibility_range_cloud <= 30.0)Ok_Visibility_range_cloud = 50 + Visibility_range_cloud;
	else if (Visibility_range_cloud <= 70.0)Ok_Visibility_range_cloud = (Visibility_range_cloud - 30) / 5 + 80;
	else if (Visibility_range_cloud > 70.0)Ok_Visibility_range_cloud = 89;

	Summary += Convert::ToString(Ok_6RRRtr);
	Summary += Convert::ToString(Ok_7wwW1W2);
	Summary += Ok_Cloud_height;
	if (Ok_Visibility_range_cloud < 10)Summary += "0" + Convert::ToString(Ok_Visibility_range_cloud);
	else Summary += Convert::ToString(Ok_Visibility_range_cloud);
	Summary += " ";
	return Summary;
}

int Ok_Number_of_clouds = 0;
int Speed_of_wind = 0;
String^ Nddff(String^ Number_of_clouds, String^ Ok_Direction_of_wind, String^ Ok_Speed_of_wind)
{
	String^ Summary;
	//String^ Ok_Number_of_clouds;
	if (Number_of_clouds == "0 (облаков нет)")Ok_Number_of_clouds =0;
	else if (Number_of_clouds == "1 или менее(но не 0)")Ok_Number_of_clouds = 1;
	else if (Number_of_clouds == "2–3")Ok_Number_of_clouds = 2;
	else if (Number_of_clouds == "4")Ok_Number_of_clouds = 3;
	else if (Number_of_clouds == "5")Ok_Number_of_clouds = 4;
	else if (Number_of_clouds == "6")Ok_Number_of_clouds = 5;
	else if (Number_of_clouds == "7–8")Ok_Number_of_clouds = 6;
	else if (Number_of_clouds == "9 или более(но не 10 есть просветы)")Ok_Number_of_clouds = 7;
	else if (Number_of_clouds == "10 (без просветов)")Ok_Number_of_clouds = 8;
	else if (Number_of_clouds == "Определить невозможно из - за тумана метели или других метеорологических явлений затрудняющих видимость")Ok_Number_of_clouds = 9;
	else if (Number_of_clouds == "Определить невозможно по другим причинам кроме указанных(кроме указаных ранее) или наблюдения не производились")Ok_Number_of_clouds = 10;

	

	int Direction_of_wind = Convert::ToInt32(Ok_Direction_of_wind);
	if (Direction_of_wind <= 4)Direction_of_wind = 360;
	Direction_of_wind = ((Direction_of_wind - 5) / 10) + 1;

	Speed_of_wind = Convert::ToInt32(Ok_Speed_of_wind);

	if (Ok_Number_of_clouds < 10)Summary += Convert::ToString(Ok_Number_of_clouds);
	else Summary += "/";
	if (Direction_of_wind < 10)
		Summary += "0" + Convert::ToString(Direction_of_wind);
	else Summary += Convert::ToString(Direction_of_wind);
	if (Speed_of_wind < 10)
		Summary += "0" + Convert::ToString(Speed_of_wind);
	else Summary += Convert::ToString(Speed_of_wind);
	Summary += " ";
	return Summary;
}

String^ Struct_1snTTT(String ^ Ok_Temperature_of_air)
{
	String^ Summary;
	double Temperature_of_air = Convert::ToDouble(Ok_Temperature_of_air);
	String^ Sign = "0";
	if (Temperature_of_air < 0) {
		Sign = "1";
		Temperature_of_air = -Temperature_of_air;
	}

	Summary += "1";
	if (Temperature_of_air < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Temperature_of_air * 10.0);
	else if (Temperature_of_air < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_air * 10.0);
	else Summary += Sign + Convert::ToString(Temperature_of_air * 10.0);
	Summary += " ";
	return Summary;
}
String^ Struct_2snTdTdTd(String^ Ok_Point_of_dew)
{
	String^ Summary;
	double Point_of_dew = Convert::ToDouble(Ok_Point_of_dew);
	String^ Sign = "0";
	if (Point_of_dew < 0) {
		Sign = "1";
		Point_of_dew = -Point_of_dew;
	}

	Summary += "2";
	if (Point_of_dew < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Point_of_dew * 10.0);
	else if (Point_of_dew < 10.0) Summary += Sign + "0" + Convert::ToString(Point_of_dew * 10.0);
	else Summary += Sign + Convert::ToString(Point_of_dew * 10.0);
	Summary += " ";
	return Summary;
}
String^ Struct_3PoPoPoPo(String^ Ok_Air_pressure_on_station)
{
	String^ Summary;
	double Air_pressure_on_station = Convert::ToDouble(Ok_Air_pressure_on_station);
	Air_pressure_on_station = Air_pressure_on_station - 1000;

	Summary += "3";
	if (Air_pressure_on_station < 1)Summary += "000" + Convert::ToString(Air_pressure_on_station * 10);
	else if (Air_pressure_on_station < 10)Summary += "00" + Convert::ToString(Air_pressure_on_station * 10);
	else if (Air_pressure_on_station < 100)Summary += "0" + Convert::ToString(Air_pressure_on_station * 10);
	else Summary += Convert::ToString(Air_pressure_on_station * 10);
	Summary += " ";
	return Summary;
}
String ^ Struct_4PPPP(String^ Ok_Air_pressure_on_sea_level)
{
	String^ Summary;
	double Air_pressure_on_sea_level = Convert::ToDouble(Ok_Air_pressure_on_sea_level);
	Air_pressure_on_sea_level = Air_pressure_on_sea_level - 1000;

	Summary += "4";
	if (Air_pressure_on_sea_level < 1)Summary += "000" + Convert::ToString(Air_pressure_on_sea_level * 10);
	else if (Air_pressure_on_sea_level < 10)Summary += "00" + Convert::ToString(Air_pressure_on_sea_level * 10);
	else if (Air_pressure_on_sea_level < 100)Summary += "0" + Convert::ToString(Air_pressure_on_sea_level * 10);
	else Summary += Convert::ToString(Air_pressure_on_sea_level * 10);
	Summary += " ";
	return Summary;
}

