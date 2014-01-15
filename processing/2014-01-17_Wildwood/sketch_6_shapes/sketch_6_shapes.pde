void setup() {
  size(400, 400);
  stroke(255);
}

void draw() {
  background(0, 64, 128);
  
  line(width/2, height/2, mouseX, mouseY);
  
  ellipse(mouseX, mouseY, 20, 20);

  //rectMode(CENTER);
  rect(mouseX, mouseY, 50, 50);
  
}

