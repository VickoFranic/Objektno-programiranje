<html>
<head>
<meta charset="UTF-8">
</head>
<body>
<p><h1>Objektno programiranje</h1>
<h2>Vjezba 5</h2></p>
<p><h3>konstruktori, destruktori</h3></p>
<p>
1. Napiˇsite klasu ZooAnimal koja opisuje ˇzivotinje u zooloˇskom vrtu. Podaci o ˇzivotinji su:
vrsta, ime, godina rodenja, broj kaveza, broj dnevnih obroka hrane, oˇcekivani ˇzivotni
vijek i niz podataka o masi ˇzivotinje koji se biljeˇzi svaku godinu (podatak o masi je
iznos mase i godina vaganja). Niz podataka o masi treba biti dinamiˇcki alociran u
konstruktoru, a alocirana veliˇcina niza treba biti dovoljna za ˇzivot dug dvostruko od
oˇcekivanog ˇzivotnog vijeka. Napiˇsite konstruktore i sljede´ce member funkcije:
• konstruktor koji ima ˇsest parametara: vrstu, ime, godinu rodenja, broj kaveza,
broj obroka i oˇcekivani ˇzivotni vijek,
• destruktor,
• copy konstruktor,
• funkciju za promjenu broja obroka (smanjenje ili uve´canje za 1),
• funkciju koja dodaje podatke o masi za odredenu godinu (provjeriti da li ve´c postoje
podaci o toj godini i ako postoje i nisu za teku´cu godinu, ne dozvoliti promjenu),
• funkciju koja detektira da li se ˇzivotinja udebljala ili je smrˇsavila viˇse od 10% u
zadnjih godinu dana (teku´cu godinu odredite pomo´cu funkcija iz ctime),
• funkciju koja ispisuje podatke o objektu.
Funkcije koje ne mijenjaju podatke oznaˇcite const. Razmislite da li je potreban default
konstruktor i ako je, napiˇsite ga.
U main funkciji napunite vektor ˇzivotinjama, te napiˇsite funkciju koja za pojedinu
ˇzivotinju mijenja podatke o broju obroka ukoliko je ˇzivotinja podhranjena ili predebela. Ispiˇsite vektor prije i poslije promjena.
U konstruktorima i destruktorima ispiˇsite poruke i pokuˇsajte zakljuˇciti u kojem trenutku
se pozivaju.
Napomena: u copy konstruktoru se, osim same vrijednosti pointera, kopiraju i vrijednosti niza (deep copy).
Napomena 2: odvojite implementaciju i suˇcelje klase u razliˇcite datoteke.
</p>
</body>
</html>