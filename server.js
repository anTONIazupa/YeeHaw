const http = require("http");
const fs = require("fs");
var express = require("express");
var cors = require("cors");
//const { track } = require("./Tracking")
const hostname = "127.0.0.1";
const port = 3000;

const app = express();

app.use(cors());
app.use(express.json());

app.get("/", (req, res) => {
  fs.readFile("./public/index.html", "utf8", function (err, text) {
    res.send(text);
  });
});
app.get("/", (req, res) => {
  fs.readFile("./public/about.html", "utf8", function (err, text) {
    res.send(text);
  });
});
app.get("/", (req, res) => {
  fs.readFile("./public/contact.html", "utf8", function (err, text) {
    res.send(text);
  });
});

/*
app.post("/track", (req, res) => {



  track(user, pass);

});
*/

app.listen(port, () => console.log(`Example app listening on port ${port}!`));
//app.redirect('http://localhost:3000')
