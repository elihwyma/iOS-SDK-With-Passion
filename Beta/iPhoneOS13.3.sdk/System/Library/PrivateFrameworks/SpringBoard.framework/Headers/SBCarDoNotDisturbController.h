/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CARAutomaticDNDStatus, NSString, SBLockScreenManager;

@protocol OS_dispatch_queue;

@interface SBCarDoNotDisturbController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_stateValid;
    _Bool _queue_exitConfirmationRequired;
    _Bool _queue_pendingExitConfirmationRequirement;
    _Bool _queue_screenOn;
    _Bool _queue_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
    CARAutomaticDNDStatus *_carAutomaticDNDStatus;
    SBLockScreenManager *_lockScreenManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isLocked) _Bool locked;
@property (nonatomic, readonly) _Bool showPasscode;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;

- (id)init;
- (void)dealloc;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)unlockFromSource:(int)arg1;
- (id)initWithCARAutomaticDNDStatus:(id)arg1 lockScreenManager:(id)arg2;
- (void)_queue_setExitConfirmationRequired:(_Bool)arg1;
- (_Bool)_isExitConfirmationRequired;
- (_Bool)_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
- (void)_setHasShownSiriHeaderViewControllerDuringCurrentCarDNDSession:(_Bool)arg1;
- (_Bool)_dismissAlertItemsAnimated:(_Bool)arg1;
- (void)_setScreenOn:(_Bool)arg1;
- (void)_queue_setScreenOn:(_Bool)arg1;

@end
