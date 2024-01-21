import string

password = input('Введи пароль: ')

upper_case = any([1 if i in string.ascii_uppercase else 0 for i in password])
lower_case = any([1 if i in string.ascii_lowercase else 0 for i in password])
special = any([1 if i in string.punctuation else 0 for i in password])
digits = any([1 if i in string.digits else 0 for i in password])
length = len(password)

if length >= 10:
    length = True
else:
    length = False

characters = [upper_case, lower_case, special, digits, length]
print(characters)

score = 0

for i in range(len(characters)):
    if characters[i]:
        score += 1

print('Надёжность пароля: %s из 5' % score)


