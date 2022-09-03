Oppgave 2

Hvis du kjører denne koden får du segmentation fault. Du har satt line til å peke til null-adressen i minnet. Når du så prøver å lagre en tekststreng så begynner du å skrive over minne utenfor programmet (fra adresse 0x0). 

Oppgave 3
I denne oppgaven setter du kun av 5 plasser til text. Skulle en bruker skrive inn en streng som er lengre enn dette vil programmet begynne å skrive over minnelokasjoner utenfor den avgrensede tabellen og man kan innføre uforklarlige bugs i andre deler eller få segmentation fault. 
