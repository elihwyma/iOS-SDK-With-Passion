/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@class CLLocation;

@protocol ATXLocationManagerGPSDelegate;

@protocol ATXLocationManagerGPS

@property (weak, nonatomic) id <ATXLocationManagerGPSDelegate> delegate;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) _Bool locationEnabled;

- (unsigned short)updateLocationWithTimeout: /* Error: Ran out of types for this method. */;

@end
