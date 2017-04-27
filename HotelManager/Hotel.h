#pragma once
#include "Reservation.h"

typedef struct Hotel
{
	char name[256];
	int stars;
	int numberOfRooms;
	Reservation * reservations;
};