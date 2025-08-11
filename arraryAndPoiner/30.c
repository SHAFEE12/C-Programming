<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>safiAhmad</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="container">
        <div class="smallContainer">
            <h1>Do you love me?</h1>
            <button class="btn" id="yes">Yes</button>
            <button class="btn" id="no">No</button>
            <div class="alert" id="message">
                <h2>I love you too</h2>
                <br>
                   <h3>  न जाने कितने हसीनाओं ने मुझे अपने दिलों में चुना होगा 
                    अब मैं क्या करूं मेरा नाम ही  हैं शफी नाम तो सुना होगा </h3> 
            </div>
        </div>
    </div>
    <script src="index.js"></script>
</body>
</html>








/* CSS Reset */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

/* Container Styles */
.container {
    width: 100%;
    height: 100vh;
    background-color: rgba(158, 13, 119, 0.8);
    text-align: center;
}

/* Heading Styles */
.container h1 {
    font-size: 70px;
    font-family: "Gill Sans', 'Gill Sans MT, Calibri, Trebuchet MS", sans-serif;
    color: rgb(29, 22, 22);
}
/* Button Styles */
.btn {
    font-size: 25px;
    padding: 10px 15px;
    border-radius: 10px;
    background-color: yellow;
    cursor: pointer;
    margin: 30px 10px;
}

/* Alert Styles */
.alert {
    width: 350px;
    height: 150px;
    border-radius: 10px;
    border: 1px solid black;
    margin: auto;
    position: relative;
    bottom: 88px;
    background-color: gainsboro;
    display: none;
}






let yes = document.getElementById("yes");
let no = document.getElementById("no");
let message = document.getElementById("message");

no.addEventListener("mouseover", () => {
    no.style.position = "absolute";
    no.style.top = Math.random() * 48 + "vh";
    no.style.right = Math.random() * 40 + "vw";
});

yes.addEventListener("click", () => {
    message.style.display = "block";
});

message.addEventListener("click", () => {
    message.style.display = "none";
});







