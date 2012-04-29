pwin=input();
ploose=1-pwin;
q=input();
while q:
    n=input();
    i=2;
    pw=pwin;
    pl=ploose;
    while i<=n:
        pw=pw*ploose+pl*pwin;
        pl=1-pw;    
        i=i+1;
    print("%.4f" % pw)
    q=q-1;
    0570101002246899
