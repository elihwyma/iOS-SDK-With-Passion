/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNGuidanceManager <Swift>

- (unsigned short)stop;
- (unsigned short)updateDestination: /* Error: Ran out of types for this method. */;
- (unsigned short)updateForReroute: /* Error: Ran out of types for this method. */;
- (unsigned short)timeSinceLastAnnouncement;
- (unsigned short)timeUntilNextAnnouncement;
- (unsigned short)updateGuidanceForLocation:navigatorState: /* Error: Ran out of types for this method. */;
- (unsigned short)repeatLastGuidanceAnnouncement: /* Error: Ran out of types for this method. */;
- (unsigned short)addInjectedEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)updateForReturnToRoute;

@end
