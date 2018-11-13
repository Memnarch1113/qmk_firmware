#ifndef KEYBOARDS_CHIBIOS_TEST_CHIBIOS_TEST_H_
#define KEYBOARDS_CHIBIOS_TEST_CHIBIOS_TEST_H_

#include "quantum.h"

#define LAYOUT( \
	  k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, k015, k016, k017, k018, \
  	k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k115, k116, k117,       \
	  k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k214, k215, k216, k217,       \
	  k300, k301, k302, k303,             k306,             k309, k310, k311, k312, k313, k314, k315, k316, k317        \
) \
{ \
	{ k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, k015, k016, k017, k018  }, \
	{ k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k115, k116, k117, KC_NO }, \
	{ k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k214, k215, k216, k217, KC_NO }, \
	{ k300, k301, k302, k303, KC_NO,KC_NO,k306, KC_NO,KC_NO,k309, k310, k311, k312, k313, k314, k315, k316, k317, KC_NO }  \
}

#endif /* KEYBOARDS_CHIBIOS_TEST_CHIBIOS_TEST_H_ */
