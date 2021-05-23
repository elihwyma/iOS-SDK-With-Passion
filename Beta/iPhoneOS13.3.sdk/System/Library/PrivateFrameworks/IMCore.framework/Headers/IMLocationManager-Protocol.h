/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/Swift-Protocol.h>

@class CLLocation, NSError;

@protocol IMLocationManager <Swift>

@property (nonatomic, readonly) _Bool locationAuthorizationDetermined;
@property (nonatomic, readonly) _Bool locationAuthorizationDenied;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSError *error;

- (unsigned short)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:updateHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startUpdatingCurrentLocationWithHandler: /* Error: Ran out of types for this method. */;

@end
