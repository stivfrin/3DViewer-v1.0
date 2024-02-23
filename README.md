# 3DViewer-v1.0
Программа 3D Viewer разработана на языке C с использованием стандарта C11 и библиотеки Qt для визуализации трехмерных моделей в виде проволочной сетки. Она позволяет загружать модели из файлов формата obj, осуществлять их трансформации и настройку отображения.

Особенности:

Загрузка моделей из файлов формата obj с поддержкой списка вершин и граней.
Возможность транслировать, вращать и масштабировать модель.
Графический интерфейс пользователя с элементами управления для загрузки модели, настройки трансформаций и отображения информации о модели.
Поддержка настраиваемого отображения ребер, вершин и фона.
Сохранение настроек между запусками программы.

Структура проекта:

src/: Содержит код программы, включая файлы исходного кода и заголовочные файлы.
Makefile: Файл для сборки программы.
tests/: Модульные тесты для проверки модулей загрузки моделей и аффинных преобразований.
README.md: Краткое описание проекта, инструкции по установке и запуску.

Инструкции:

Клонировать репозиторий: git clone https://github.com/stivfrin/3DViewer-v1.0.git
Перейти в каталог проекта: cd src
Собрать проект с помощью Makefile: make install cd build
Запустить программу: ./3DViewer-v1.0
Использовать интерфейс для загрузки модели, настройки трансформаций и отображения.


Интерфейс разработан с использованием библиотеки Qt.
Реализация следует стандартам кодирования C11 и стилю Google.
Тестирование программы проведено с использованием модульных тестов для проверки функциональности загрузки моделей и аффинных преобразований.
Программа обеспечивает плавное взаимодействие с моделями размером до 1,000,000 вершин.
