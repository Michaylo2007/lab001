/**
 * @file lib.c
 * @brief Файл з реалізацією функцій оперування тваринами
 *
 * @author Davydov V.
 * @date 14-apr-2020
 * @version 1.3
 */

#include "lib.h"

const char *get_animal_type_name(enum animal_type type)
{
	const char *result;
	switch (type) {
	case CAT:
      result = "Кіт";
      break;
    case DOG:
      result = "Собака";
      break;
    case COW:
      result = "Корова";
      break;
    case PIG:
      result = "Свиня";
      break;
	case WOLF:
		result = "Вовк";
		break;
	case LION:
		result = "Лев";
		break;
	case DEER:
		result = "Олень";
		break;
	case ELEPHANT:
		result = "Слон";
		break;
	default:
		result = "N/A";
	}
	return result;
}

void generate_animal(struct animal *entity)
{
	entity->height = (unsigned int)random() % INT8_MAX;
	entity->weight = (unsigned int)random() % INT8_MAX;
	entity->type = (unsigned int)random() % ANIMAL_TYPE_COUNT;
}

void show_animals(struct animal animals[], unsigned int count)
{
	for (unsigned int i = 0; i < count; i++) {
		printf("Інформація про тварину №%02u: ", i + 1);
		printf("%s: зріст = %u см, маса = %u гр. \n", get_animal_type_name(animals[i].type), animals[i].height, animals[i].weight);
	}
}
