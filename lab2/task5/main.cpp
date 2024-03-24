#include <iostream>
#include <string>
#include <vector>
#include "Models/CatBuilder.h"
#include "Models/EnemyCatBuilder.h"
#include "Models/CatCharacterDirector.h"


int main() {

    CatBuilder builder;
    builder.setName("Whiskers").setFurColor("White").setEyeColor("Green").setFavoriteToy("Yarn").addAbility("Stealth");

    EnemyCatBuilder enemyBuilder;
    enemyBuilder.setName("Shadow").setFurColor("Black").setEyeColor("Red").setFavoriteToy("Mouse Toy")
        .addAbility("Dark Magic").addAbility("Curse").setEvilDeeds({ "Corruption", "Destruction" });

    CatCharacterDirector director;
    Cat hero = director.createCat(builder);
    Cat enemy = director.createEnemyCat(enemyBuilder);

    std::cout << "Hero Cat:" << std::endl;
    hero.display();

    std::cout << "\nEnemy Cat:" << std::endl;
    enemy.display();

    return 0;
}
