/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertion, HDAssertionManager, HDDaemon, NSString;

@protocol OS_dispatch_queue;

@interface HDPowerSavingModeManager : NSObject

{
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    _Bool _powerSavingModeEnabled;
    _Bool _supportsCellularTelephony;
    HDAssertion *_disableAOTAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)initWithDaemon:(id)arg1;
- (_Bool)supportsPowerSavingForActivityType:(unsigned long long)arg1;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2;
- (void)_startObservingPowerSavingModeSetting;
- (void)_stopObservingPowerSavingModeSetting;
- (void)_queue_enablePowerSavingIfNeededForOwnerIdentifier:(id)arg1;
- (void)_queue_disablePowerSavingIfNeeded;
- (void)_queue_powerSavingModeDidChange;
- (void)_powerSavingModeDidChange;

@end
