#ifndef GUARD_CONSTANTS_SECRET_BASES_H
#define GUARD_CONSTANTS_SECRET_BASES_H

#define SECRET_BASE_RED_CAVE 1
#define SECRET_BASE_BROWN_CAVE 2
#define SECRET_BASE_BLUE_CAVE 3
#define SECRET_BASE_YELLOW_CAVE 4
#define SECRET_BASE_TREE 5
#define SECRET_BASE_SHRUB 6
#define SUPER_SECRET_BASE_TREE 7
#define SUPER_SECRET_BASE_RED_CAVE 8
#define SUPER_SECRET_BASE_BLUE_CAVE 9
#define SUPER_SECRET_BASE_BROWN_CAVE 10
#define SUPER_SECRET_BASE_YELLOW_CAVE 11
#define SUPER_SECRET_BASE_SHRUB 12

// Each secret base location is assigned an identifier value.
// The secret base's map is determined by (id / 10). The ones
// digit is used to differentiate secret bases using the same map.
// Therefore, each secret base map can be used by up to 10 different
// secret bases in the game.

// * 4 is for each byte of data per secret base group in sSecretBaseEntrancePositions
// They are the map number, the entrance warp id, and the x/y position in front of the computer
#define SECRET_BASE_GROUP(idx) ((idx) * 4)
#define SECRET_BASE_ID_TO_GROUP(baseId) SECRET_BASE_GROUP((baseId) / 4)

#define SECRET_BASE_RED_CAVE1_1     1
#define SECRET_BASE_RED_CAVE1_2     2
#define SECRET_BASE_RED_CAVE1_3     3

#define SECRET_BASE_RED_CAVE1 SECRET_BASE_GROUP(0)

#define SECRET_BASE_RED_CAVE2_1     5
#define SECRET_BASE_RED_CAVE2_2     6
#define SECRET_BASE_RED_CAVE2_3     7

#define SECRET_BASE_RED_CAVE2 SECRET_BASE_GROUP(1)

#define SECRET_BASE_RED_CAVE3_1     9
#define SECRET_BASE_RED_CAVE3_2     10
#define SECRET_BASE_RED_CAVE3_3     11

#define SECRET_BASE_RED_CAVE3 SECRET_BASE_GROUP(2)

#define SECRET_BASE_RED_CAVE4_1     13
#define SECRET_BASE_RED_CAVE4_2     14
#define SECRET_BASE_RED_CAVE4_3     15

#define SECRET_BASE_RED_CAVE4 SECRET_BASE_GROUP(3)

#define SECRET_BASE_BROWN_CAVE1_1   17
#define SECRET_BASE_BROWN_CAVE1_2   18
#define SECRET_BASE_BROWN_CAVE1_3   19

#define SECRET_BASE_BROWN_CAVE1 SECRET_BASE_GROUP(4)

#define SECRET_BASE_BROWN_CAVE2_1   21
#define SECRET_BASE_BROWN_CAVE2_2   22
#define SECRET_BASE_BROWN_CAVE2_3   23

#define SECRET_BASE_BROWN_CAVE2 SECRET_BASE_GROUP(5)

#define SECRET_BASE_BROWN_CAVE3_1   25
#define SECRET_BASE_BROWN_CAVE3_2   26
#define SECRET_BASE_BROWN_CAVE3_3   27

#define SECRET_BASE_BROWN_CAVE3 SECRET_BASE_GROUP(6)

#define SECRET_BASE_BROWN_CAVE4_1   29
#define SECRET_BASE_BROWN_CAVE4_2   30
#define SECRET_BASE_BROWN_CAVE4_3   31

#define SECRET_BASE_BROWN_CAVE4 SECRET_BASE_GROUP(7)

#define SECRET_BASE_BLUE_CAVE1_1    33
#define SECRET_BASE_BLUE_CAVE1_2    34
#define SECRET_BASE_BLUE_CAVE1_3    35

#define SECRET_BASE_BLUE_CAVE1 SECRET_BASE_GROUP(8)

#define SECRET_BASE_BLUE_CAVE2_1    36
#define SECRET_BASE_BLUE_CAVE2_2    37
#define SECRET_BASE_BLUE_CAVE2_3    38

#define SECRET_BASE_BLUE_CAVE2 SECRET_BASE_GROUP(9)

#define SECRET_BASE_BLUE_CAVE3_1    41
#define SECRET_BASE_BLUE_CAVE3_2    42
#define SECRET_BASE_BLUE_CAVE3_3    43

#define SECRET_BASE_BLUE_CAVE3 SECRET_BASE_GROUP(10)

#define SECRET_BASE_BLUE_CAVE4_1    45
#define SECRET_BASE_BLUE_CAVE4_2    46
#define SECRET_BASE_BLUE_CAVE4_3    47

#define SECRET_BASE_BLUE_CAVE4 SECRET_BASE_GROUP(11)

#define SECRET_BASE_YELLOW_CAVE1_1  49
#define SECRET_BASE_YELLOW_CAVE1_2  50
#define SECRET_BASE_YELLOW_CAVE1_3  51

#define SECRET_BASE_YELLOW_CAVE1 SECRET_BASE_GROUP(12)

#define SECRET_BASE_YELLOW_CAVE2_1  53
#define SECRET_BASE_YELLOW_CAVE2_2  54
#define SECRET_BASE_YELLOW_CAVE2_3  55

#define SECRET_BASE_YELLOW_CAVE2 SECRET_BASE_GROUP(13)

#define SECRET_BASE_YELLOW_CAVE3_1  57
#define SECRET_BASE_YELLOW_CAVE3_2  58
#define SECRET_BASE_YELLOW_CAVE3_3  59

#define SECRET_BASE_YELLOW_CAVE3 SECRET_BASE_GROUP(14)

#define SECRET_BASE_YELLOW_CAVE4_1  61
#define SECRET_BASE_YELLOW_CAVE4_2  62
#define SECRET_BASE_YELLOW_CAVE4_3  63

#define SECRET_BASE_YELLOW_CAVE4 SECRET_BASE_GROUP(15)

#define SECRET_BASE_TREE1_1         65
#define SECRET_BASE_TREE1_2         66
#define SECRET_BASE_TREE1_3         67
#define SECRET_BASE_TREE1_4         68

#define SECRET_BASE_TREE1 SECRET_BASE_GROUP(16)

#define SECRET_BASE_TREE2_1         69
#define SECRET_BASE_TREE2_2         70
#define SECRET_BASE_TREE2_3         71
#define SECRET_BASE_TREE2_4         72

#define SECRET_BASE_TREE2 SECRET_BASE_GROUP(17)

#define SECRET_BASE_TREE3_1         73
#define SECRET_BASE_TREE3_2         74
#define SECRET_BASE_TREE3_3         75

#define SECRET_BASE_TREE3 SECRET_BASE_GROUP(18)

#define SECRET_BASE_TREE4_1         77
#define SECRET_BASE_TREE4_2         78
#define SECRET_BASE_TREE4_3         79

#define SECRET_BASE_TREE4 SECRET_BASE_GROUP(19)

#define SECRET_BASE_SHRUB1_1        81
#define SECRET_BASE_SHRUB1_2        82
#define SECRET_BASE_SHRUB1_3        83
#define SECRET_BASE_SHRUB1_4        84

#define SECRET_BASE_SHRUB1 SECRET_BASE_GROUP(20)

#define SECRET_BASE_SHRUB2_1        85
#define SECRET_BASE_SHRUB2_2        86
#define SECRET_BASE_SHRUB2_3        87

#define SECRET_BASE_SHRUB2 SECRET_BASE_GROUP(21)

#define SECRET_BASE_SHRUB3_1        89
#define SECRET_BASE_SHRUB3_2        90
#define SECRET_BASE_SHRUB3_3        91

#define SECRET_BASE_SHRUB3 SECRET_BASE_GROUP(22)

#define SECRET_BASE_SHRUB4_1        93
#define SECRET_BASE_SHRUB4_2        94
#define SECRET_BASE_SHRUB4_3        95

#define SECRET_BASE_SHRUB4 SECRET_BASE_GROUP(23)

#define SUPER_SECRET_BASE_TREE1_1	97
#define SUPER_SECRET_BASE_TREE1_2	98

#define SUPER_SECRET_BASE_TREE1 SECRET_BASE_GROUP(24)

#define SUPER_SECRET_BASE_TREE2_1	101

#define SUPER_SECRET_BASE_TREE2 SECRET_BASE_GROUP(25)

#define SUPER_SECRET_BASE_TREE3_1	105

#define SUPER_SECRET_BASE_TREE3 SECRET_BASE_GROUP(26)

#define SUPER_SECRET_BASE_TREE4_1	109

#define SUPER_SECRET_BASE_TREE4 SECRET_BASE_GROUP(27)

#define SUPER_SECRET_BASE_TREE5_1	113

#define SUPER_SECRET_BASE_TREE5 SECRET_BASE_GROUP(28)

#define SUPER_SECRET_BASE_RED_CAVE1_1	117

#define SUPER_SECRET_BASE_RED_CAVE1 SECRET_BASE_GROUP(29)

#define SUPER_SECRET_BASE_RED_CAVE2_1	121

#define SUPER_SECRET_BASE_RED_CAVE2 SECRET_BASE_GROUP(30)

#define SUPER_SECRET_BASE_RED_CAVE3_1	125

#define SUPER_SECRET_BASE_RED_CAVE3 SECRET_BASE_GROUP(31)

#define SUPER_SECRET_BASE_RED_CAVE4_1	129

#define SUPER_SECRET_BASE_RED_CAVE4 SECRET_BASE_GROUP(32)

#define SUPER_SECRET_BASE_RED_CAVE5_1	133

#define SUPER_SECRET_BASE_RED_CAVE5 SECRET_BASE_GROUP(33)

#define SUPER_SECRET_BASE_BLUE_CAVE1_1	137

#define SUPER_SECRET_BASE_BLUE_CAVE1 SECRET_BASE_GROUP(34)

#define SUPER_SECRET_BASE_BLUE_CAVE2_1	141

#define SUPER_SECRET_BASE_BLUE_CAVE2 SECRET_BASE_GROUP(35)

#define SUPER_SECRET_BASE_BLUE_CAVE3_1	145

#define SUPER_SECRET_BASE_BLUE_CAVE3 SECRET_BASE_GROUP(36)

#define SUPER_SECRET_BASE_BLUE_CAVE4_1	149

#define SUPER_SECRET_BASE_BLUE_CAVE4 SECRET_BASE_GROUP(37)

#define SUPER_SECRET_BASE_BLUE_CAVE5_1	153

#define SUPER_SECRET_BASE_BLUE_CAVE5 SECRET_BASE_GROUP(38)

#define SUPER_SECRET_BASE_BROWN_CAVE1_1	157

#define SUPER_SECRET_BASE_BROWN_CAVE1 SECRET_BASE_GROUP(39)

#define SUPER_SECRET_BASE_BROWN_CAVE2_1	161

#define SUPER_SECRET_BASE_BROWN_CAVE2 SECRET_BASE_GROUP(40)

#define SUPER_SECRET_BASE_BROWN_CAVE3_1	165

#define SUPER_SECRET_BASE_BROWN_CAVE3 SECRET_BASE_GROUP(41)

#define SUPER_SECRET_BASE_BROWN_CAVE4_1	169

#define SUPER_SECRET_BASE_BROWN_CAVE4 SECRET_BASE_GROUP(42)

#define SUPER_SECRET_BASE_BROWN_CAVE5_1	173

#define SUPER_SECRET_BASE_BROWN_CAVE5 SECRET_BASE_GROUP(43)

#define SUPER_SECRET_BASE_YELLOW_CAVE1_1	177

#define SUPER_SECRET_BASE_YELLOW_CAVE1 SECRET_BASE_GROUP(44)

#define SUPER_SECRET_BASE_YELLOW_CAVE2_1	181

#define SUPER_SECRET_BASE_YELLOW_CAVE2 SECRET_BASE_GROUP(45)

#define SUPER_SECRET_BASE_YELLOW_CAVE3_1	185

#define SUPER_SECRET_BASE_YELLOW_CAVE3 SECRET_BASE_GROUP(46)

#define SUPER_SECRET_BASE_YELLOW_CAVE4_1	189

#define SUPER_SECRET_BASE_YELLOW_CAVE4 SECRET_BASE_GROUP(47)

#define SUPER_SECRET_BASE_YELLOW_CAVE5_1	193

#define SUPER_SECRET_BASE_YELLOW_CAVE5 SECRET_BASE_GROUP(48)

#define SUPER_SECRET_BASE_SHRUB1_1	197

#define SUPER_SECRET_BASE_SHRUB1 SECRET_BASE_GROUP(49)

#define SUPER_SECRET_BASE_SHRUB2_1	201

#define SUPER_SECRET_BASE_SHRUB2 SECRET_BASE_GROUP(50)

#define SUPER_SECRET_BASE_SHRUB3_1	205

#define SUPER_SECRET_BASE_SHRUB3 SECRET_BASE_GROUP(51)

#define SUPER_SECRET_BASE_SHRUB4_1	209

#define SUPER_SECRET_BASE_SHRUB4 SECRET_BASE_GROUP(52)

#define SUPER_SECRET_BASE_SHRUB5_1	213

#define SUPER_SECRET_BASE_SHRUB5 SECRET_BASE_GROUP(53)

#define SUPER_SECRET_UNUSED1_1	217

#define SECRET_BASE_UNUSED1 SECRET_BASE_GROUP(54)

#define SUPER_SECRET_UNUSED2_1	221

#define SECRET_BASE_UNUSED2 SECRET_BASE_GROUP(55)

#define SUPER_SECRET_UNUSED3_1	225

#define SECRET_BASE_UNUSED3 SECRET_BASE_GROUP(56)

#define SUPER_SECRET_UNUSED4_1	229

#define SECRET_BASE_UNUSED4 SECRET_BASE_GROUP(57)

#define SUPER_SECRET_UNUSED5_1	233

#define SECRET_BASE_UNUSED5 SECRET_BASE_GROUP(58)

#define SUPER_SECRET_UNUSED6_1	237

#define SECRET_BASE_UNUSED6 SECRET_BASE_GROUP(59)

#define SUPER_SECRET_UNUSED7_1	241

#define SECRET_BASE_UNUSED7 SECRET_BASE_GROUP(60)

#define SUPER_SECRET_UNUSED8_1	245

#define SECRET_BASE_UNUSED8 SECRET_BASE_GROUP(61)

#define SUPER_SECRET_UNUSED9_1	249

#define SECRET_BASE_UNUSED9 SECRET_BASE_GROUP(62)

#define NUM_SECRET_BASE_GROUPS 63

#endif  // GUARD_CONSTANTS_SECRET_BASES_H
