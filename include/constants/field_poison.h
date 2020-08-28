#ifndef GUARD_CONSTANTS_FIELD_POISON_H
#define GUARD_CONSTANTS_FIELD_POISON_H

#define FLDPSN_NONE  0
#define FLDPSN_PSN   1
#define FLDPSN_FNT   2

#define FLDPSN_NO_WHITEOUT        0
#define FLDPSN_WHITEOUT           1
#define FLDPSN_FRONTIER_WHITEOUT  2

#define MIN_PSN_DAMAGE 5
#define MAX_PSN_DAMAGE 20
// If set to a "falsy" value (FALSE or 0), MIN and MAX will be applied as absolute damage
// If set to a "truthy" value (anything else), MIN and MAX will be applied as percentage
#define PSN_DEALS_PERCNT TRUE
// If set to 0, your pokemon will faint from poison outside battle
// If set to any positive number, your pokemon will survive poison with that ammount of HP
#define PSN_REMAINING_HP 0

#endif //GUARD_CONSTANTS_FIELD_POISON_H
