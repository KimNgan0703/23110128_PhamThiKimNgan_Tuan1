
#Cơ sở tri thức
print("HOM NAY CO NEN DI HOC KHONG NHI?")
suckhoe = ["Benh nang", "Cam nhe", "Binh thuong", "Khoe", "Rat doi dao nang luong"]
tamtrang = ["Buon ba", "Hoi chan nan", "Binh thuong", "Tot", "Rat tot"]
tinhtrang_lophoc = ["Co bai kiem tra", "Co bao cao", "Khong co luu y dac biet"]

print("***Suc khoe cua ban hom nay nhu the nao?***")
for i in range(len(suckhoe)):
    print(f"{i+1}: {suckhoe[i]}")
sk = int(input("Hay chon mot phuong an: "))

print("***Tam trang cua ban hom nay nhu the nao?***")
for i in range(len(tamtrang)):
    print(f"{i+1}: {tamtrang[i]}")
tt = int(input("Hay chon mot phuong an: "))

print("***Viec hoc tren lop co gi can luu y khong?***")
for i in range(len(tinhtrang_lophoc)):
    print(f"{i+1}: {tinhtrang_lophoc[i]}")
ttlh = int(input("Hay chon mot phuong an: "))


#Máy suy luận
print("KET LUAN:\n")

if sk == 1:
    if ttlh == 3: print("Nghi hoc.\n")
    else : print( "DI HOC hoac lien he giao vien.\n")

elif sk == 2:
    if ttlh == 1: print("DI HOC vi bai kiem tra quan trong.\n")
    elif ttlh == 2: print("DI HOC vi co bao cao quan trong.\n")
    else: print("Co the nghi nhung nen DI HOC.\n")

else:
    if ttlh == 1: print("DI HOC vi bai kiem tra quan trong.\n")
    elif ttlh == 2: print("DI HOC vi co bao cao quan trong.\n")
    else:
        if tt == 1: print("DI HOC.\n")
        elif tt == 2: print("DI HOC.\n")
        else: print ("Rat thich hop de DI HOC.\n")







