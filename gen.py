from random import randint
from numba import njit, np
from numba.typed import List



f = open('1.txt', 'w', encoding='utf8')


def start():
    print('--------------------------------')
    print('Для начала работы нажмите Enter.')
    input()


print('Это программа для генирации случайных чисел.')
start()


@njit(fastmath=True)
def gen_A(leng, r1, r2):
    A = [randint(r1, r2) for i in range(leng)]

    typed_a = List(A)

    # [typed_a.append(x) for x in A]
    return A, typed_a





@njit(fastmath=True)
def get_best(A, n):

    j = -1
    h = 10000

    index1 = 0
    index2 = 0
    result = 0
    last = A[0]
    best = 0

    for i in range(1, len(A)):
        if A[i] == last:
            last = A[i]
            index2 += 1
        else:

            r1 = index2 - index1 + 1
            r2 = A[index1]

            if j <= r1 <= h and r2 == n:
                result += 1
                if r1 > best:
                    best = r1

            index2 += 1
            index1 = index2
            last = A[i]

    if A[-1] == n:
        index2 += 1
        r1 = index2 - index1 + 1
        r2 = A[index1]

        if j <= r1 <= h and r2 == n:
            result += 1

            if r1 > best:
                best = r1

    return best


@njit(fastmath=True)
def user_ask(n, j, h, A):
    index1 = 0
    index2 = 0
    result = 0
    last = A[0]

    for i in range(1, len(A)):
        if A[i] == last:
            last = A[i]
            index2 += 1
        else:

            r1 = index2 - index1 + 1
            r2 = A[index1]

            if j <= r1 <= h and r2 == n:
                result += 1

            index2 += 1
            index1 = index2
            last = A[i]

    if A[-1] == n:
        index2 += 1
        r1 = index2 - index1 + 1
        r2 = A[index1]

        if j <= r1 <= h and r2 == n:
            result += 1

    return result












def main_program():
    while True:
        print('Введите диапозон чисел')
        range1 = input().split(' ')

        if len(range1) != 2:
            print('Вы указали интервал неверно!')
            start()
            continue
        else:
            try:
                range1[0] = int(range1[0])
                range1[1] = int(range1[1])
            except:

                print('Промежутки интервала должны быть целыми числами!')
                start()
                continue

        if range1[1] < range1[0]:
            print('Неправильно указаны граници интервала. 1 число должно быть не больше 2')
            start()
            continue

        print('Введите длину последовательности')

        try:
            leng = int(input())
            if leng < 1:
                print('Минамальное значение длины последовательности это - 1')
                start()
                continue
        except:
            print('Длина последовательности должна быть целым числом!')
            start()
            continue

        # A = [0] * leng

        print('Генерация последовательности:')

        print()

        # A = [randint(range1[0], range1[1]) for i in range(leng)]
        A, typed_a = gen_A(leng, range1[0], range1[1])
        print('Генерация последовательности готова')
        # typed_a = List(A)
        # [typed_a.append(x) for x in A]


        print()

        s = '\n'
        f.write(s)

        # number_of_repet = [0] * (leng + 1)
        # best = [0] * (leng + 1)

        # typed_number_of_repet = List()
        # [typed_a.append(x) for x in number_of_repet]
        #
        # typed_best = List()
        # [typed_a.append(x) for x in best]

        # best = get_best(A, range1[0], range1[1], leng, number_of_repet, best)
        # print(best, '------')
        print()
        s = '\n'
        f.write(s)

        for i in range(range1[0], range1[1] + 1):

            res1 = get_best(typed_a, i)

            print('Максимальная длина ряда из', i, '-', res1)

            s = 'Максимальная длина ряда из ' + str(i) + ' - ' + str(res1) + '\n'
            f.write(s)



        s = '\n'
        f.write(s)
        print()

        return A, typed_a



A, typed_a= main_program()



s = '\n'
f.write(s)

print(r'Запросы, для завершения прграммы введите -1')
print()
# print(r'Сколька последовательносте из числа n, в которых число n повторилось в промежетке от j до h (числа n j h укажите через пробел)')

z = 1
while z is not None:
    z = input(
        r'Сколько последовательностей из числа n, в которых число n повторилось в промежутке от j до h (числа n j h укажите через пробел)')

    if z == '-1':
        break

    try:
        n, j, h = z.split()
        n, j, h = int(n), int(j), int(h)
    except:
        print('Вы указали данные неверно')
        continue


    result = user_ask(n, j, h, typed_a)

    print()
    print(f'Существует {result} промежутков из числа {n} длиной от {j} до {h}')
    print()

    s = f'Существует {result} промежутков из числа {n} длиной от {j} до {h}' + '\n'
    f.write(s)

f.close()