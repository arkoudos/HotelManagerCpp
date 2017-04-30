#pragma once
#include "Reservation.h"

struct Hotel
{
	int id;
	string name[256];
	int stars;
	int numberOfRooms;
	Reservation * reservations;
};