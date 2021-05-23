/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBFloatingDockBehaviorAssertion;

@protocol BSInvalidatable;

@interface SBSetupManager : NSObject

{
    unsigned long long _setupRequiredReason;
    _Bool _inSetupModeReadyToExit;
    _Bool _setupWantedForDeviceMigration;
    SBFloatingDockBehaviorAssertion *_inSetupFloatingDockBehaviorAssertion;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
}

@property (nonatomic, getter=isInSetupModeReadyToExit) _Bool inSetupModeReadyToExit;
@property (nonatomic, readonly, getter=isInSetupMode) _Bool inSetupMode;
@property (nonatomic, getter=isDeferringDeviceOrientationUpdates) _Bool deferringDeviceOrientationUpdates;
@property (nonatomic, readonly, getter=isInSetupModeForDeviceMigration) _Bool inSetupModeForDeviceMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)updateInSetupMode;
- (void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (_Bool)_isInSetupMode;
- (_Bool)_setSetupRequiredReason:(unsigned long long)arg1;
- (void)_clearFloatingDockAssertion;
- (void)_toggleSetupForMigrationNeeded:(_Bool)arg1 forReason:(id)arg2;
- (void)_setupProcessChangedNotificationReceived:(id)arg1;
- (_Bool)setupHasFinishedRestoringFromBackup;
- (void)postLaunchCompleteNotificationForSetup;

@end
