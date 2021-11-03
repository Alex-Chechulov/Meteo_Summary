#include "Section_3.h"
#include "Section_1.h"

String^ Struct_333()
{
	return "333 ";
}
String^ Struct_1snTxTxTx(String^ Ok_Max_temperature_of_day)
{
	String^ Summary;
	double Max_temperature_of_day = Convert::ToDouble(Ok_Max_temperature_of_day);
	String^ Sign = "0";
	if (Max_temperature_of_day < 0) {
		Sign = "1";
		Max_temperature_of_day = -Max_temperature_of_day;
	}

	Summary += "1";
	if (Max_temperature_of_day < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Max_temperature_of_day * 10.0);
	else if (Max_temperature_of_day < 10.0) Summary += Sign + "0" + Convert::ToString(Max_temperature_of_day * 10.0);
	else Summary += Sign + Convert::ToString(Max_temperature_of_day * 10.0);
	Summary += " ";
	return Summary;
}
String^ Struct_2snTnTnTn(String^ Ok_Min_temperature_of_day)
{
	String^ Summary;
	double Min_temperature_of_day = Convert::ToDouble(Ok_Min_temperature_of_day);
	String^ Sign = "0";
	if (Min_temperature_of_day < 0) {
		Sign = "1";
		Min_temperature_of_day = -Min_temperature_of_day;
	}

	Summary += "2";
	if (Min_temperature_of_day < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Min_temperature_of_day * 10.0);
	else if (Min_temperature_of_day < 10.0) Summary += Sign + "0" + Convert::ToString(Min_temperature_of_day * 10.0);
	else Summary += Sign + Convert::ToString(Min_temperature_of_day * 10.0);
	Summary += " ";
	return Summary;
}
int Ok_Condition_of_soil_surfase = 0;
String^ Struct_3EsnTgTg(String^ Condition_of_soil_surfase, String^ Ok_Temperature_of_night_soil)
{
	String^ Summary;
	if (Condition_of_soil_surfase == "Сухая (без трещин, заметного количества пыли или сыпучего песка)")Ok_Condition_of_soil_surfase = 0;
	else if (Condition_of_soil_surfase == "Влажная (без луж)")Ok_Condition_of_soil_surfase = 1;
	else if (Condition_of_soil_surfase == "Сырая (есть малые или большие лужи, вода застаивается на поверхности)")Ok_Condition_of_soil_surfase = 2;
	else if (Condition_of_soil_surfase == "Затоплена водой")Ok_Condition_of_soil_surfase = 3;
	else if (Condition_of_soil_surfase == "Замерзшая")Ok_Condition_of_soil_surfase = 4;
	else if (Condition_of_soil_surfase == "Покрыта льдом (но без снега или тающего снега) при этом льдом покрыто не более 1 балла видимой окрестности станции")Ok_Condition_of_soil_surfase = 5;
	else if (Condition_of_soil_surfase == "Покрыта сухой пылью или сыпучим песком частично")Ok_Condition_of_soil_surfase = 6;
	else if (Condition_of_soil_surfase == "Покрыта сухой пылью или сыпучим песком полностью (тонкий слой)")Ok_Condition_of_soil_surfase = 7;
	else if (Condition_of_soil_surfase == "Покрыта сухой пылью или сыпучим песком умеренный или толстый слой")Ok_Condition_of_soil_surfase = 8;
	else if (Condition_of_soil_surfase == "Сухая чрезвычайно (с трещинами)")Ok_Condition_of_soil_surfase = 9;
	else if (Condition_of_soil_surfase == "Не определено ")Ok_Condition_of_soil_surfase = 10;

	int Temperature_of_night_soil = Convert::ToInt32(Ok_Temperature_of_night_soil);
	String^ Sign = "0";
	if (Temperature_of_night_soil < 0) {
		Sign = "1";
		Temperature_of_night_soil = -Temperature_of_night_soil;
	}

	Summary += "3";
	if (Ok_Condition_of_soil_surfase < 10)Summary += Convert::ToString(Ok_Condition_of_soil_surfase);
	else Summary += "/";
	if (Temperature_of_night_soil < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_night_soil);
	else Summary += Sign + Convert::ToString(Temperature_of_night_soil);
	Summary += " ";

	return Summary;
}
String^ Struct_4Esss(String^ Condition_of_snow, String^ Ok_Height_of_snow)
{
	String^ Summary;
	int Ok_Condition_of_snow;
	if (Condition_of_snow == "Лед более 1 балла")Ok_Condition_of_snow = 0;
	else if (Condition_of_snow == "Мокрый или слежавшийся снег (со льдом или без него) менее 5 баллов")Ok_Condition_of_snow = 1;
	else if (Condition_of_snow == "Мокрый или слежавшийся снег (со льдом или без него) 5–9 баллов")Ok_Condition_of_snow = 2;
	else if (Condition_of_snow == "Мокрый или слежавшийся снег (со льдом или без него) 10 баллов равномерный слой")Ok_Condition_of_snow = 3;
	else if (Condition_of_snow == "Мокрый или слежавшийся снег (со льдом или без него) 10 баллов неравномерный слой")Ok_Condition_of_snow = 4;
	else if (Condition_of_snow == "Сухой рассыпчатый снег (со льдом или без него) менее 5 баллов")Ok_Condition_of_snow = 5;
	else if (Condition_of_snow == "Сухой рассыпчатый снег (со льдом или без него) 5–9 баллов")Ok_Condition_of_snow = 6;
	else if (Condition_of_snow == "Сухой рассыпчатый снег (со льдом или без него) 10 баллов равномерный слой")Ok_Condition_of_snow = 7;
	else if (Condition_of_snow == "Сухой рассыпчатый снег (со льдом или без него) 10 баллов неравномерный слой")Ok_Condition_of_snow = 8;
	else if (Condition_of_snow == "Снег с глубокими сугробами заносами")Ok_Condition_of_snow = 9;
	else if (Condition_of_snow == "Не определено")Ok_Condition_of_snow = 10;

	int Height_of_snow;
	if (Ok_Height_of_snow == "!5")Height_of_snow = 997;
	else if (Ok_Height_of_snow == "->1")Height_of_snow = 998;
	else if (Ok_Height_of_snow == "/")Height_of_snow = 999;
	else Height_of_snow = Convert::ToInt32(Ok_Height_of_snow);


	Summary += "4";
	if (Ok_Condition_of_snow < 10)Summary += Convert::ToString(Ok_Condition_of_snow);
	else Summary += "/";
	if (Height_of_snow < 10)Summary += "00" + Convert::ToString(Height_of_snow);
	else if (Height_of_snow < 100)Summary += "0" + Convert::ToString(Height_of_snow);
	else Summary += Convert::ToString(Height_of_snow);
	Summary += " ";
	return Summary;
}
String^ Struct_55SSS(String^ Ok_Duration_of_sunshine)
{
	String^ Summary;
	double Duration_of_sunshine = Convert::ToDouble(Ok_Duration_of_sunshine);

	Summary += "55";
	if (Duration_of_sunshine < 1.0) Summary += "0" + "0" + Convert::ToString(Duration_of_sunshine * 10.0);
	else if (Duration_of_sunshine < 10.0) Summary += "0" + Convert::ToString(Duration_of_sunshine * 10.0);
	else Summary += Convert::ToString(Duration_of_sunshine * 10.0);
	Summary += " ";

	return Summary;
}
String^ Struct_8NsChshs(String^ Measurements_of_NGO, String^ Number_of_NGO, String^ Type_of_NGO)
{
	String^ Summary;
	if (Ok_Number_of_clouds != 0 && Ok_Number_of_clouds != 9 && Ok_Number_of_clouds != 10)
	{
		if (Measurements_of_NGO == "Да")
		{
			int Ok_Number_of_NGO;
			if (Number_of_NGO == "0 (облаков нет)")Ok_Number_of_NGO = 0;
			else if (Number_of_NGO == "1 или менее(но не 0)")Ok_Number_of_NGO = 1;
			else if (Number_of_NGO == "2–3")Ok_Number_of_NGO = 2;
			else if (Number_of_NGO == "4")Ok_Number_of_NGO = 3;
			else if (Number_of_NGO == "5")Ok_Number_of_NGO = 4;
			else if (Number_of_NGO == "6")Ok_Number_of_NGO = 5;
			else if (Number_of_NGO == "7–8")Ok_Number_of_NGO = 6;
			else if (Number_of_NGO == "9 или более(но не 10 есть просветы)")Ok_Number_of_NGO = 7;
			else if (Number_of_NGO == "10 (без просветов)")Ok_Number_of_NGO = 8;
			else if (Number_of_NGO == "Определить невозможно из - за тумана метели или других метеорологических явлений затрудняющих видимость")Ok_Number_of_NGO = 9;
			else if (Number_of_NGO == "Определить невозможно по другим причинам кроме указанных(кроме указаных ранее) или наблюдения не производились")Ok_Number_of_NGO = 10;


			int Ok_Type_of_NGO;
			if (Type_of_NGO == "Перистые")Ok_Type_of_NGO = 0;
			else if (Type_of_NGO == "Перисто-кучевые")Ok_Type_of_NGO = 1;
			else if (Type_of_NGO == "Перисто-слоистые")Ok_Type_of_NGO = 2;
			else if (Type_of_NGO == "Высококучевые")Ok_Type_of_NGO = 3;
			else if (Type_of_NGO == "Высокослоистые")Ok_Type_of_NGO = 4;
			else if (Type_of_NGO == "Слоисто-дождевые")Ok_Type_of_NGO = 5;
			else if (Type_of_NGO == "Слоисто-кучевые")Ok_Type_of_NGO = 6;
			else if (Type_of_NGO == "Слоистые")Ok_Type_of_NGO = 7;
			else if (Type_of_NGO == "Кучевые")Ok_Type_of_NGO = 8;
			else if (Type_of_NGO == "Кучево-дождевые")Ok_Type_of_NGO = 9;
			else if (Type_of_NGO == "Не определено")Ok_Type_of_NGO = 10;

			int Height_of_NGO;
			if (Height_of_cloud <= 1500)Height_of_NGO = Height_of_cloud / 30;
			else if (Height_of_cloud <= 9000)Height_of_NGO = Height_of_cloud / 300 + 50;
			else if (Height_of_cloud <= 21000)Height_of_NGO = Height_of_cloud / 1500 + 74;
			else Height_of_NGO = 89;
			if (Height_of_NGO >= 51 && Height_of_NGO <= 55)Height_of_NGO = 50;

			Summary += "8";
			if (Ok_Number_of_NGO < 10)Summary += Convert::ToString(Ok_Number_of_NGO);
			else Summary += "/";
			if (Ok_Type_of_NGO < 10)Summary += Convert::ToString(Ok_Type_of_NGO);
			else Summary += "/";
			Summary += Convert::ToString(Height_of_NGO);
			Summary += " ";
		}
	}
	return Summary;
}
