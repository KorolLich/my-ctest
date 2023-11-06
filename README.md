# ctest
# План тестирования:

# Аттестационное тестирование

  - Тест А1 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 4
    - Ожидаемый результат:
        ```            
      	Квадратный корень: 2.000000
      	Фибоначи: 3
      	Квадратный корень из фибоначи: 1.732051
        ```               

  - Тест А2 (негативный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу без аргумента
    - Ожидаемый результат: 
      ```                  
     	Неверное количество аргументов
      ```                         

  - Тест А3 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с 2 аргументами (4 и 5)
    - Ожидаемый результат: 
        ```                     
      	Квадратный корень: 2.000000
      	Фибоначи: 3
      	Квадратный корень из фибоначи: 1.732051
        ```                      

  - Тест А4 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 0
    - Ожидаемый результат: 
        ```                           
      	Квадратный корень: 0.000000
      	Фибоначи: 0
      	Квадратный корень из фибоначи: 0.000000
        ```                           

  - Тест А5 (негативный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом -1
    - Ожидаемый результат: 
        ```                            
      	Аргумент должен быть не менее 0!
        ```                     

  - Тест А6 (негативный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом "bob"
    - Ожидаемый результат: 
        ```                       
      	Аргумент должен быть натуральным числом!
        ```                     

  - Тест А7 (негативный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 2.5
    - Ожидаемый результат: 
        ```                       
      	Аргумент должен быть натуральным числом!
        ```                     

  - Тест А8 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 10
    - Ожидаемый результат: 
        ```                       
      	Квадратный корень: 3.162278
      	Фибоначи: 55
      	Квадратный корень из фибоначи: 7.416198
        ```                     

  - Тест А9 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 25
    - Ожидаемый результат: 
        ```                       
      	Квадратный корень: 5.000000
      	Фибоначи: 75025
      	Квадратный корень из фибоначи: 274.585132
        ```                     

  - Тест А10 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 50
    - Ожидаемый результат: 
        ```                       
      	Квадратный корень: 7.071068
      	Фибоначи: 12586269025
      	Квадратный корень из фибоначи: 112304.342570
        ```                     

