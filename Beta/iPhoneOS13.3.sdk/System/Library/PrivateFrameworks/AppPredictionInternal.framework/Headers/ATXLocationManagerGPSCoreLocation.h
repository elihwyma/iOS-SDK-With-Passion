/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLLocationManager, NSCondition, NSString;

@protocol ATXLocationManagerGPSDelegate, OS_dispatch_queue;

@interface ATXLocationManagerGPSCoreLocation : NSObject

{
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_clQueue;
    NSCondition *_updateCondition;
    _Bool _locationEnabled;
    _Bool _updatePending;
    id <ATXLocationManagerGPSDelegate> delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <ATXLocationManagerGPSDelegate> delegate;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) _Bool locationEnabled;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)updateLocationWithTimeout:(double)arg1;

@end
