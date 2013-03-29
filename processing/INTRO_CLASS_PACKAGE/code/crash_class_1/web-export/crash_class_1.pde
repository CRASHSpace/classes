void setup() {
  frameRate(10);
}
void draw () {
  translate (height/2, width/2);
  rotate(frameCount);
  rect (-40, -40, 80, 80);
}


