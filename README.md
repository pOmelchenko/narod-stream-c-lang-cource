# C-lang

Тут распологаются наработки и эсперименты по изучению языка `C`, который 
преподается на канале [narod stream](https://www.youtube.com/watch?v=nFt3pJ7j8jE&list=PLJTlt64jBcCvN4H91HAK82-3-QwaqnxlF).

### [1.1](https://www.youtube.com/watch?v=nFt3pJ7j8jE)
- [x] установка окружения под windows
### [1.2](https://www.youtube.com/watch?v=2BcaFTol6vA)
- [x] написал первую программу, которую скомпилировал разными вариантами
  - препроцессинг: `gcc -E main.c -o main.i`
  - генерация ассемблерного кода: `gcc -S main.i -o main.s`
  - компиляция исполняемого файла:
    - после процессинга: `gcc -o main main.i`
    - после генерации ассемблерного кода: `gcc -o main main.s`
    - из исходного кода: `gcc -o main main.c`
### [2](https://www.youtube.com/watch?v=NEADyFxA45A)
- [x] работа с выводом в поток через модификаторы
### [3](https://www.youtube.com/watch?v=1dwazLHIE0k)
- [x] примеры использования комментариев
### [4.1](https://www.youtube.com/watch?v=w4HyWyB-QvY)
- [x] просмотрено видео о переменных
  - вводная часть про типы данных
  - сам процесс определения переменной и присвоение значения
### [4.2](https://www.youtube.com/watch?v=cqBGNyt3Ecw)
- [x] научился работать с переменными, а именно:
  - определять переменные
  - присваивать значения
  - выводить в поток
### [5](https://www.youtube.com/watch?v=i84GEE-CvFI)
- [x] научился работать с арефметическими операциями
### [6](https://www.youtube.com/watch?v=sRpS2aq3XSs)
- [x] научился работать с циклами
### [7](https://www.youtube.com/watch?v=YgedAiB9LLM)
- [x] научился работать с логическими операторами
### [8](https://www.youtube.com/watch?v=a6blS08KVHc)
- [x] научился работать с условным оператором
  - а так же с работой ввода пользовательских данных
### [9.1](https://www.youtube.com/watch?v=tyCFv-WR-B8)
- [x] научился работать с одномерными массивами
### [9.2](https://www.youtube.com/watch?v=clfspMcjQug)
- [x] получил опыт работы с многомерными массивами и дебагом кода в asm
### [10](https://www.youtube.com/watch?v=5Nz3ba21xzA)
- [x] получил опыт работы с конструкцией `swich case`
### [11](https://www.youtube.com/watch?v=rs_Jb51WjqE)
- [x] научился работать с тернарным оператором
### [12](https://www.youtube.com/watch?v=sEdlWJDPG4w)
- [x] научился работать с пользовательскими функциями
### [13](https://www.youtube.com/watch?v=8BENjoklTPc)
- [x] опробовал работу с константами
### [14](https://www.youtube.com/watch?v=LeSSQA3C3v0)
- [x] прошел практику по работе с приведением типов
### [15.1](https://www.youtube.com/watch?v=CtpDkCbaeo0)
- [x] работаем с побитовыми операторами
  - И – AND
    ```
    0b10101010 & 
    0b10001001 =
    0b10001000
    ```
  - ИЛИ – OR
    ```
    0b10101010 |
    0b10001001 =
    0b10101011
    ```
  - Исключающее ИЛИ – XOR
    ```
    0b10101010 ^
    0b10001001 =
    0b00100011
    ```
  - Битовый сдвиг >>
    ```
    0b10101010 >> 1 =
    0b01010101
    
    0b10101010 >> 3 =
    0b00010101
    ```
  - Битовый сдвиг <<
    ```
    0b10101010 << 1 =
    0b01010100
    
    0b10101010 << 3 =
    0b01010000
    ```
  - Не – ~
    ```
    ~0b10101010 =
     0b01010101
    
    ~0b01101101 =
     0b10010010
    ```
  - [x] написана функция преобразования числа в строковое представление в битовом виде
### [15.2](https://www.youtube.com/watch?v=eiGzg5x7Sjg)
  - [x] очень много практики по битовым операциям
### [16](https://www.youtube.com/watch?v=HlPMZD2ib1k)
  - [x] работа с операторами присваивания
### [17](https://www.youtube.com/watch?v=ch1LkDfwE48)
  - [x] отработал функционал приоритетов операций
### [18](https://www.youtube.com/watch?v=XJt68cFFmI0)
  - [x] вспомнил способы управления потоком через `break`, `continue` и `goto`
