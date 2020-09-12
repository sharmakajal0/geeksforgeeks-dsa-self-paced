function bake(degrees){
    var message;
    if (degrees > 500){
        message = "I'm not a nuclear reactor!.";
    } else if (degrees < 100){
        message = "I'm not a refrigerator!.";
    } else {
        message = "This temperature is appropriate for me!.";
        setMode("bake");
        setTemp(degrees);
    }

    return message;
}

var status = bake(350);