import random

def get_computer_choice():
    return random.choice(['stone', 'paper', 'scissors'])

def determine_winner(player, computer):
    if player == computer:
        return "tie"
    elif (player == 'stone' and computer == 'scissors') or \
         (player == 'scissors' and computer == 'paper') or \
         (player == 'paper' and computer == 'stone'):
        return "player"
    else:
        return "computer"

def main():
    print("Welcome to Stone, Paper, Scissors Game!")
    player_score = 0
    computer_score = 0

    while True:
        player_choice = input("Enter your choice (stone/paper/scissors or 'quit' to exit): ").lower()
        if player_choice == 'quit':
            print("Thanks for playing!")
            print(f"Final Score => You: {player_score}, Computer: {computer_score}")
            break

        if player_choice not in ['stone', 'paper', 'scissors']:
            print("Invalid choice. Try again.")
            continue

        computer_choice = get_computer_choice()
        print(f"Computer chose: {computer_choice}")
        winner = determine_winner(player_choice, computer_choice)

        if winner == "tie":
            print("It's a tie!")
        elif winner == "player":
            print("You win this round!")
            player_score += 1
        else:
            print("Computer wins this round!")
            computer_score += 1

        print(f"Current Score => You: {player_score}, Computer: {computer_score}\n")

if __name__ == "__main__":
    main()
