#ifndef CARD_H
#define CARD_H

class Card
{
	public:
		enum FaceAnimal{Crabe, Pingouin, Pieuvre, Tortue, Morse};
		enum FaceBackground{Rouge, Vert, Mauve, Bleu, Jaune};
	private:
		FaceAnimal animal;
		FaceBackground background;
		Card(enum FaceAnimal faceAnimal, enum FaceBackground faceBackground){
			this->animal = faceAnimal;
			this->background = faceBackground;
		};
};

#endif
