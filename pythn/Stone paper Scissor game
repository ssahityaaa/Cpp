import random

def gamewin(comp,you):
    if comp==you:
        return None
    elif comp=='paper':
        if you=='stone':
            return False
        elif you=='scissor':
            return True
    elif comp=='stone':
        if you=='scissor':
            return False
        elif you=='paper':
            return True
    elif comp == 'scissor':
        if you == 'paper':
            return False
        elif you == 'stone':
            return True
Player_Name = input("Enter Your Name = ")
print("Welcome to Stone paper scissor Game")
print(Player_Name)
print("Press Enter Key")
comp =input("Computers turn : stone paper scissor")

randno=random.randint(1,3)
print(randno)
if randno==1:
    comp='stone'
elif randno==2:
    comp='paper'
elif randno==3:
    comp='scissor'
you =input("Your turn Type : stone paper or scissor ")
a= gamewin(comp, you)
print(f"Computer Choose {comp}")
print(f"You Choose {you}")
if a==None:
    print("The game is tie")
elif a:
    print(Player_Name+ " Wins..!")
else:
    print(Player_Name+" Lose")