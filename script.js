const output = document.getElementById("output");

const message =
    "I love u to budi 🥰🥰🥰 miss u to so much 😘 ummmaa.";

function display() {
    const text = document.createElement("div");

    text.className = "message";
    text.textContent = message;

    output.appendChild(text);

    setTimeout(() => {
        text.remove();
    }, 3000);
}

// Infinity ♾️
setInterval(display, 500);

// First message immediately
display();