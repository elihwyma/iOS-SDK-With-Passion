/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class CLInUseAssertion, CLLocation, CLLocationManager, GEOLocationShifter, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface MNTimeballLocationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationProvider;
    GEOLocationShifter *_locationShifter;
    NSMutableArray *_requests;
}

@property (nonatomic, readonly) CLLocation *lastLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setLocationProviderClass:(Class)arg1;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (id)locationProvider;
- (void)_processPendingRequests;
- (void)_addRequest:(id)arg1;
- (void)getLocationWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setupLocationProvider;
- (void)_requestTimedOut:(id)arg1;
- (void)_removeRequest:(id)arg1;
- (void)_processLocation:(id)arg1;
- (void)_processError:(id)arg1;

@end
