print("I have information for the following planets:\n")

print("   1. Venus   2. Mars    3. Jupiter")
print("   4. Saturn  5. Uranus  6. Neptune\n")

#weight was originally 185 lbs, changed to kg 83.91 or ~84
weight = 84
weightPlanet = 0
planet = 3

# Write an if statement below:

if planet == 1:
  weightPlanet = weight * 0.91
elif planet == 2:
  weightPlanet = weight * 0.91
elif planet == 3:
  weightPlanet = weight * 0.91
elif planet == 4:
  weightPlanet = weight * 0.91
elif planet == 5:
  weightPlanet = weight * 0.91
elif planet == 6:
  weightPlanet = weight * 0.91
else:
  print("Please try again. Give a planet between 1-6")

print("Your weight on planet", planet, "is", weight)