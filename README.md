# C-lang

Тут распологаются наработки и эсперименты по изучению языка `C`, который 
преподается на канале [narod 
stream](https://www.youtube.com/watch?v=nFt3pJ7j8jE&list=PLJTlt64jBcCvN4H91HAK82-3-QwaqnxlF).
 
- [x] установка окружения под windows
- [x] написал первую программу, которую скомпилировал разными вариантами
  - препроцессинг: `gcc -E main.c -o main.i`
  - генерация ассемблерного кода: `gcc -S main.i -o main.s`
  - компиляция исполняемого файла:
    - после процессинга: `gcc -o main main.i`
    - после генерации ассемблерного кода: `gcc -o main main.s`
    - из исходного кода: `gcc -o main main.c`
- [x] работа с выводом в поток через модификаторы
