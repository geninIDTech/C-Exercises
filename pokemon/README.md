# Pokemon

We'll be using the actual datafiles from the Bulbapedia website and
making a pokemon like text game in C++.

=====================================================================================

This is Part 1 of a two part exercise.

For Part 1 you will need to:

1) Write a class for a Pokémon, that at a minimum holds its index number,
name, hp, attack, defense, speed, special, and type1 and type2. These member
variables will all be ints except name, type1 and type2, which are strings
instead.

In case you're curious, a description of what each field means follows:
    A. The index number can be used by the user to specify what number Pokémon they want.  
    
    B. The name is used to describe the Pokémon, such as "Pikachu"  
    
    C. HP is how much damage it can take before it dies. Sorry... "faints, and is
    sent to the Pokémon farm upstate".  
    
    D. The attack value is multiplied to all damage this Pokémon does. For
    example, if a Pokémon would normally do 20 damage with an attack, if it had an
    attack of 10 it would do 200 damage.  
    
    E. The defense value is divided into all damage this Pokémon receives. For
    example, if a Pokémon would normally take 200 damage from an attack, a Pokémon
    with a defense of 10 would take 20 damage. (Attack and defense thus balance
            out.)  
            
    F. Speed is used to determine which Pokémon gets to attack first in a round.
    If they are tied, flip a coin to see who attacks first.  
    
    G. Special works like both attack and defense, but only for attacks marked as
    "special" attacks.  
    
    H. Type1 and type2 hold the type(s) of the Pokémon, which is something like
    "Fire" or "Dragon". Some Pokémon have two types, some only have one. If it has
    only one type, type2 should be "". Note this is held in a separate file (types.txt)  
    

=====================================================================================

2) You must write a class for moves, which is to say all possible moves that a
Pokémon can do in the game. It must contain all of the following at a minimum:
index, name, type, category, PP, power and accuracy. Name, type, and category
are strings, the others are all integers. What they mean:

    A. Index is the index number that can be used by the user to select a move
(move 20 is bind, for example)

    B. Name is the name of the move (like "Hyper Beam")

    C. Type indicates what sort of damage it does, like Fire or Ice. Normal is the normal damage type.

    D. Category is either "Physical" which means it uses the normal attack and
    defense stats, or "Special" which means it uses the special stat instead.
    There are also "Status" attacks, which you can delete when you see them.

    E. PP is how many times a move can be used in combat before the Pokémon must
    switch to another move.

    F. Power is how much damage an attack does by default.  This is multiplied by
    the attacker's attack stat and divided by the defender's defense stat.

    G. Accuracy is the chance the attack will hit.

    Any weird lines (like with a - instead of a number) should discard the entire
    move.

=====================================================================================

3) You must load the data from the files into a vector of your classes to hold
all Pokémon and moves known to mankind (as of Generation I).

You will load by default from "pokemon.txt", "types.txt" and "moves.txt".
The user, at the beginning of the program, can specify other files to load
from.

When loading from a moves file, discard any lines that include an emdash: —
That's not a normal hyphen, so copy and paste it from this file into your
code, if you want to do something like this: if (c == '—')

Likewise, you can discard any lines that say "status" from the moves file.

=====================================================================================

4) After the vectors are loaded up, the user will be prompted if they want to
print out Pokémon data or move data

If the user types in 75, you'd print:
Pokedex Entry 75: Graveler hp: 55 attack: 95 defense: 115 speed: 35 special: 45 type1: Rock type2: Ground
If they typed 76:
Pokedex Entry 76: Golem hp: 80 attack: 110 defense: 130 speed: 45 special: 55 type1: Rock type2: Ground
If they typed 77:
Pokedex Entry 77: Ponyta hp: 50 attack: 85 defense: 55 speed: 90 special: 65 type1: Fire type2:
If they typed 78:
Pokedex Entry 78: Rapidash hp: 65 attack: 100 defense: 70 speed: 105 special: 80 type1: Fire type2:

If they chose to print a move instead, here's what it'd print if they typed
132:
Move Index 132: Constrict  type: Normal category: Physical PP: 35 power: 10 accuracy: 100%
If they typed 136:
Move Index 136: High Jump Kick  type: Fighting category: Physical PP: 10 power: 130 accuracy: 90%
If they typed 138:
Move Index 138: Dream Eater  type: Psychic category: Special PP: 15 power: 100 accuracy: 100%
If they typed 140:
Move Index 140: Barrage  type: Normal category: Physical PP: 20 power: 15 accuracy: 85%

If they type in a move that doesn't exist, it'll print:

=====================================================================================
