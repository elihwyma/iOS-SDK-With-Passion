/*
 Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

#import <Foundation/NSObject.h>

@class CLAssertion, CLLocation, CLLocationManager, NSString, PCPersistentTimer;

@protocol OS_dispatch_queue, SOSPersistentTimerLocationManagerDelegate;

@interface SOSPersistentTimerLocationManager : NSObject

{
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationUpdateStartQueue;
    PCPersistentTimer *_locationUpdateTimer;
    PCPersistentTimer *_requestLocationsTimer;
    double _ti;
    PCPersistentTimer *_initalRequestTimer;
    _Bool _requestingLocation;
    id <SOSPersistentTimerLocationManagerDelegate> _delegate;
    CLAssertion *_forceEnableLocationAssertion;
    CLLocation *_lastLocation;
}

@property (nonatomic, getter=isRequestingLocation) _Bool requestingLocation;
@property (retain, nonatomic) CLAssertion *forceEnableLocationAssertion;
@property (retain, nonatomic) CLLocation *lastLocation;
@property (weak) id <SOSPersistentTimerLocationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isValid;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)requestLocation;
- (void)invalidateTimer;
- (void)_startTimer;
- (void)stopRequestingLocationUpdates;
- (void)warmUpLocationRequest;
- (void)fireAndStartTimertWithTimeInterval:(double)arg1;
- (void)invalidateInitialTimer;
- (void)invalidateRequestLocationsTimer;
- (_Bool)shouldStopRequestingLocationAfterCallback;
- (void)_requestLocationsTimeout:(id)arg1;
- (void)_sosPersistentTimerLocationManagerTic:(id)arg1;
- (void)_sosPersistentTimerInitialRequest:(id)arg1;

@end
