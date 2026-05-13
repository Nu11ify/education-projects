weight = 1.5
cost = 0

groundShipping = 20
#flat rate

premiumGroundShipping = 125
# ground premium - flat rate, no rate for weight
# flat 125

droneShipping = 0

# ground - flat rate + rate for weight | 20 flat
#Weight of Package 	Price per Pound 	Flat Charge
# 2 lb or less 	$1.50
# Over 2 lb but less than or equal to 6 lb 	$3.00
# Over 6 lb but less than or equal to 10 lb 	$4.00
# Over 10 lb 	$4.75
if weight <= 2:
    groundShipping += weight*1.5
elif weight <= 6:
    groundShipping += weight*3
elif weight <= 10:
    groundShipping += weight*4
#elif weight < 10:
else:
    groundShipping += weight*4.75

# drone - rate for weight (triple rate of ground)
# Weight of Package
# 2 lb or less 	$4.50
# Over 2 lb but less than or equal to 6 lb 	$9.00
# Over 6 lb but less than or equal to 10 lb 	$12.00
# Over 10 lb 	$14.25

if weight <= 2:
    droneShipping += weight*4.5
elif weight <= 6:
    droneShipping += weight*9
elif weight <= 10:
    droneShipping += weight*12
#elif weight < 10:
else:
    droneShipping += weight*14.25

print("Standard ground shipping cost $"+ str(groundShipping))
print("Premium shipping cost $" + str(premiumGroundShipping))
print("Drone shipping cost $"+ str(droneShipping))

if groundShipping <= premiumGroundShipping and groundShipping <= droneShipping:
    print("Standard ground shipping is the cheapest")
elif premiumGroundShipping <= groundShipping and premiumGroundShipping <= droneShipping:
    print("Premium ground shipping is the cheapest")
else:
    print("Drone shipping is the cheapest")

