/*
   william younanian 2022401
   jean-paul khoueiry 2011397
   pays.h
   Date : 1 mars 2020 */

#ifndef PAYS_H
#define PAYS_H

#include <string>
#include "typesafe_enum.h"

enum class Pays
{
    Bresil,
    Canada,
    Chine,
    EtatsUnis,
    France,
    Japon,
    RoyaumeUni,
    Russie,
    Mexique,
    first_ = Bresil,
    last_ = Mexique
};

#endif // PAYS_H