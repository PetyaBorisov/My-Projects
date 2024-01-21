from random import randint as r
from os import system as s

chars = ('qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!№$^&*()_-+={}[]:;,. \,.1234567890')

def create():
    password = ''
    for i in range(n):
        password = f'{password}{chars[r(0, len(chars)-1)]}'
    print(password)

def start():
    prog = True
    while prog:
        create()
        k = int(input('Продолжить? (1/0): '))
        if k == 1:
            prog = True
        elif k == 0:
            prog = False
        s('cls')

print("Сделал MrGamerPCMobile https://youtube.com/@PCMobile725 Научился у DimPy https://youtube.com/@DimPyProg\nПароль должен содержать от 10-12 символов меньше не куда")
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