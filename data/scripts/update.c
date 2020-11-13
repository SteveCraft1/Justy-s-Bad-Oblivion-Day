void main()
{//Custom Lifebar

	void P1 = getplayerproperty(0, "entity");
	void Bar = getglobalvar("Bar");
	void P1name = getentityproperty(P1, "defaultname");

	if(openborvariant("in_level")==1){
		if(P1 && P1name == "Justy"){
			int HP1 = getentityproperty(P1, "health");
			drawbox(33,5,62,11,1500,rgbcolor(255,135,0),0);
			drawsprite(Bar, 3, 3, 1000);
		}
	}
}

void oncreate()
{
	void Bar;

	Bar = loadsprite("data/sprites/JustyHealthbar.png");
	setglobalvar("Bar", Bar);
}

void ondestroy(){
	void Bar = getglobalvar("Bar");

	free(Bar);
	setglobalvar("Bar", NULL());
}