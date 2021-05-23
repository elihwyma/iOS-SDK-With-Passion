/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMAltimeter : NSObject

{
    id _internal;
}

+ (void)initialize;
+ (long long)authorizationStatus;
+ (void)dummySelector:(id)arg1;
+ (_Bool)isRelativeAltitudeAvailable;
+ (_Bool)isSignificantElevationAvailable;

- (id)init;
- (void)dealloc;
- (id)initPrivate;
- (void)deallocPrivate;
- (void)onFilteredPressure:(const struct Sample *)arg1;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopRelativeAltitudeUpdates;
- (void)startSignificantElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopSignificantElevationUpdates;
- (void)querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;

@end
