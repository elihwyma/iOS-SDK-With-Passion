/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class BSTimer, NSString, SUKeybagInterface;

@interface SUInstallationConstraintMonitorForBatteryDiskAndKeybag : SUInstallationConstraintMonitorBase

{
    SUKeybagInterface *_queue_keybag;
    BSTimer *_queue_timer;
    unsigned long long _queue_deltaSpaceNeeded;
    _Bool _queue_diskSatisfied;
    _Bool _queue_keybagSatisfied;
    _Bool _queue_passcodeSatisfied;
    _Bool _queue_batterySatisfied;
}

@property (nonatomic, readonly) unsigned long long deltaSpaceNeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (void)_queue_pollSatisfied;
- (void)keybagInterface:(id)arg1 hasPasscodeSetDidChange:(_Bool)arg2;
- (void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(_Bool)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 pollDuration:(double)arg3 keybag:(id)arg4;
- (_Bool)_queue_evaluateBattery;
- (_Bool)_queue_evaluateDisk;
- (_Bool)_queue_evaluateKeybag;
- (_Bool)_queue_evaluatePasscodeLocked;
- (void)refreshConstraints;

@end
