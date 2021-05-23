/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class CLLocationManager, NSBundle, NSMutableSet, NSObject, NSString, __HMFLocationAuthorizationRequest;

@protocol HMFLocking, OS_dispatch_queue;

@interface HMFLocationAuthorization

{
    id <HMFLocking> _lock;
    int _status;
    long long _state;
    NSMutableSet *_observers;
    __HMFLocationAuthorizationRequest *_request;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleIdentifier;
    NSBundle *_bundle;
    CLLocationManager *_internal;
}

@property (copy, readonly) NSString *bundleIdentifier;
@property (readonly) NSBundle *bundle;
@property (readonly) CLLocationManager *internal;
@property (readonly) int status;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, getter=isAuthorized) _Bool authorized;
@property (readonly, getter=isMonitoring) _Bool monitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
+ (id)sharedAuthorization;

- (id)init;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)logIdentifier;
- (void)mark;
- (id)attributeDescriptions;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)requestAuthorization:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
