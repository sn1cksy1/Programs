class Bookmarks {
    constructor(id, name, description, link, IdExist) {
        this.id = id;
        this.name = name;
        this.description = description;
        this.link = link;
        this.IdExist = IdExist;


        this.str = "<li id='" + this.id + "'> <b>" + this.name + ": </b> " + this.description + "   <a href='" + this.link + "'>Link</a></li>";
        if (IdExist == false) {
          $("#ForBookmarks").html($("#ForBookmarks").html()+this.str);
        }
            else {
              $("#"+id).html("<b>" + this.name + " </b> " + this.description + "   <a href='" + this.link + "'>Link</a>");
        }
    }
}

var ArrayOfID = [];

function Add() {
  var id = prompt("Id:");
  id = parseInt(id);
  if (id == ArrayOfID[id-1]){
    let bookmark = new Bookmarks (id,prompt("Name:"),prompt("Description:"),prompt("Link:"), true);
  }
  else {
    let bookmark = new Bookmarks (id,prompt("Name:"),prompt("Description:"),prompt("Link:"), false);
    ArrayOfID[id-1] = id;
  }
}

function Delete() {
  var id = prompt("Choose id to delete element:");
  id = parseInt(id);
  if (id == ArrayOfID[id-1]) {
    $("#ForBookmarks li:nth-child(" + id + ")").html("");
  }
  else
    alert ("There is no such id.");
}

function JsonSetUp () {
  loadJSON("json.json", drawData);
}
function drawData (data) {
}