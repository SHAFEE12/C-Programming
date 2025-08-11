<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Are You Love</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div id="container">
        <div class="box">
            <h1>Do You Love me?</h1>
            <button id="target">No</button>
            <button id="yes">Yes</button>
        </div>
    </div>
    <script src="script.js"></script>
</body>
</html>



const target = document.getElementById('target');
const yes = document.getElementById('yes');

yes.addEventListener('click', () => {
    alert("Love you too, my dear!");
});

function moveTarget() {
    const maxWidth = 400;
    const maxHeight = 400;

    const randomX = Math.floor(Math.random() * maxWidth);
    const randomY = Math.floor(Math.random() * maxHeight);

    target.style.left = randomX + "px";
    target.style.top = randomY + "px";
}






#target {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    position: absolute;
    left: 200px;
    background-color: rgba(0, 89, 225);
    border: none;
    width: 90px;
    border-radius: 10px;
    font-size: 25px;
    padding: 8px;
    cursor: pointer;
    margin-top: 20px;
    transition: all 0.5s, left 0.5s;
    color: #ffffff; /* Adjusted the color to white */
}

body {
    display: flex;
    justify-content: center;
    align-items: center;
    width: 100%;
    height: 100vh;
    background: linear-gradient(45deg, rgba(77, 124, 185, 0.8), rgba(107, 101, 0.628));
}

#container {
    position: relative;
    width: 500px;
    /* Adjust any other styles for #container here */
}

#yes {
    position: absolute;
    left: 200px;
    background-color: rgb(225, 6, 8);
    border: none;
    width: 90px;
    border-radius: 10px;
    font-size: 25px;
    padding: 8px;
    cursor: pointer;
    transition: top 0.8s, left 0.8s;
    margin-top: 20px;
    color: #ffffff; /* Adjusted the color to white */
}

img {
    width: 50px;
    height: 50px;
}