/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class CLLocation;

@protocol WiFiLocationProvider <Swift>

@property (nonatomic, readonly) _Bool isAuthorized;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (copy, nonatomic) CDUnknownBlockType locationChangedCallback;

- (unsigned short)requestHighAccuracyLocation: /* Error: Ran out of types for this method. */;

@end
