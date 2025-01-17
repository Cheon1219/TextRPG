#ifndef MONSTERS_H
#define MONSTERS_H

#include <iostream>
#include <string>
#include "Item.h"
#include "Inventory.h"
#include "Character.h"

using namespace std;

class Monster {
public:
    virtual ~Monster() = default;
    virtual string getName() = 0;
    virtual int getHealth() = 0;
    virtual int getAttack() = 0;
    virtual int getSkill() = 0;
    virtual void takeDamage(int damage) = 0;
    virtual bool isMonsterDie() = 0;

};

class Goblin : public Monster {
private:
    string name = "Goblin";
    int health = 0;
    int attack = 0;
    int mana = 0;
    int maxMana = 0;
    int accuracy = 0;
    float avoid = 0;

public:
    Goblin(int level) : health(level * 20), attack(level * 10), mana(0), maxMana(3), accuracy(50 + (level * 20)), avoid(1 + (level * 0.05f)) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        if (mana < maxMana) { // maxMana만큼 Attack
            mana++; // 공격할 때 마다 마나++
            return attack;
        }
        else {
            mana = 0; // 마나 초기화
            return getSkill(); // 스킬 호출
        }
    }

    int getSkill() override {
        return attack * 2;
    }

    bool isMonsterDie() override {
        if (health <= 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void takeDamage(int damage) override {
        health -= damage;
        if (health <= 0) {
            health = 0;
        }
        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;
    }
};

class Orc : public Monster {
private:
    string name = "Orc";
    int health = 0;
    int attack = 0;
    int mana = 0;
    int maxMana = 0;
    int accuracy = 0;
    float avoid = 0;

public:
    Orc(int level) : health(level * 20), attack(level * 10), mana(0), maxMana(3), accuracy(50 + (level * 20)), avoid(1 + (level * 0.05f)) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        if (mana < maxMana) { // maxMana만큼 Attack
            mana++; // 공격할 때 마다 마나++
            return attack;
        }
        else {
            mana = 0; // 마나 초기화
            return getSkill(); // 스킬 호출
        }
    }

    int getSkill() override {
        return attack * 2;
    }

    bool isMonsterDie() override {
        if (health <= 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void takeDamage(int damage) override {
        health -= damage;
        if (health <= 0) {
            health = 0;
        }
        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;
    }
};

class Slime : public Monster {
private:
    string name = "Slime";
    int health = 0;
    int attack = 0;
    int mana = 0;
    int maxMana = 0;
    int accuracy = 0;
    float avoid = 0;

public:
    Slime(int level) : health(level * 20), attack(level * 10), mana(0), maxMana(3), accuracy(50 + (level * 20)), avoid(1 + (level * 0.05f)) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        if (mana < maxMana) { // maxMana만큼 Attack
            mana++; // 공격할 때 마다 마나++
            return attack;
        }
        else {
            mana = 0; // 마나 초기화
            return getSkill(); // 스킬 호출
        }
    }

    int getSkill() override {
        return attack * 2;
    }

    bool isMonsterDie() override {
        if (health <= 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void takeDamage(int damage) override {
        health -= damage;
        if (health <= 0) {
            health = 0;
        }
        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;
    }
};

class BossMonster : public Monster {
private:
    string name = "BossMonster";
    int health = 0;
    int attack = 0;
    int mana = 0;
    int maxMana = 0;
    int accuracy = 0;
    float avoid = 0;

public:
    BossMonster(int level) : health(level * 20), attack(level * 10), mana(0), maxMana(3), accuracy(50 + (level * 20)), avoid(1 + (level * 0.05f)) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        if (mana < maxMana) { // maxMana만큼 Attack
            mana++; // 공격할 때 마다 마나++
            return attack;
        }
        else {
            mana = 0; // 마나 초기화
            return getSkill(); // 스킬 호출
        }
    }

    int getSkill() override {
        return attack * 2;
    }

    bool isMonsterDie() override {
        if (health <= 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void takeDamage(int damage) override {
        health -= damage;
        if (health <= 0) {
            health = 0;
        }
        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;
    }
};

#endif // MONSTERS_H
