/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class AVOutputDeviceDiscoverySession, NSDate, NSHashTable, NSString;

@protocol OS_dispatch_queue, PUAirPlayRouteObserverRegistryDelegate;

__attribute__((visibility("hidden")))
@interface PUAirPlayRouteObserverRegistry : NSObject

{
    _Bool __discoveryAllowed;
    AVOutputDeviceDiscoverySession *__discoverySession;
    id <PUAirPlayRouteObserverRegistryDelegate> _delegate;
    unsigned long long _routeAvailability;
    NSHashTable *__routeObservers;
    NSObject<OS_dispatch_queue> *__discoverySessionIsolationQueue;
    unsigned long long _lastKnownRouteAvailability;
    NSDate *_lastKnownRouteAvailabilityDate;
}

@property (retain, nonatomic, setter=_setRouteObservers:) NSHashTable *_routeObservers;
@property (retain, nonatomic, setter=_setDiscoverySession:) AVOutputDeviceDiscoverySession *_discoverySession;
@property (retain, nonatomic, setter=_setDiscoverySessionIsolationQueue:) NSObject<OS_dispatch_queue> *_discoverySessionIsolationQueue;
@property (nonatomic, setter=_setRouteAvailability:) unsigned long long routeAvailability;
@property (nonatomic, getter=_isDiscoveryAllowed, setter=_setDiscoveryAllowed:) _Bool _discoveryAllowed;
@property (nonatomic) unsigned long long lastKnownRouteAvailability;
@property (retain, nonatomic) NSDate *lastKnownRouteAvailabilityDate;
@property (weak, nonatomic) id <PUAirPlayRouteObserverRegistryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)addRouteObserver:(id)arg1;
- (void)removeRouteObserver:(id)arg1;
- (void)_updateObserver:(id)arg1;
- (void)_updateAllObservers;
- (void)_updateDiscoverySession;
- (void)_discoverySessionIsolationQueue_updateRouteAvailability;
- (void)_availableOutputDevicesDidChange:(id)arg1;
- (void)_appEnteredBackground:(id)arg1;
- (void)_appEnteringForeground:(id)arg1;

@end
