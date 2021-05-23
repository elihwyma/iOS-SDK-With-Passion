/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSOperation.h>

@class AVWeakReference, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation

{
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToMonitoredObject;
    NSObject<OS_dispatch_queue> *_operationStateSerializationQueue;
    NSObject<OS_dispatch_semaphore> *_monitoringIsFinishedSemaphore;
    NSArray *_notificationNames;
    _Bool _registeredForObjectNotifications;
    _Bool _started;
    _Bool _finished;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (void)_registerForObjectNotifications;
- (void)_balanceMonitoringIsFinishedSemaphore;
- (void)_unregisterForObjectNotifications;
- (void)_signalMonitoringIsFinishedIfNeeded;
- (void)_waitUntilFinishedIfNeeded;
- (void)monitoredObjectHasDeparted;
- (id)initWithObject:(id)arg1 notificationNames:(id)arg2;
- (id)_monitoredObject;

@end
