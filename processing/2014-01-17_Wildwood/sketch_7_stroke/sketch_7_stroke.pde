void setup() {
  size(400, 400);
  stroke(255);
}

void draw() {
  background(0, 64, 128);
  
    stroke(255);

  line(width/2, height/2, mouseX, mouseY);

  stroke(0);
  ellipse(mouseX, mouseY, 200, 20);
 
  rectMode(CENTER);
  rect(mouseX, mouseY, 50, 50);
   
  
}

