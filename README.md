# linuxprac
linux practics
lec02
    Сделать в репозитории подкаталог, совпадающий с именем данной страницы (02_TerminalProject, и поместить в него решение следующей задачи.

    С помощью интернета и здравого смысла написать на ncurses программу Show.c, которая постранично просматривает файл (слишком длинные строки усекаются или переносятся — как вам удобнее).
        Имя файла передавать параметром командной строки.
        Файл должен показываться в окне, а в первой строке экрана должно содержаться его имя.

        Весь файл допустимо хранить в памяти, например, одним куском или в виде списка строк.

        При нажатии пробела файл прокручивается дальше (если есть такая возможность), при нажатии ESC программа завершается.

            Имеет смысл очищать окно при помощи werase(), а потом всё заново на нём выводить. 
        Многобайтовую кодировку можно не поддерживать 

    Сделать Makefile и добиться работоспособности make (обратите внимание на использование табуляций; понадобится на следующей лекции)
    Не забыть опубликовать решение в репозитории!

    (!) Дополнительно, для тех, кому стало интересно:
        При нажатии стрелки вправо выводить строки файла, начиная со следующей колонки (так можно посмотреть урезанные длинные строки; начала строк при этом не видны). Стрелку влево обработать так же.

        Реализовать обработку PgUp, PgDown и стрелок вверх/вниз — прокрутка на один экран вперёд/назад, на одну строку вперёд-назад, остальные клавиши игнорировать
        … (далее везде) 

Вот так как-то это выглядело год назад :)

    
