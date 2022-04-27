// Palamarchuk_Lr6_TxPrZS.cpp
#include "task_2.h"
#include "task_3.h"

int main()
{
    //task_1
    KyivTrip first = KyivTrip(1, "Cherson", "03.04, 12:50", "03.04, 19:50", 24);
    first.trip_output();

    KyivTrip second = KyivTrip(2, "Kharkov", "07.04, 22:50", "08.04, 05:20", 48);
    second.trip_output();

    KyivTrip third = KyivTrip(3, "Kharkov", "07.04, 23:00", "08.04, 05:30", 10);
    third.trip_output();
    
    //task_2
    third.trip_choice();
    
    //task_3
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    TZI f1;
    f1.name = "Комплекс засобів захисту інформації комплексної системи автоматизації управління підприємством«ПАРУС-КОРПОРАЦІЯ», версії 8.";
    f1.goal = "";
    f1.manufacter = "ТОВ «Парус-Спецпроект, м. Київ, вул. Хорива,47-Г";
    f1.requisites = "Експертний висновок №699, дійсний з 27.01.2017, до 27.01.2020, (дія експертного висновку зупинена)";

    TZI s2;
    s2.name = "Комплекс засобів захисту інформації комплексної системи автоматизації фінансово-економічної діяльностібюджетної установи «ПАРУС-БЮДЖЕТ», версії 7.";
    s2.goal = "";
    s2.manufacter = "ТОВ «Парус-Спецпроект, . Київ, вул. Хорива,47-Г";
    s2.requisites = "Експертний висновок №700, дійсний з 27.01.2017, до 27.01.2020, (дія експертного висновку зупинена)";

    TZI t3;
    t3.name = "Комплекс засобів захисту інформації «Комплексної системи автоматизації управління бюджетною установою«Парус-Бюджетна установа», версії 8.";
    t3.goal = "";
    t3.manufacter = "ТОВ «Парус-Спецпроект, . Київ, вул. Хорива,47-Г";
    t3.requisites = "Експертний висновок №701, дійсний з 27.01.2017 до 27.01.2020, (дія експертного висновку зупинена)";

    TZI f4;
    f4.name = "Комплекс відеоконференцзв’язку Cisco TelePresence у складі: серверу відеозв’язку CiscoTelePresence Server MSE 8710, пристроїв організації відеоконференцзв’язку Cisco TelePresence (MCU 4501, 4505, 4510, 4515, 4520, MSE 8510 Media2 Blade), абонентських терміналів Cisco TelePresence (System Codec C20, C40, C60, C90; System EX60, EX90; System Profile MX200; System Profile 42C20, 42C40, 52C40, 52C60, 52C60 Dual, 65C60, 65C90 Dual; System Edge 75 MXP, 95 MXP; System E20 IP Video Phone).";
    f4.goal = "Призначений для організації відеоконференцзв’язку між користувачами корпоративної мережі. Відповідає вимогам вимогам нормативних документів системи технічного захисту інформації в Україні в обсязі функцій, зазначених у документі «Комплекс відеоконференцзв’язку Cisco TelePresence Server MSE 8710 у складі пристроїв організації відеоконференцзв’язку та абонентських терміналів виробництва «Cisco Systems».Технічні вимоги за критеріями технічного захисту інформації», сукупність яких визначається функціональним профілем : КА - 2, ЦА - 1, ДС - 1, ДЗ - 1, ДВ - 1, НР - 1, НР - 2, НИ - 1, НИ - 2, НК - 1, НО - 1, НЦ - 1, НТ - 2, НВ - 1 з рівнем гарантій Г - 2 оцінки коректності реалізації згідно з НД ТЗІ 2.5 - 004 - 99.";
    f4.manufacter = "Представництво «Сіско Сістемз Менеджмент Б.В.», м.Київ, вул.Миколи Гринченка, 4 - В";
    f4.requisites = "Експертний висновок №702, дійсний з 27.01.2017 до 27.01.2020";

    TZI f5;
    f5.name = "Пристрої мережевого захисту Cisco Firepower 4110, Cisco Firepower 4120, Cisco Firepower 4140, Cisco Firepower 4150, Cisco Firepower 9300 із SM - 24 / SM - 36 / SM - 44 під управлінням операційної системи Firepower Threat Defence версії 6.х та Cisco Adaptive Security Appliance Software версії 9.х.";
    f5.goal = "Призначені для комплексного захисту локальної корпоративної мережі або глобальної (LAN) мережі (WAN) з використанням механізму контролю за з’єднаннями та аналізу пакетів мережевого трафіку, що проходять через інтерфейси (порти) пристрою в рамках єдиної платформи. Відповідає вимогам нормативних документів системи технічного захисту інформації в Україні в обсязі функцій, зазначених у документі «Пристрої мережевого захисту Cisco Firepower 4110, 4120, 4140, 4150, 9300 під керуванням операційної системи v.6.x та v.9.x.Технічні вимоги за критеріями технічного захисту інформації», сукупність яких визначається функціональним профілем : КА - 1, КА - 2, ЦА - 1, ЦА - 2, ЦО - 2, ДР - 1, ДС - 1, ДЗ - 1, ДЗ - 2, ДВ - 1, НР - 1, НИ - 1, НИ - 2, НК - 1, НО - 2, НЦ - 1, НТ - 2, з рівнем гарантій Г - 2 оцінки коректності реалізації згідно з НД ТЗІ 2.5 - 004 - 99.";
    f5.manufacter = "Представництво «Сіско Сістемз Менеджмент Б.В.», м.Київ, вул.Миколи Гринченка, 4 - В";
    f5.requisites = "Експертний висновок №703, дійсний з 27.01.2017 до 27.01.2020";

    TZI array[5] = { f1, s2, t3, f4, f5 };

    cout << "\n\n\nTask 3, Choose one of these:\n\n";
    int number;
    for (int i = 0; i < sizeof(array) / sizeof(array[1]); i++)
    {
        cout << i + 1 << ". " << array[i].name << endl;
    };
    cout << "\nWrite a number: ";
    cin >> number;
    cout << "\nWhat do you want to see: goal, manufacter or requisites? Write 1 or 2 or 3: ";
    int temp_number;
    cin >> temp_number;
    cout << endl << "Name: " << array[number - 1].name << endl;
    string temp_str;
    switch (temp_number - 1)
    {
    case 0:
        cout << "Goal: " << array[number - 1].goal;
        temp_str = array[number - 1].goal;
    case 1:
        cout << "Manufacter: " << array[number - 1].manufacter;
        temp_str = array[number - 1].manufacter;
    case 2:
        cout << "Requisites: " << array[number - 1].requisites;
        temp_str = array[number - 1].requisites;
    }
    cout << endl << "Writing info into file3.txt...";
    array[number - 1].write_info(array[number - 1].name, temp_str);
    for (int i = 0; i < 30; i++)
    {
        cout << endl;
    }
    cout << "Information from file3.txt\n";
    array[number - 1].show_last_info();
    cout << endl << endl;
}
