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
String^ Struct_9SРSPspsp(String^ Str_Additional_information_of_weather, String^ Str_Additional_characteristic_1, String^ Str_Additional_characteristic_2, String^ Str_Additional_characteristic_3)
{
	String^ Summary;
	int Additional_information_of_weather;
	if (Str_Additional_information_of_weather == "Отсутствует")Additional_information_of_weather = 0;
	else if (Str_Additional_information_of_weather == "Смерч разрушающей силы")Additional_information_of_weather = 1;
	else if (Str_Additional_information_of_weather == "Смерч вихрь характеристика (Mw) и направление (Da)")Additional_information_of_weather = 2;
	else if (Str_Additional_information_of_weather == "Шквал характеристика (sq) и направление (Dp)")Additional_information_of_weather = 3;
	else if (Str_Additional_information_of_weather == "Общая метель её эволюция (S8) слабая или умеренная")Additional_information_of_weather = 4;
	else if (Str_Additional_information_of_weather == "Общая метель её эволюция (S8) сильная")Additional_information_of_weather = 5;
	else if (Str_Additional_information_of_weather == "Град, его максимальный диаметр (RR)")Additional_information_of_weather = 6;
	else if (Str_Additional_information_of_weather == "Гололёдно-изморозевые отложения их диаметр (RR) Гололёд")Additional_information_of_weather = 7;
	else if (Str_Additional_information_of_weather == "Гололёдно-изморозевые отложения их диаметр (RR) Изморозь")Additional_information_of_weather = 8;
	else if (Str_Additional_information_of_weather == "Гололёдно-изморозевые отложения их диаметр (RR) Сложные отложения")Additional_information_of_weather = 9;
	else if (Str_Additional_information_of_weather == "Гололёдно-изморозевые отложения их диаметр (RR) Отложения мокрого снега")Additional_information_of_weather = 10;
	else if (Str_Additional_information_of_weather == "Температура воды (TwTw) на поверхности моря в купальный сезон")Additional_information_of_weather = 11;
	else if (Str_Additional_information_of_weather == "Высота свежевыпавшего снега (ss) за истекшие сутки")Additional_information_of_weather = 12;
	else if (Str_Additional_information_of_weather == "Снежная мгла в срок наблюдения")Additional_information_of_weather = 13;
	else if (Str_Additional_information_of_weather == "Снежная мгла между сроками наблюдения")Additional_information_of_weather = 14;
	else if (Str_Additional_information_of_weather == "Облачность над горами и перевалами состояние (Nm) эволюция (n3)")Additional_information_of_weather = 15;
	else if (Str_Additional_information_of_weather == "Облачность, туман, дымка внизу состояние (Nv) и эволюция этих явлений (n4)")Additional_information_of_weather = 16;

	if (Additional_information_of_weather != 0)
	{
		String^ Ok_Additional_information_of_weather;
		double Hail_diameter, Fresh_snow_height;
		int Sea_temperature;

		int Ok_Str_Additional_characteristic_1, Ok_Str_Additional_characteristic_2;
		switch (Additional_information_of_weather)
		{
		case 1:
			Ok_Additional_information_of_weather = "6119";
			break;
		case 2:
			if (Str_Additional_characteristic_1 == "Водяной(ые) смерч(и) в радиусе 3 км от станции")Ok_Str_Additional_characteristic_1 = 0;
			else if (Str_Additional_characteristic_1 == "Водяной(ые) смерч(и) на расстоянии более 3 км от станции")Ok_Str_Additional_characteristic_1 = 1;
			else if (Str_Additional_characteristic_1 == "Смерч (и) на суше в радиусе 3 км от станции")Ok_Str_Additional_characteristic_1 = 2;
			else if (Str_Additional_characteristic_1 == "Смерч (и) на суше на расстоянии более 3 км от станции")Ok_Str_Additional_characteristic_1 = 3;
			else if (Str_Additional_characteristic_1 == "Вихрь(и) слабой интенсивности")Ok_Str_Additional_characteristic_1 = 4;
			else if (Str_Additional_characteristic_1 == "Вихрь(и) умеренной интенсивности")Ok_Str_Additional_characteristic_1 = 5;
			else if (Str_Additional_characteristic_1 == "Вихрь(и) сильной интенсивности")Ok_Str_Additional_characteristic_1 = 6;
			else if (Str_Additional_characteristic_1 == "Пыльный(е) вихрь(и) слабой интенсивности")Ok_Str_Additional_characteristic_1 = 7;
			else if (Str_Additional_characteristic_1 == "Пыльный(е) вихрь(и) умеренной интенсивности")Ok_Str_Additional_characteristic_1 = 8;
			else if (Str_Additional_characteristic_1 == "Пыльный(е) вихрь(и) сильной интенсивности")Ok_Str_Additional_characteristic_1 = 9;

			if (Str_Additional_characteristic_2 == "На станции")Ok_Str_Additional_characteristic_2 = 0;
			else if (Str_Additional_characteristic_2 == "СВ")Ok_Str_Additional_characteristic_2 = 1;
			else if (Str_Additional_characteristic_2 == "В")Ok_Str_Additional_characteristic_2 = 2;
			else if (Str_Additional_characteristic_2 == "ЮВ")Ok_Str_Additional_characteristic_2 = 3;
			else if (Str_Additional_characteristic_2 == "Ю")Ok_Str_Additional_characteristic_2 = 4;
			else if (Str_Additional_characteristic_2 == "ЮЗ")Ok_Str_Additional_characteristic_2 = 5;
			else if (Str_Additional_characteristic_2 == "З")Ok_Str_Additional_characteristic_2 = 6;
			else if (Str_Additional_characteristic_2 == "СЗ")Ok_Str_Additional_characteristic_2 = 7;
			else if (Str_Additional_characteristic_2 == "С")Ok_Str_Additional_characteristic_2 = 8;
			else if (Str_Additional_characteristic_2 == "Все направления")Ok_Str_Additional_characteristic_2 = 9;

			Ok_Additional_information_of_weather = "19" +
				Convert::ToString(Ok_Str_Additional_characteristic_1) +
				Convert::ToString(Ok_Str_Additional_characteristic_2);
			break;
		case 3:
			if (Str_Additional_characteristic_1 == "Штиль или слабый ветер, за которыми последовал шквал")Ok_Str_Additional_characteristic_1 = 0;
			else if (Str_Additional_characteristic_1 == "Штиль или слабый ветер, за которыми последовала серия шквалов")Ok_Str_Additional_characteristic_1 = 1;
			else if (Str_Additional_characteristic_1 == "Порывистый ветер, за которым последовал шквал")Ok_Str_Additional_characteristic_1 = 2;
			else if (Str_Additional_characteristic_1 == "Порывистый ветер, за которым последовала серия шквалов")Ok_Str_Additional_characteristic_1 = 3;
			else if (Str_Additional_characteristic_1 == "Шквал, за которым последовал порывистый ветер")Ok_Str_Additional_characteristic_1 = 4;
			else if (Str_Additional_characteristic_1 == "Порывистый ветер, временами шквалы")Ok_Str_Additional_characteristic_1 = 5;
			else if (Str_Additional_characteristic_1 == "Шквал в поле зрения, приближающийся к станции")Ok_Str_Additional_characteristic_1 = 6;
			else if (Str_Additional_characteristic_1 == "Линия шквалов")Ok_Str_Additional_characteristic_1 = 7;
			else if (Str_Additional_characteristic_1 == "Шквал с песчаным позёмком или с пыльной/песчаной бурей ")Ok_Str_Additional_characteristic_1 = 8;
			else if (Str_Additional_characteristic_1 == "Линия шквалов с песчаным позёмком или с пыльной/песчаной бурей ")Ok_Str_Additional_characteristic_1 = 9;

			if (Str_Additional_characteristic_2 == "На станции")Ok_Str_Additional_characteristic_2 = 0;
			else if (Str_Additional_characteristic_2 == "СВ")Ok_Str_Additional_characteristic_2 = 1;
			else if (Str_Additional_characteristic_2 == "В")Ok_Str_Additional_characteristic_2 = 2;
			else if (Str_Additional_characteristic_2 == "ЮВ")Ok_Str_Additional_characteristic_2 = 3;
			else if (Str_Additional_characteristic_2 == "Ю")Ok_Str_Additional_characteristic_2 = 4;
			else if (Str_Additional_characteristic_2 == "ЮЗ")Ok_Str_Additional_characteristic_2 = 5;
			else if (Str_Additional_characteristic_2 == "З")Ok_Str_Additional_characteristic_2 = 6;
			else if (Str_Additional_characteristic_2 == "СЗ")Ok_Str_Additional_characteristic_2 = 7;
			else if (Str_Additional_characteristic_2 == "С")Ok_Str_Additional_characteristic_2 = 8;
			else if (Str_Additional_characteristic_2 == "Все направления")Ok_Str_Additional_characteristic_2 = 9;

			Ok_Additional_information_of_weather = "18" +
				Convert::ToString(Ok_Str_Additional_characteristic_1) +
				Convert::ToString(Ok_Str_Additional_characteristic_2);
			break;
		case 4:
		case 5:
			if (Str_Additional_characteristic_1 == "Окончилась до срока наблюдения")Ok_Str_Additional_characteristic_1 = 0;
			else if (Str_Additional_characteristic_1 == "Ослабевала")Ok_Str_Additional_characteristic_1 = 1;
			else if (Str_Additional_characteristic_1 == "Без изменений")Ok_Str_Additional_characteristic_1 = 2;
			else if (Str_Additional_characteristic_1 == "Усиливалась")Ok_Str_Additional_characteristic_1 = 3;
			else if (Str_Additional_characteristic_1 == "Возобновилась после перерыва продолжительностью <=30 мин")Ok_Str_Additional_characteristic_1 = 4;
			else if (Str_Additional_characteristic_1 == "Высота распространения метели уменьшалась")Ok_Str_Additional_characteristic_1 = 5;
			else if (Str_Additional_characteristic_1 == "Высота распространения метели увеличивалась")Ok_Str_Additional_characteristic_1 = 6;
			else if (Str_Additional_characteristic_1 == "Возобновилась после перерыва продолжительностью >30 мин")Ok_Str_Additional_characteristic_1 = 7;

			Ok_Additional_information_of_weather = Convert::ToString(Additional_information_of_weather + 294) +
				Convert::ToString(Ok_Str_Additional_characteristic_1);
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Ok_Additional_information_of_weather = Convert::ToString(Additional_information_of_weather + 27);
			if (Additional_information_of_weather == 6)Ok_Additional_information_of_weather = "32";
			Hail_diameter = Convert::ToDouble(Str_Additional_characteristic_3);
			if (Hail_diameter <= 0.1)Ok_Additional_information_of_weather += "97";
			else if (Hail_diameter <= 0.6)Ok_Additional_information_of_weather += Convert::ToString(Hail_diameter * 10 + 90);
			else if (Hail_diameter <= 9)Ok_Additional_information_of_weather += "0" + Convert::ToString((int)Hail_diameter);
			else if (Hail_diameter <= 55)Ok_Additional_information_of_weather += Convert::ToString((int)Hail_diameter);
			else if (Hail_diameter <= 400)Ok_Additional_information_of_weather += Convert::ToString((int)Hail_diameter / 10 + 50);
			else Ok_Additional_information_of_weather += "98";
			break;
		case 11:
			Ok_Additional_information_of_weather = "25";
			Sea_temperature = Convert::ToInt32(Str_Additional_characteristic_3);
			if (Sea_temperature < 10)Ok_Additional_information_of_weather += "0" + Convert::ToString(Sea_temperature);
			else Ok_Additional_information_of_weather += Convert::ToString(Sea_temperature);
			break;
		case 12:
			Ok_Additional_information_of_weather = "31";
			Fresh_snow_height = Convert::ToDouble(Str_Additional_characteristic_3);
			if (Fresh_snow_height <= 0.1)Ok_Additional_information_of_weather += "97";
			else if (Fresh_snow_height <= 0.6)Ok_Additional_information_of_weather += Convert::ToString(Fresh_snow_height * 10 + 90);
			else if (Fresh_snow_height <= 9)Ok_Additional_information_of_weather += "0" + Convert::ToString((int)Fresh_snow_height);
			else if (Fresh_snow_height <= 55)Ok_Additional_information_of_weather += Convert::ToString((int)Fresh_snow_height);
			else if (Fresh_snow_height <= 400)Ok_Additional_information_of_weather += Convert::ToString((int)Fresh_snow_height / 10 + 50);
			else Ok_Additional_information_of_weather += "98";
			break;
		case 13:
			Ok_Additional_information_of_weather += "6110";
			break;
		case 14:
			Ok_Additional_information_of_weather += "6510";
			break;
		case 15:
			if (Str_Additional_characteristic_1 == "Все горы открыты (или имеется небольшое количество облаков) ")Ok_Str_Additional_characteristic_1 = 0;
			else if (Str_Additional_characteristic_1 == "Горы частично закрыты разрозненными облаками (видно не более половины вершин гор) ")Ok_Str_Additional_characteristic_1 = 1;
			else if (Str_Additional_characteristic_1 == "Все склоны гор закрыты облаками, вершины гор и перевалы открыты")Ok_Str_Additional_characteristic_1 = 2;
			else if (Str_Additional_characteristic_1 == "Горы открыты со стороны наблюдателя (или имеется небольшое количество облаков), но за горами – сплошная стена облаков")Ok_Str_Additional_characteristic_1 = 3;
			else if (Str_Additional_characteristic_1 == "Над горами низко нависла облачность и вершины гор и склоны открыты (или имеется небольшое количество облаков) ")Ok_Str_Additional_characteristic_1 = 4;
			else if (Str_Additional_characteristic_1 == "Над горами низко нависла облачность и вершины гор частично закрыты облаками или полосами падения осадков")Ok_Str_Additional_characteristic_1 = 5;
			else if (Str_Additional_characteristic_1 == "Все вершины гор закрыты облаками, перевалы открыты, склоны открыты или закрыты")Ok_Str_Additional_characteristic_1 = 6;
			else if (Str_Additional_characteristic_1 == "Горы в основном закрыты облаками (видны лишь отдельные вершины гор, а склоны закрыты полностью или частично)")Ok_Str_Additional_characteristic_1 = 7;
			else if (Str_Additional_characteristic_1 == "Все вершины гор, перевалы и склоны закрыты облаками")Ok_Str_Additional_characteristic_1 = 8;
			else if (Str_Additional_characteristic_1 == "Горы не видны из-за темноты, тумана, метели, осадков и т.д. ")Ok_Str_Additional_characteristic_1 = 9;

			if (Str_Additional_characteristic_2 == "Без изменений")Ok_Str_Additional_characteristic_2 = 0;
			else if (Str_Additional_characteristic_2 == "Развитие облачности кучевых форм")Ok_Str_Additional_characteristic_2 = 1;
			else if (Str_Additional_characteristic_2 == "Подъём облачности медленный")Ok_Str_Additional_characteristic_2 = 2;
			else if (Str_Additional_characteristic_2 == "Подъём облачности быстрый")Ok_Str_Additional_characteristic_2 = 3;
			else if (Str_Additional_characteristic_2 == "Подъём облачности облачность поднялась и стала слоистой")Ok_Str_Additional_characteristic_2 = 4;
			else if (Str_Additional_characteristic_2 == "Снижение облачности медленное")Ok_Str_Additional_characteristic_2 = 5;
			else if (Str_Additional_characteristic_2 == "Снижение облачности быстрое")Ok_Str_Additional_characteristic_2 = 6;
			else if (Str_Additional_characteristic_2 == "Развитие слоистости облачности")Ok_Str_Additional_characteristic_2 = 7;
			else if (Str_Additional_characteristic_2 == "Развитие слоистости и снижение облачности")Ok_Str_Additional_characteristic_2 = 8;
			else if (Str_Additional_characteristic_2 == "Быстрые изменения")Ok_Str_Additional_characteristic_2 = 9;

			Ok_Additional_information_of_weather += "50" +
				Convert::ToString(Ok_Str_Additional_characteristic_1) +
				Convert::ToString(Ok_Str_Additional_characteristic_2);
			break;
		case 16:
			if (Str_Additional_characteristic_1 == "Нет ни облаков, ни дымки")Ok_Str_Additional_characteristic_1 = 0;
			else if (Str_Additional_characteristic_1 == "Дымка, над нею ясно")Ok_Str_Additional_characteristic_1 = 1;
			else if (Str_Additional_characteristic_1 == "Клочки тумана")Ok_Str_Additional_characteristic_1 = 2;
			else if (Str_Additional_characteristic_1 == "Слой тумана слабого")Ok_Str_Additional_characteristic_1 = 3;
			else if (Str_Additional_characteristic_1 == "Слой тумана сильного")Ok_Str_Additional_characteristic_1 = 4;
			else if (Str_Additional_characteristic_1 == "Разрозненные (изолированные) облака небольшое количество")Ok_Str_Additional_characteristic_1 = 5;
			else if (Str_Additional_characteristic_1 == "Разрозненные (изолированные) облака ниже облаков − туман")Ok_Str_Additional_characteristic_1 = 6;
			else if (Str_Additional_characteristic_1 == "Разрозненные (изолированные) облака большое количество")Ok_Str_Additional_characteristic_1 = 7;
			else if (Str_Additional_characteristic_1 == "Сплошная облачность")Ok_Str_Additional_characteristic_1 = 8;
			else if (Str_Additional_characteristic_1 == "Наблюдения невозможны из-за плохой видимости")Ok_Str_Additional_characteristic_1 = 9;

			if (Str_Additional_characteristic_2 == "Изменений нет")Ok_Str_Additional_characteristic_2 = 0;
			else if (Str_Additional_characteristic_2 == "Уменьшение и повышение")Ok_Str_Additional_characteristic_2 = 1;
			else if (Str_Additional_characteristic_2 == "Уменьшение")Ok_Str_Additional_characteristic_2 = 2;
			else if (Str_Additional_characteristic_2 == "Повышение")Ok_Str_Additional_characteristic_2 = 3;
			else if (Str_Additional_characteristic_2 == "Уменьшение и снижение")Ok_Str_Additional_characteristic_2 = 4;
			else if (Str_Additional_characteristic_2 == "Увеличение и повышение")Ok_Str_Additional_characteristic_2 = 5;
			else if (Str_Additional_characteristic_2 == "Снижение")Ok_Str_Additional_characteristic_2 = 6;
			else if (Str_Additional_characteristic_2 == "Увеличение")Ok_Str_Additional_characteristic_2 = 7;
			else if (Str_Additional_characteristic_2 == "Увеличение и снижение")Ok_Str_Additional_characteristic_2 = 8;
			else if (Str_Additional_characteristic_2 == "На станции туман или туман временами")Ok_Str_Additional_characteristic_2 = 9;
			Ok_Additional_information_of_weather += "51" +
				Convert::ToString(Ok_Str_Additional_characteristic_1) +
				Convert::ToString(Ok_Str_Additional_characteristic_1);
			break;
		default:
			break;
		}

		Summary += "9";
		Summary += Ok_Additional_information_of_weather;
		Summary += " ";


		return Summary;
	}
}
String^ Struct_9SРSPspsp_2(String^ Str_Additional_information_of_weather_2, String^ Ok_Additional2_characteristic_2, String^ Ok_Additional2_characteristic_3, String^ Ok_Additional2_characteristic_4)
{
	String^ Summary;
	int Additional_information_of_weather_2;
	if (Str_Additional_information_of_weather_2 == "Отсутствует")Additional_information_of_weather_2 = 0;
	else if (Str_Additional_information_of_weather_2 == "Местоположение максимальной концентрации облаков. угловая высота над линией горизонта (Eh) и направление, в котором наблюдается (Da)")Additional_information_of_weather_2 = 1;
	else if (Str_Additional_information_of_weather_2 == "Скорость перемещения облаков (vp) и направление (Dp), откуда перемещаются облака")Additional_information_of_weather_2 = 2;

	double Cloud_travel_speed;
	String^ Ok_Additional_information_of_weather_2;

	if (Additional_information_of_weather_2 != 0)
	{
		int Event_angular_height, Event_direction;
		switch (Additional_information_of_weather_2)
		{
		case 1:
			Ok_Additional_information_of_weather_2 += "58";
			if (Ok_Additional2_characteristic_2 == "Очень низко")Event_angular_height = 0;
			else if (Ok_Additional2_characteristic_2 == "Менее 30 град")Event_angular_height = 1;
			else if (Ok_Additional2_characteristic_2 == "Более 30 град")Event_angular_height = 2;

			if (Ok_Additional2_characteristic_3 == "На станции")Event_direction = 0;
			else if (Ok_Additional2_characteristic_3 == "СВ")Event_direction = 1;
			else if (Ok_Additional2_characteristic_3 == "В")Event_direction = 2;
			else if (Ok_Additional2_characteristic_3 == "ЮВ")Event_direction = 3;
			else if (Ok_Additional2_characteristic_3 == "Ю")Event_direction = 4;
			else if (Ok_Additional2_characteristic_3 == "ЮЗ")Event_direction = 5;
			else if (Ok_Additional2_characteristic_3 == "З")Event_direction = 6;
			else if (Ok_Additional2_characteristic_3 == "СЗ")Event_direction = 7;
			else if (Ok_Additional2_characteristic_3 == "С")Event_direction = 8;
			else if (Ok_Additional2_characteristic_3 == "Все направления")Event_direction = 9;

			if (Event_angular_height == 0)Ok_Additional_information_of_weather_2 += "1";
			else if (Event_angular_height == 1)Ok_Additional_information_of_weather_2 += "3";
			else Ok_Additional_information_of_weather_2 += "7";
			Ok_Additional_information_of_weather_2 +=
				Convert::ToString(Event_direction);
			break;
		case 2:
			Ok_Additional_information_of_weather_2 += "59";
			if (Ok_Additional2_characteristic_2 == "м/с")Event_angular_height = 0;
			else if (Ok_Additional2_characteristic_2 == "км/ч")Event_angular_height = 1;
			else if (Ok_Additional2_characteristic_2 == "узлы")Event_angular_height = 2;

			if (Ok_Additional2_characteristic_3 == "На станции")Event_direction = 0;
			else if (Ok_Additional2_characteristic_3 == "СВ")Event_direction = 1;
			else if (Ok_Additional2_characteristic_3 == "В")Event_direction = 2;
			else if (Ok_Additional2_characteristic_3 == "ЮВ")Event_direction = 3;
			else if (Ok_Additional2_characteristic_3 == "Ю")Event_direction = 4;
			else if (Ok_Additional2_characteristic_3 == "ЮЗ")Event_direction = 5;
			else if (Ok_Additional2_characteristic_3 == "З")Event_direction = 6;
			else if (Ok_Additional2_characteristic_3 == "СЗ")Event_direction = 7;
			else if (Ok_Additional2_characteristic_3 == "С")Event_direction = 8;
			else if (Ok_Additional2_characteristic_3 == "Все направления")Event_direction = 9;

			Cloud_travel_speed = Convert::ToInt32(Ok_Additional2_characteristic_4);
			if (Event_angular_height == 0)
				if (Cloud_travel_speed < 3)Ok_Additional_information_of_weather_2 += "0";
				else if (Cloud_travel_speed < 8)Ok_Additional_information_of_weather_2 += "1";
				else if (Cloud_travel_speed < 13)Ok_Additional_information_of_weather_2 += "2";
				else if (Cloud_travel_speed < 18)Ok_Additional_information_of_weather_2 += "3";
				else if (Cloud_travel_speed < 23)Ok_Additional_information_of_weather_2 += "4";
				else if (Cloud_travel_speed < 28)Ok_Additional_information_of_weather_2 += "5";
				else if (Cloud_travel_speed < 33)Ok_Additional_information_of_weather_2 += "6";
				else if (Cloud_travel_speed < 39)Ok_Additional_information_of_weather_2 += "7";
				else if (Cloud_travel_speed < 44)Ok_Additional_information_of_weather_2 += "8";
				else Ok_Additional_information_of_weather_2 += "9";
			if (Event_angular_height == 1)
				if (Cloud_travel_speed < 9)Ok_Additional_information_of_weather_2 += "0";
				else if (Cloud_travel_speed < 26)Ok_Additional_information_of_weather_2 += "1";
				else if (Cloud_travel_speed < 45)Ok_Additional_information_of_weather_2 += "2";
				else if (Cloud_travel_speed < 63)Ok_Additional_information_of_weather_2 += "3";
				else if (Cloud_travel_speed < 82)Ok_Additional_information_of_weather_2 += "4";
				else if (Cloud_travel_speed < 101)Ok_Additional_information_of_weather_2 += "5";
				else if (Cloud_travel_speed < 119)Ok_Additional_information_of_weather_2 += "6";
				else if (Cloud_travel_speed < 138)Ok_Additional_information_of_weather_2 += "7";
				else if (Cloud_travel_speed < 156)Ok_Additional_information_of_weather_2 += "8";
				else Ok_Additional_information_of_weather_2 += "9";
			if (Event_angular_height == 2)
				if (Cloud_travel_speed < 4)Ok_Additional_information_of_weather_2 += "0";
				else if (Cloud_travel_speed < 15)Ok_Additional_information_of_weather_2 += "1";
				else if (Cloud_travel_speed < 25)Ok_Additional_information_of_weather_2 += "2";
				else if (Cloud_travel_speed < 35)Ok_Additional_information_of_weather_2 += "3";
				else if (Cloud_travel_speed < 34)Ok_Additional_information_of_weather_2 += "4";
				else if (Cloud_travel_speed < 55)Ok_Additional_information_of_weather_2 += "5";
				else if (Cloud_travel_speed < 65)Ok_Additional_information_of_weather_2 += "6";
				else if (Cloud_travel_speed < 75)Ok_Additional_information_of_weather_2 += "7";
				else if (Cloud_travel_speed < 85)Ok_Additional_information_of_weather_2 += "8";
				else Ok_Additional_information_of_weather_2 += "9";
			Ok_Additional_information_of_weather_2 +=
				Convert::ToString(Event_direction);
			break;
		default:
			break;
		}
		Summary += "9";
		Summary += Ok_Additional_information_of_weather_2;
		Summary += " ";
	}

	return Summary;
}
