/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, NSLock, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface HDMaintenanceWorkCoordinator : NSObject

{
    NSOperationQueue *_maintenanceWorkQueue;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSLock *_lock;
}

@property (readonly) _Bool suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancelAllOperations;
- (void)enqueueMaintenanceOperation:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)arg1;

@end
