# A prototype of a very basic game created in Python to trial before creation in C

# Create player class and initialise attributes
class player():
    lives = 3
    health = 100

# Create 2 players and initialise the gameplay loop
player1 = player()
player2 = player()
gameRunning = True

# Gameplay loop starts
while gameRunning:
    
    # Player 1 attacks Player 2
    player1Attack = int(input("Enter a number to deal damage: "))
    player2.health -= player1Attack
    print("Player 2 has ", str(player2.health) + " health remaining.")
    
    # Player 2 loses a life if health reaches 0 or below
    if player2.health <= 0:
        print("Player 2 has lost a life!")
        player2.lives -= 1
        
        # Player 2 loses if out of lives and killed. Game ends
        if player2.lives <= 0: 
            print("Player 2 is out of lives. Player 1 wins!")
            gameRunning = False
        else:
            print("Player 2 has " + str(player2.lives) + " lives remaining")
            player2.health = 100
            
    else:
        # Player 2 attacks Player 1
        player2Attack = int(input("Enter a number to deal damage: "))
        player1.health -= player2Attack
        print("Player 1 has ", str(player1.health) + " health remaining.")
    
    # Player 1 loses a life if health reaches 0 or below
    if player1.health <= 0:
        player1.lives -= 1
        # Player 1 loses if out of lives and killed. Game ends
        if player1.lives <=0:
            print("Player 1 is out of lives. Player 2 wins!")
            gameRunning = False
        else:
            print("Player 1 has " + str(player1.lives) + " lives remaining")
    