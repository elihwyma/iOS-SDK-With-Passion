/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class CLLocationManager, NAFuture, NSHashTable, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface HFLocationManagerDispatcher : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasInitializedAuthorizationStatus;
    int _cachedAuthorizationStatus;
    CLLocationManager *_locationManager;
    NSHashTable *_locationObservers;
    NSMutableArray *_pendingAuthorizationStatusFutures;
}

@property (nonatomic, readonly) CLLocationManager *locationManager;
@property (retain, nonatomic) NSHashTable *locationObservers;
@property (nonatomic, readonly) NSMutableArray *pendingAuthorizationStatusFutures;
@property (nonatomic) int cachedAuthorizationStatus;
@property (nonatomic) _Bool hasInitializedAuthorizationStatus;
@property (nonatomic, readonly) int authorizationStatus;
@property (nonatomic, readonly) NAFuture *authorizationStatusFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDispatcher;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
- (void)_updateCachedAuthorizationStatus:(int)arg1;
- (void)dispatchLocationManagerObserverMessage:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2 sender:(id)arg3;
- (void)_updateMacAuthorizationStatus:(int)arg1;
- (void)_authorizeHomeKitLocationServices;

@end
