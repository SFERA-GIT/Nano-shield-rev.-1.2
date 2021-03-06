/* 02.01.2018 Board rev.-1.2~~~~~~~~~~Ревизия платы-1.2
   https://github.com/SFERA-GIT/Nano-shield-rev.-1.2
   СФЕРА ЗНАНИЙ (г.Челябинск) http://сферазнаний.рф/
   Пример работы с пьезоизлучателем (контакт D9) и переключателем на контакте D4.
   Для работы с пьезоизлучателем необходимо установить перемычку
   на нижней гребенке между зеленым и желтыми контактами напротив контакта D9.
   Для работы с переключателем необходимо его припаять,
   если он не установлен.
   D9 - BUZ_PIN (пьезоизлучатель)
   D4 - FUNC_PIN (переключатель)

   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!ВНИМАНИЕ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   Использование функции tone() будет мешать выходу PWM на контакт 11.
   т.е. одновременное использование пьезоизлучателя и моторов приведет неравномерной работе ШИМ на контакте 11 
   (скорости, если подключен мотор; яркости, если подключен мощный светодиод).
*/

//Объявляем константы с помощью оператора #define
#define FUNC_PIN 4  // любое упоминание сочетания символов FUNC_PIN будет заменено компилятором на значение 4
#define BUZ_PIN 9    // любое упоминание сочетания символов BUZ_PIN будет заменено компилятором на значение 9

//Обязательная функция setup (выполняется один раз перед функцией loop)
void setup()
//Тело функции setup
{
  pinMode(BUZ_PIN, OUTPUT);     //настройка контакта BUZ_PIN(9) на выход
  pinMode(FUNC_PIN, INPUT);     //настройка контакта FUNC_PIN(4) на вход
}

//Обязательная функция loop (бесконечно повторяющаяся функция)
void loop()
//Тело функции loop
{
  if (digitalRead(FUNC_PIN) == 1) //если на входе (4) присутвует напряжение
  {
    tone(9, 392, 350);      // (9 - контакт,на котором генерируется тон, 392 - частота тона в герцах, 350 - длительность тона в миллисекундах)
    delay(2000);            //Ожидание 350 милисекунд (0.35 секунды)
    tone(9, 392, 350);      // (9 - контакт,на котором генерируется тон, 392 - частота тона в герцах, 350 - длительность тона в миллисекундах)
  }
  else //если на входе (4) отсутствует напряжение
  {
    tone(9, 587, 350);      // (9 - контакт, на котором генерируется тон, 587 - частота тона в герцах, 350 - длительность тона в миллисекундах)
    delay(1000);            //Ожидание 350 милисекунд (0.35 секунды)
    tone(9, 587, 350);      // (9 - контакт, на котором генерируется тон, 587 - частота тона в герцах, 350 - длительность тона в миллисекундах)
  }
}
