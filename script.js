const heartsContainer = document.querySelector(".hearts");

/* =========================
   FLOATING HEARTS
========================= */

const heartSymbols = [
    "❤️",
    "💕",
    "💗",
    "💖",
    "🥰",
    "😘"
];

function createHeart() {

    const heart = document.createElement("div");

    heart.className = "heart";

    heart.textContent =
        heartSymbols[
            Math.floor(
                Math.random() * heartSymbols.length
            )
        ];

    heart.style.left =
        Math.random() * 100 + "%";

    const size =
        14 + Math.random() * 22;

    heart.style.fontSize =
        size + "px";

    const duration =
        6 + Math.random() * 8;

    heart.style.animationDuration =
        duration + "s";

    heart.style.animationDelay =
        Math.random() * 2 + "s";

    heartsContainer.appendChild(heart);

    setTimeout(() => {
        heart.remove();
    }, (duration + 3) * 1000);
}

/* Continuously create hearts */
setInterval(createHeart, 700);


/* =========================
   SHOOTING STARS
========================= */

function createShootingStar() {

    const star =
        document.createElement("div");

    star.className =
        "shooting-star";

    star.style.left =
        Math.random() * 100 + "%";

    star.style.top =
        Math.random() * 45 + "%";

    document
        .querySelector(".scene")
        .appendChild(star);

    setTimeout(() => {
        star.remove();
    }, 2200);
}

/* Random shooting stars */
setInterval(() => {

    if (Math.random() > 0.35) {
        createShootingStar();
    }

}, 2500);


/* =========================
   START HEARTS
========================= */

for (let i = 0; i < 8; i++) {

    setTimeout(
        createHeart,
        i * 400
    );
}