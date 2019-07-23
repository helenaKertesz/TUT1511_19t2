#include <stdio.h>

struct pet {
	int weight;
	int age;
	char name[100];
	char type [100];
}

void age_fluffy( struct pet * my_pet );

int main(){

	struct pet my_pet;
	
	my_pet.age = 7;
	age_fluffy( &my_pet );
}

void age_fluffy( struct pet * my_pet ){
	
	my_pet->age = 13;
	//(*my_pet).age = 13;
}










