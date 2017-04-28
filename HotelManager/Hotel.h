#pragma once
#include "Reservation.h"

typedef struct Hotel
{
	static int id;
	static char name[256];
	int stars;
	int numberOfRooms;
	Reservation * reservations;
};