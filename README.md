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

# Блочное тестирование (класс my_func)
<ol>
  <li>
    <h3>Метод int fibonachi(int num)</h3>
    <ol>
    	<li>
    	  <h4>Тест Б1.1 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 4</li>
    	    <li>Ожидаемый результат: 3</li>
    	    <li>Действия:</li></br>
            - Вызвать функцию `fibonachi(4)`</li></br>
            - Проверить, что возвращенное значение равно 3</li></br>
          </ul>
      </li>
      <li>
        <h4>Тест Б1.2 (положительный)</h4>
        <ul>
          <li>Входные данные: 0</li>
          <li>Ожидаемый результат: 0</li>
          <li>Действия:</li></br>
              - Вызвать функцию `fibonachi(0)`</li></br>
              - Проверить, что возвращенное значение равно 0</li></br>
            </ul>
          </li>
          <li>
            <h4>Тест Б1.3 (положительный)</h4>
            <ul>
              <li>Входные данные: -1</li>
              <li>Ожидаемый результат: 0</li>
              <li>Действия:</li></br>
                - Вызвать функцию `fibonachi(-1)`</li></br>
                - Проверить, что возвращенное значение равно 0</li></br>
              </ul>
            </li>
         </ol>
        </li>
        <li>
          <h3>Метод Roots my_sqrt(double a, double b, double c)</h3>
          <ol>
            <li>
              <h4>Тест Б2.1 (положительный)</h4>
              <ul>
                <li>Входные данные: a=1.0, b=2.0, c=1.0</li>
                <li>Ожидаемый результат:</li>
                - root1 ≈ -1.0</li>
                - root2 ≈ -1.0</li>
                <li>Действия:</li></br>
                  - Вызвать функцию `my_sqrt(1.0, 2.0, 1.0)`</li></br>
                  - Проверить, что root1 и root2 близки к -1.0 с заданной точностью</li></br>
                </ul>
              </li>
              <li>
                <h4>Тест Б2.2 (положительный)</h4>
                <ul>
                  <li>Входные данные: a=1.0, b=0.0, c=0.0</li>
                  <li>Ожидаемый результат:</li></br>
                  - root1 ≈ 0.0</li></br>
                  - root2 ≈ 0.0</li></br>
                  <li>Действия:</li></br>
                    - Вызвать функцию `my_sqrt(1.0, 0.0, 0.0)`</li></br>
                    - Проверить, что root1 и root2 близки к 0.0 с заданной точностью</li></br>
                  </ul>
                </li>
                <li>
                  <h4>Тест Б2.3 (положительный)</h4>
                  <ul>
                    <li>Входные данные: a=1.0, b=0.0, c=-1.0</li>
                    <li>Ожидаемый результат:</li></br>
                    - root1 ≈ 1.0</li></br>
                    - root2 ≈ -1.0</li></br>
                    <li>Действия:</li></br>
                      - Вызвать функцию `my_sqrt(1.0, 0.0, -1.0)`</li></br>
                      - Проверить, что root1 и root2 близки к 1.0 и -1.0 с заданной точностью</li></br>
                    </ul>
                  </li>
                  <li>
                    <h4>Тест Б2.4 (негативный)</h4>
                    <ul>
                      <li>Входные данные: a=0.0, b=2.0, c=1.0</li>
                      <li>Ожидаемый результат: root1 = root2 = -1 (нет корней)</li>
                      <li>Действия:</li></br>
                        - Вызвать функцию `my_sqrt(0.0, 2.0, 1.0)`</li></br>
                        - Проверить, что root1 и root2 равны -1</li></br>
                      </ul>
                    </li>
                    <li>
                      <h4>Тест Б2.5 (негативный)</h4>
                      <ul>
                        <li>Входные данные: a=1.0, b=2.0, c=2.0</li>
                        <li>Ожидаемый результат: root1 = root2 = -1 (нет действительных корней)</li>
                        <li>Действия:</li></br>
                          - Вызвать функцию `my_sqrt(1.0, 2.0, 2.0)`</li></br>
                          - Проверить, что root1 и root2 равны -1</li></br>
                        </ul>
                      </li>
                    </ol>
                  </li>
                </ol>
              </ol>

