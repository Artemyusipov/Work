ip = input()
ip = ip.split('.')
count = 0
c = 0
for x in ip:
    if not x.isdigit():
        count += 1
if count > 0:
    print('Это не ip')
else:
    if len(ip) != 4:
        print('Это не ip')
    else:
        for x in ip:
            if (int(x) >= 0) and (int(x) < 256):
                c += 1
        if c != 4:
            print('Это не ip')
        else:
            print('Это ip')
