/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@class CLLocation;

@protocol CLLocationManagerDelegate;

@protocol MNTimeballLocationProvider <Swift>

@property (nonatomic) double desiredAccuracy;
@property (copy, nonatomic, readonly) CLLocation *location;
@property (weak, nonatomic) id <CLLocationManagerDelegate> delegate;

- (unsigned short)startUpdatingLocation;
- (unsigned short)stopUpdatingLocation;
- (unsigned short)initWithEffectiveBundleIdentifier:delegate:onQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithEffectiveBundle:delegate:onQueue: /* Error: Ran out of types for this method. */;

@end
