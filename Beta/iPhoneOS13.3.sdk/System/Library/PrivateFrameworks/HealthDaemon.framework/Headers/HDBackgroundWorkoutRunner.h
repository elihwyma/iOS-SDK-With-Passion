/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, HDDaemon, NSString;

@protocol OS_dispatch_queue;

@interface HDBackgroundWorkoutRunner : NSObject

{
    HDDaemon *_daemon;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)initWithDaemon:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (_Bool)_queue_hasBackgroundPermissionForBundleIdentifier:(id)arg1 errorOut:(id *)arg2;
- (id)_queue_acquireBKSAssertionForClient:(id)arg1;
- (id)_queue_acquireCLInUseAssertionForClient:(id)arg1;
- (void)_queue_releaseCLInUseAssertion:(id)arg1 forClient:(id)arg2;
- (void)_queue_releaseBKSAssertion:(id)arg1 forClient:(id)arg2;
- (id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)arg1 client:(id)arg2 includeCoreLocationAssertion:(_Bool)arg3;
- (_Bool)hasBackgroundPermissionForBundleIdentifier:(id)arg1 errorOut:(id *)arg2;

@end
