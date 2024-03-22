<!DOCTYPE html>
<html>
<head>
    <title>Shuffled Name List</title>
    <style>
        /* Your CSS styles here */
    </style>
</head>
<body>
    <center>
        <u>
            <h1>* * * Shuffled Room Element * * *</h1>
        </u>
        <div class="name-box" id="room3">
            <h2>Shuffled Room 3</h2>
            <p> B 2 Vishakha Sadanand Gudade</p>
            <p> A 1 Dipti Anil Thakre</p>
            <p> C 3 Snehal Sunil Kanhekar</p>
        </div>
        <div class="name-box" id="room4">
            <h2>Shuffled Room 4</h2>
            <p> c 3 Alfi Anjum Sheikh</p>
            <p> B 2 Pranita Gopal Dhakate</p>
            <p> A 1 Aakansha Rakesh Motghare</p>
        </div>
        <div  class="name-box"id="room5">
            <h2>shuffled Room 5</h2>
             <p>A 1 Kajal Vilas Dhomane<p>
            <p> B 2 samiksha Arunrao malasane</p>
            <p> c 3 Vaishnavi Siddeshwar Paropate</p>
        </div>
        <div class="name-box" id="room9">
            <h2>shuffled room 9</h2>
        <p>A 1 Bhavana Kawal</p>
        <p>B 2 lina Mahadeo Thalal</p>
        <p>C 3 Priyanka  Moreshwar Dhomane</p>
        </div>
        <div  class="name-box" id="room 10">
            <h2>shuffled room 10</h2>
        <p> A 1 Arti  Satish Rathod</p>
        <p> B 2 Vaishnavi sunil Kale</p>
        <p> C 3 Swati Vinod Kapgate</p></td>
        </div>
        <div class="name-box" id="room 11">
            <h2>shuffled room</h2>
        <p> A 1 Sakshi sanjaysing Bais</p>
        <p> B 2 Radha Chaudhari</p>
        <p> C 3 Rohini Sunil Neware</p></td>
        </div>

        <button id="shuffleButton">Shuffle Names</button>
    </center>

    <script>
        document.getElementById("shuffleButton").addEventListener("click", function() {
            shuffleNames("room3");
            shuffleNames("room4");
            shuffleNames("room5")
            shuffleNames("room9")
            shuffleNames("room10")
            shuffleNames("room11")
    

            // Shuffle other rooms by calling shuffleNames with their IDs
        });

        function shuffleNames(roomId) {
            const room = document.getElementById(roomId);
            const names = Array.from(room.querySelectorAll("p"));
            names.forEach(name => room.removeChild(name));

            shuffleArray(names);

            names.forEach(name => room.appendChild(name));
        }

        function shuffleArray(array) {
            for (let i = array.length - 1; i > 0; i--) {
                const j = Math.floor(Math.random() * (i + 1));
                [array[i], array[j]] = [array[j], array[i]];
            }
        }
    </script>
</body>
</html>


