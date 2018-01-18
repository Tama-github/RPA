DROP TABLE IF EXISTS Ability;
DROP TABLE IF EXISTS Characteristic;
DROP TABLE IF EXISTS CharacterC;
DROP TABLE IF EXISTS BodyPart;
DROP TABLE IF EXISTS Body;
DROP TABLE IF EXISTS ArmorPiec;

CREATE TABLE IF NOT EXISTS ArmorPiece (
    armorpiece_id INTEGER(3) AUTO_INCREMENT NOT NULL,
    armorpiece_name VARCHAR(50),
    armorpiece_defence_index INTEGER(3),
    armorpiece_currend_state INTEGER(3),
    armorpiece_modifier REAL(4,2),
    PRIMARY KEY (armorpiece_id)
);

CREATE TABLE IF NOT EXISTS Body (
        body_id INTEGER(3) AUTO_INCREMENT NOT NULL,
        PRIMARY KEY (body_id)
);

CREATE TABLE IF NOT EXISTS BodyPart (
    bodypart_id INTEGER(3) AUTO_INCREMENT NOT NULL,
    bodypart_state INTEGER(1),
    armorpiece_id INTEGER(3),
    body_id INTEGER(3),
    PRIMARY KEY (bodypart_id),
    FOREIGN KEY (armorpiece_id) REFERENCES ArmorPiece(armorpiece_id),
    FOREIGN KEY (body_id) REFERENCES Body(body_id)
);

CREATE TABLE IF NOT EXISTS CharacterC (
    characterc_id INTEGER(3) AUTO_INCREMENT NOT NULL,
    characterc_name VARCHAR(20),
    characterc_pain_resistance INTEGER(1),
    body_id INTEGER(3),
    PRIMARY KEY (characterc_id)
);

CREATE TABLE IF NOT EXISTS Characteristic (
    characteristic_id INTEGER(3) AUTO_INCREMENT NOT NULL,
    characteristic_type VARCHAR(1),
    characteristic_level INTEGER(2),
    characteristic_xp INTEGER(4),
    characterc_id INTEGER(3),
    PRIMARY KEY (characteristic_id),
    FOREIGN KEY (characterc_id) REFERENCES CharacterC(characterc_id)
);

CREATE TABLE IF NOT EXISTS Ability (
    ability_id INTEGER(3) AUTO_INCREMENT NOT NULL,
    ability_name VARCHAR(30),
    ability_level INTEGER(1),
    ability_xp INTEGER(4),
    ability_char_linked VARCHAR(1),
    ability_learning_modifier REAL(7,6),
    characterc_id INTEGER(3),
    PRIMARY KEY (ability_id),
    FOREIGN KEY (characterc_id) REFERENCES CharacterC(characterc_id)
);

