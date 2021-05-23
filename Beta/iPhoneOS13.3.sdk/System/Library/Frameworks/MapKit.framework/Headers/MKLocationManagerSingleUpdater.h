/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKLocationManager, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface MKLocationManagerSingleUpdater : NSObject

{
    CDUnknownBlockType _handler;
    _Bool _active;
    double _desiredAccuracy;
    double _timeout;
    MKLocationManagerSingleUpdater *_selfReference;
    MKLocationManager *_locationManager;
    NSTimer *_timeoutTimer;
    double _maxLocationAge;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (id)initWithLocationManager:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(CDUnknownBlockType)arg3 timeout:(double)arg4 maxLocationAge:(double)arg5;
- (void)handleTimeout:(id)arg1;

@end
