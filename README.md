# YeeHaw

Completed by Antonia Zupu and Zachary Flahaut

In this file you will find some code to try and attemp to complete our goal. Please view below for more details.

Must do npm i --save to import all packages needed for the code

****Please note that the code still doesn't work as we aren't sure how to use radar.io and the google database

# Overarching goal:

To help farmers keep track of their cattle (cow ID, gender, age, weight and location) and notify the farmer a cow leave the farms property. 


# Goal
## General process of app


generate 100 cow(dots) coordinates (need a longitude and latitude) and store the cows data in a database

Place 100 dots on the grid and create a geofence

set the geofence to inform when dots exit the area

change location of every dot every 5 seconds to somewhere else in the grid

num = random number between 0 and 100

at moment of change num cows will be placed outside the grid

Send notification to employee - done via communication between the app and the arduino

print on console " num cows have left the grid"

When arduino read this a boolean value is sent through the system and the arduino light turns on notiying the farmer

The notifcation also informs the farmer of which cow is outside the geofence
The information is as follows: cow id, gender, age, weight and location


## Details :

The cow information will be stored on google clouds SQL database

We will use radar.io to create a geofence surrounding the farm

An server will manage the conection process between the radar.io and the arduino,  radar.io and the database and the database and the application

The application will contain in itself the following:

- The main page -) map of the farmers land and the suronding with a polygon shape
 acting as the boarders
 This will also show all the dots (cows) and their mouvement

- An datapage -) will will contain information of all the cows

Once all the javascript code is done we would upload it to the web via netlifly and came personalize it by adding an account option so that multiple farmers could use the application.

**The Domain name would be: Cow Valley **


## Why is this important to a farmer?

An application like this would be useful as it would provid a real time demographic
of cow mouvements in the area, and help farmer keep track of their cattle

This can also allows farmer to analyze what areas on the farm need better fencing 
or more protection as if multiple cows keep getting out of the geofence from a specific
location. This will help the farmer improve the maintenance of his land.

See what areas cow specifically roam

