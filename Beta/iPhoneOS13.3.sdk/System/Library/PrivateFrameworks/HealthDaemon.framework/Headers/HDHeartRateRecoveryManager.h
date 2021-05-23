/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, HDPowerAssertion, NSString;

@protocol OS_dispatch_queue;

@interface HDHeartRateRecoveryManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    HDPowerAssertion *_powerAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;

@end
