/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RELocationManager.h>

@class CLLocation, CLLocationManager, NSLock, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface _RECoreLocationLocationManager : RELocationManager

{
    CLLocation *_currentLocation;
    NSLock *_locationAccessLock;
    CDUnknownBlockType _handler;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _resumedQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (id)currentLocation;
- (void)_updateLocation:(id)arg1;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_notifyUpdateHandlersWithError:(id)arg1;

@end
