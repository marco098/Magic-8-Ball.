import random

while True:
    random.seed() # seeding the random number generator
    random_num = random.randint(0, 8) # generating random number between 0 and 8
    risposte_italiano = ["Si", "No", "Forse", "Probabilmente", "Non contarci troppo", "Assolutamente si", "Assolutamente no", "Non posso prevederlo ora", "Chiedi piu' tardi"]
    domanda = input("Inserisci la tua domanda (o digita 'exit' per uscire): ")
    if domanda == "exit":
        break
    print(risposte_italiano[random_num])
    print()

#TODO: 1. Aggiungere la lingua ingele.