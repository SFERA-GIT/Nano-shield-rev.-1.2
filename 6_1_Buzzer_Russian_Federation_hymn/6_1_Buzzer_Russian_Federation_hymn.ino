/* 02.01.2018 Board rev.-1.2~~~~~~~~~~Ревизия платы-1.2
   https://github.com/SFERA-GIT/Nano-shield-rev.-1.2
   СФЕРА ЗНАНИЙ (г.Челябинск) http://сферазнаний.рф/
   Пример работы с пьезоизлучателем (контакт D9).
   Для работы с пьезоизлучателем необходимо установить перемычку
   на нижней гребенке между зеленым и желтыми контактами напротив контакта D9.
   Для работы с переключателем необходимо его припаять,
   если он не установлен.
   D9 - BUZ_PIN (пьезоизлучатель)
   D5 - белый (white)
   D6 - синий (blue)
   D7 - красный (red)

   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!ВНИМАНИЕ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   Использование функции tone() будет мешать выходу PWM на контакт 11.
   т.е. одновременное использование пьезоизлучателя и моторов приведет неравномерной работе ШИМ на контакте 11
   (скорости, если подключен мотор; яркости, если подключен мощный светодиод).
*/


//Объявляем константы с помощью оператора #define
#define BUZ_PIN 9    // любое упоминание сочетания символов BUZ_PIN будет заменено компилятором на значение 9
#define white 5      // любое упоминание сочетания символов white будет заменено компилятором на значение 5
#define blue 6       // любое упоминание сочетания символов blue будет заменено компилятором на значение 6
#define red 7        // любое упоминание сочетания символов red будет заменено компилятором на значение 7

//Обязательная функция setup (выполняется один раз перед функцией loop)
void setup()
//Тело функции setup
{
  pinMode(BUZ_PIN, OUTPUT);     //настройка контакта BUZ_PIN(9) на выход
  pinMode(white, OUTPUT);       //настройка контакта white(5) на выход
  pinMode(blue, OUTPUT);        //настройка контакта blue(6) на выход
  pinMode(red, OUTPUT);         //настройка контакта red(7) на выход
}

//Обязательная функция loop (бесконечно повторяющаяся функция)
void loop()
//Тело функции loop
{
digitalWrite(white, 1); //включение контакта white(5)
digitalWrite(blue, 1);  //включение контакта blue(6)
digitalWrite(red, 1);   //включение контакта red(7)
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 220, 499.9995);
delay(555.555);
tone(BUZ_PIN, 146, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 146, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 155, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 499.9995);
delay(555.555);
tone(BUZ_PIN, 116, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 116, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 130, 499.9995);
delay(555.555);
tone(BUZ_PIN, 130, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 146, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 155, 499.9995);
delay(555.555);
tone(BUZ_PIN, 155, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 174, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 233, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 261, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 293, 499.9995);
delay(555.555);
tone(BUZ_PIN, 261, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 233, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 261, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 220, 499.9995);
delay(555.555);
tone(BUZ_PIN, 146, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 146, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 155, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 499.9995);
delay(555.555);
tone(BUZ_PIN, 116, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 116, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 999.999);
delay(1111.11);
tone(BUZ_PIN, 293, 999.999);
delay(1111.11);
tone(BUZ_PIN, 261, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 261, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 174, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 999.999);
delay(1111.11);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 146, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 146, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 195, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 220, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 195, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 220, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 195, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 233, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 311, 999.999);
delay(1111.11);
tone(BUZ_PIN, 311, 999.999);
delay(1111.11);
tone(BUZ_PIN, 293, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 261, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 261, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 293, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 999.999);
delay(1111.11);
tone(BUZ_PIN, 261, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 499.9995);
delay(555.555);
tone(BUZ_PIN, 116, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 116, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 999.999);
delay(1111.11);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 499.9995);
delay(555.555);
tone(BUZ_PIN, 233, 1999.998);
delay(2222.22);

}
