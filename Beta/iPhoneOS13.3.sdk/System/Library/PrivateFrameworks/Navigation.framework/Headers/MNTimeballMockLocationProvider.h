/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLLocationManager, NSLock, NSMutableArray, NSString;

@protocol CLLocationManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MNTimeballMockLocationProvider : NSObject

{
    _Bool _deliveringUpdates;
    NSLock *_objectLock;
    NSMutableArray *_queuedObjects;
    NSMutableArray *_delayIntervals;
    CLLocationManager *_lm;
    CLLocation *_location;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id <CLLocationManagerDelegate> delegate;
    double desiredAccuracy;
    CLLocation *location;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double desiredAccuracy;
@property (copy, nonatomic, readonly) CLLocation *location;
@property (weak, nonatomic) id <CLLocationManagerDelegate> delegate;

- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)_setupTimer;
- (void)_processNextObject;
- (void)_deliverNextObject;
- (void)deliverLocation:(id)arg1 afterDelay:(double)arg2;
- (void)deliverError:(id)arg1 afterDelay:(double)arg2;
- (void)clearLocationsAndErrors;

@end
