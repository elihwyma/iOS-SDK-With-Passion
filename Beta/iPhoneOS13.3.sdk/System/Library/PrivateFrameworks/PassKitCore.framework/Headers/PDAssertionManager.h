/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class BKSApplicationStateMonitor, NSHashTable, NSMutableDictionary, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface PDAssertionManager : NSObject

{
    NSHashTable *_observers;
    NSXPCListener *_coordinatorListener;
    NSMutableDictionary *_coordinators;
    NSObject<OS_dispatch_queue> *_managerSerialQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_applicationStateChanged:(id)arg1;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_removeAllAssertionCoordinators;
- (void)_removeAssertionCoordinator:(id)arg1;
- (id)_processNameWithPID:(int)arg1;
- (void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2;
- (id)assertionsOfType:(unsigned long long)arg1;
- (id)_coordinatorsBundleIdentifier;
- (_Bool)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2;

@end
