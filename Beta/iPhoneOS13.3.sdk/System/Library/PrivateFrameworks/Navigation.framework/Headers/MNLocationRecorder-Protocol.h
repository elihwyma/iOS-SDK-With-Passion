/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNLocationRecorder <Swift>

- (unsigned short)recordInitialCourse: /* Error: Ran out of types for this method. */;
- (unsigned short)recordLocation:correctedLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)recordError: /* Error: Ran out of types for this method. */;
- (unsigned short)recordCompassHeading:magneticHeading:accuracy:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)recordLocationUpdatePause;
- (unsigned short)recordLocationUpdateResume;
- (unsigned short)recordVehicleSpeed:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)recordVehicleHeading:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)recordLocation:rawLocation: /* Error: Ran out of types for this method. */;

@end
