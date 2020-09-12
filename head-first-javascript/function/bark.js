function bark(name, weight) {
    if(weight > 20){
        console.log(name + " barks WOOF WOOF");
        document.write("<hr>" + name + " barks WOOF WOOF<br>");
    } else if(weight < 20){
        console.log(name + " barks woof woof");
        document.write("<hr>" + name + " barks woof woof<br>");
    }
}

bark("rover", 28);
bark("tommy", 12);