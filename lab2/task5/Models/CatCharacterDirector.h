#pragma once
#include "Cat.h"
#include "CatBuilder.h"
#include "EnemyCatBuilder.h"

class CatCharacterDirector {
public:
    Cat createCat(const CatBuilder& builder) {
        return builder.build();
    }

    Cat createEnemyCat(const EnemyCatBuilder& builder) {
        return builder.build();
    }
};