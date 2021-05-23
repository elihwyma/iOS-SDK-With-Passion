/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class CLInUseAssertion, CLLocationManager, HDAssertionManager, HKObserverSet, NSString;

@protocol HDLocationManagerUnitTestDelegate;

@interface HDLocationManager : NSObject <Swift>

{
    HDAssertionManager *_assertionManager;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    HKObserverSet *_observers;
    CDUnknownBlockType _locationManagerConfiguration;
    id <HDLocationManagerUnitTestDelegate> _unitTestDelegate;
}

@property (copy, nonatomic) CDUnknownBlockType locationManagerConfiguration;
@property (weak, nonatomic) id <HDLocationManagerUnitTestDelegate> unitTestDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)_mainQueue_takeLocationUpdatingAssertion;
- (void)_mainQueue_releaseLocationUpdatingAssertion;
- (void)_unitTest_didInvalidateAssertion:(id)arg1;
- (id)_mainQueue_newLocationManagerWithEffectiveBundle:(id)arg1;
- (id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)arg1;
- (void)_unitTest_setLocationManagerConfiguration:(CDUnknownBlockType)arg1;
- (id)_unitTest_locationManager;

@end
