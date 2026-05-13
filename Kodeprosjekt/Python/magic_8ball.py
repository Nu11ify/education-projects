import random

random_number = random.randint(1, 9)
random_use = random_number
#random_use = 1


name = "Linus"
question = "Will I ace my next test?"
askName = name + " asks: " + question
Answer8ball = "Magic 8Ball's answer: "

answerOne = "Yes - definitely"
answerTwo = "It is decidedly so"
answerThree = "Without a doubt"
answerFour = "Reply hazy, try again"
answerFive = "Ask again later"
answerSix = "Better not tell you now"
answerSeven = "My sources say no"
answerEight = "Outlook not so good"
answerNine = "Very doubtful"


print(askName)
if random_use == 1:
    print(Answer8ball + answerOne)
elif random_use == 2:
    print(Answer8ball + answerTwo)
elif random_use == 3:
    print(Answer8ball + answerThree)
elif random_use == 4:
    print(Answer8ball + answerFour)
elif random_use == 5:
    print(Answer8ball + answerFive)
elif random_use == 6:
    print(Answer8ball + answerSix)
elif random_use == 7:
    print(Answer8ball + answerSeven)
elif random_use == 8:
    print(Answer8ball + answerEight)
elif random_use == 9:
    print(Answer8ball + answerNine)
else:
    print("The 8ball is out of reach")
