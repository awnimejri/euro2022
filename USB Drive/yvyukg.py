def saisir():
    ch=str()
    while not(len(ch)>0 and ch.find("  ")==-1 ):
        ch=input("taper ch")
    return ch

def afficher(ch):
    voy="AEIOYU"
    for i in range(len(voy)):
        nb=occ(voy[i],ch)
        if nb>0:
            print("l'occurence de {} est {} ".format(voy[i],nb))

def occ(c,ch):
    s=0
    for i in range(len(ch)):
        if ch[i].upper()==c:
            s+=1
    return s







ch=saisir()
afficher(ch)