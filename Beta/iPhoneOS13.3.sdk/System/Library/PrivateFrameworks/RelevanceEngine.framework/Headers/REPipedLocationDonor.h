/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class CLLocation, NSLock, NSObject, NSString, NSXPCConnection, REObserverStore;

@protocol OS_dispatch_queue;

@interface REPipedLocationDonor : RESingleton

{
    REObserverStore *_observers;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_location;
    NSLock *_locationAccessLock;
}

@property (nonatomic, readonly) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_locationFromDefaults;
+ (void)_saveLocationIntoDefaultsWithLocation:(id)arg1;

- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)_handleInvalidation;
- (void)updateLocation:(id)arg1;

@end
