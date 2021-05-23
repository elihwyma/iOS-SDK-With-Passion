/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBProximitySensorControlling <Swift>

@property (nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
@property (nonatomic) _Bool pocketTouchesExpected;

- (unsigned short)resetProximityCalibration;
- (unsigned short)suspendProximityDetectionForSource:reason: /* Error: Ran out of types for this method. */;
- (unsigned short)suspendProximityDetectionAndMultitouchForSource:disableTapToWake:reason: /* Error: Ran out of types for this method. */;

@end
