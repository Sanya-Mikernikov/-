l = []
for x in "0123456789AB":
    for y in "0123456789AB":
        t = int(x + "231" + y, 12) + int("78" + x + "98" + y, 14)
        if t % 99 == 0:
            l.append(t)
if l:
    print(min(l) // 99)