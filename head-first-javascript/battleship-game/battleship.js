
var randomloc = Math.floor(Math.random() * 6);

var location1 = randomloc;
var location2 = location1 + 1;
var location3 = location2 + 1;

var guess;
var hits = 0;
var guesses = 0;

var isSunk = false;

while(isSunk == false){
    guess = prompt("Ready, aim, fire! (Enter a number 0-9):");
    if(guess < 0 || guess > 9){
        alert("Please Enter a valied number!");
    } else {
        guesses = guesses + 1;
        if(guess == location1 || guess == location2 || guess == location3){
            hits = hits + 1;
            alert("HIT!");
            if(hits == 3){
                isSunk = true;
                alert("You sank my battleship!");
            }
        }
        else{
            alert("MISS!");
        }
    }
}
var accuracy = (3/guesses) * 100;
var stats = "you took " + guesses + " guesses to sink the battleship, " + " which means your shooting accuracy was " + accuracy + "%";
alert(stats);

