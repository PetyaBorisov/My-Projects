from random import randint as r
from os import system as s
import os
import time
import sys
import socket

computer_name = socket.gethostname()

namePC = computer_name
def errorchars():
    errorchars = input('Ошибка запрещённые буквы и цифры попробуйте ещё')
oldchars = ('!№$^&*()_-+={}[]:;,.,.')
chars = ('qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890')
# print(chars)
# print("Всего 60 символов с 0 до 60")
# nochars = int(input('Введите индекс буквы: '))
# s('cls')
# if nochars > 82:
#     print("Такой буквы нет")
# elif chars[nochars].isdigit():
#     print("Этот символ является цифрой")
# elif chars[nochars].isalpha:
#     print("Этот символ является буквой")
#
# print('Вводите да или нет а можно и по другому написав y или n у этой буквы можно отказатся и продолжить программу')
# quest = input("Уверены? выбран символ " + str(nochars) + " : " + chars[nochars] + "\n")
# if quest == 'да' or 'Да' or 'дА' or 'ДА':
#     newchars = ''.join([char for idx, char in enumerate(chars) if idx != nochars])
# elif quest == 'y':
#     newchars = ''.join([char for idx, char in enumerate(chars) if idx != nochars])
# elif quest == 'нет' or 'Нет' or 'нЕт' or 'неТ' or 'НЕт' or 'НеТ' or 'нЕТ' or 'НЕТ':
#     print("Пока")
#     os.system('pause')
#     print('Завершение программы...')
#     load = 0
#     while load < 100:
#         load += 1
#         time.sleep(0.1)
#         print('Отправка запроса компьютеру ' + namePC + '... ' + str(load) + '%')
#         s('cls')
#     sys.exit(0)
# elif quest == 'n' or 'N':
#     breakpoint()
# else:
#     print('У вас не было ответа либо ответ был неккоректным так что программа завершена')
#     os.system('pause')
#     print('Завершение программы...')
#     load = 0
#     while load < 100:
#         load += 1
#         time.sleep(0.1)
#         print('Отправка запроса компьютеру ' + namePC + '... ' + str(load) + '%')
#         s('cls')
#     sys.exit(0)


def create():
    password = ''
    for i in range(n):
        password = f'{password}{chars[r(0, len(chars)-1)]}'
    print(password)
    f = open('password.txt', 'w', encoding='utf-8')
    f.write('Скопируй пока не опоздал ' + password)
    f.close()

def start():
    prog = True
    while prog:
        create()
        k = int(input('Продолжить? (1/0): '))
        if k == 1:
            prog = True
            s('cls')
        elif k == 0:
            prog = False
            timecopy = 10
            for i in range(11):
                s('cls')
                print('Зайди в папку программы и скопируй пароль у тебя есть ', timecopy)
                time.sleep(1)
                timecopy -= 1
            f = open('password.txt', 'w', encoding='utf-8')
            f.write('Прости но ты не успел сгенерируй ещё раз')
            f.close()

print("Сделал MrGamerPCMobile https://youtube.com/@PCMobile725 Научился у DimPy https://youtube.com/@DimPyProg\nПароль должен содержать от 10-12 символов меньше не куда\nУ этой программы есть открытый исходный код в гитхабе создателя")
n = int(input('Введите количество символов пароля: '))

if n >= 10 or n >= 11 or n >= 12:
    start()
else:
    n = int(input('Недопустимое количество пароля введите ещё раз: '))
    if n >= 10 or n >= 11 or n >= 12:
        start()
    else:
        n = int(input('Недопустимое количество пароля введите второй раз: '))
        if n >= 10 or n >= 11 or n >= 12:
            start()
        else:
            n = int(input('Недопустимое количество пароля введите последний раз: '))
            if n >= 10 or n >= 11 or n >= 12:
                start()

os.system('pause')
