/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@protocol MKLocationProviderDelegate <Swift>

- (unsigned short)locationProvider:didUpdateLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProvider:didUpdateHeading: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProvider:didReceiveError: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProviderDidChangeAuthorizationStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProviderShouldPauseLocationUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProviderDidPauseLocationUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProviderDidResumeLocationUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProvider:didUpdateVehicleSpeed:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProvider:didUpdateVehicleHeading:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)locationProvider:didUpdateLocation:lastKnownNavCourse: /* Error: Ran out of types for this method. */;

@end
