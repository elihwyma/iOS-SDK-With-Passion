/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, HDDaemon, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface HDAlertSuppressor : NSObject

{
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    NSMutableSet *_waitingForSuspension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)processTerminated:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)initWithDaemon:(id)arg1;
- (void)processSuspended:(id)arg1;
- (void)processResumed:(id)arg1;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2;
- (void)_queue_clearSuppressionTimerForAssertion:(id)arg1;
- (void)_queue_suppressActivityAlertsForProcessIdentifier:(id)arg1;
- (id)_queue_startAlertSuppressionTimerForProcessIdentifier:(id)arg1;
- (void)_queue_invalidateSuppressActivityAlertsForProcessIdentifier:(id)arg1;
- (void)_invalidateSuppressActivityAlertsForSuspendedProcess:(id)arg1;

@end
