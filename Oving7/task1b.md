# Oppgave 1b
## Operator overloading
Forklar hvordan  ``` 5 - 3 - fraction1 - 7 - fraction2``` blir tolket. Hvilke versjoner av operatoren ```-```blir brukt?
</br>
Svar:
Uttrykket blir tolket som ```((((5-3)-fraction1)-7)-fraction2)```. Med andre ord blir først (5-3) tolket med standard minusoperatoren for integers. Deretter blir dette resultatet trukket fra fraction1 med operatoren vi lagde i oppgave a) som tar int som første argument og returnerer en brøk. Dermed har vi bare med brøker å gjøre resten av uttrykket og bruker oprator fra Fraction klassen til å regne ut resten.
