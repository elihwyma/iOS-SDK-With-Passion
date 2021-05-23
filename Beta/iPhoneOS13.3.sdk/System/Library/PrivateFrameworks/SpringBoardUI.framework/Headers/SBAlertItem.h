/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage, _SBAlertController;

@interface SBAlertItem : NSObject

{
    _SBAlertController *_alertController;
    NSArray *_allowedBundleIDs;
    NSString *_iconImagePath;
    UIImage *_iconImage;
    _Bool _didEverActivate;
    _Bool _didEverDeactivate;
    _Bool _ignoreIfAlreadyDisplaying;
    _Bool _didPlayPresentationSound;
    _Bool _allowInSetup;
    _Bool _pendInSetupIfNotAllowed;
    _Bool _pendWhileKeyBagLocked;
    _Bool _allowInCar;
    _Bool _allowMessageInCar;
    _Bool _presented;
    _Bool _ignoresQuietMode;
    _Bool _suppressForKeynote;
    unsigned long long _presentationState;
    UIImage *_headerImage;
    UIImage *_attachmentImage;
}

@property (nonatomic, setter=_setPresentationState:) unsigned long long _presentationState;
@property (nonatomic, getter=_isPresented, setter=_setPresented:) _Bool presented;
@property (retain, nonatomic, setter=_setHeaderImage:) UIImage *_headerImage;
@property (retain, nonatomic, setter=_setAttachmentImage:) UIImage *_attachmentImage;
@property (nonatomic, setter=_setIgnoresQuietMode:) _Bool _ignoresQuietMode;
@property (retain, nonatomic, setter=setIconImage:) UIImage *iconImage;
@property (retain, nonatomic, getter=_iconImagePath) NSString *iconImagePath;
@property (nonatomic) _Bool ignoreIfAlreadyDisplaying;
@property (nonatomic) _Bool allowInSetup;
@property (nonatomic) _Bool pendInSetupIfNotAllowed;
@property (nonatomic) _Bool pendWhileKeyBagLocked;
@property (retain, nonatomic) NSArray *allowedBundleIDs;
@property (nonatomic) _Bool suppressForKeynote;
@property (nonatomic) _Bool allowInCar;
@property (nonatomic) _Bool allowMessageInCar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (id)init;
- (_Bool)dismissOnLock;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_alertController;
- (id)alertController;
- (void)dismiss;
- (void)deactivate;
- (id)sound;
- (void)willActivate;
- (void)dismiss:(int)arg1;
- (id)lockLabel;
- (id)shortLockLabel;
- (_Bool)undimsScreen;
- (_Bool)unlocksScreen;
- (_Bool)didPlayPresentationSound;
- (void)deactivateForReason:(int)arg1;
- (void)presentationStateDidChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_clearAlertController;
- (_Bool)hideOnClonedDisplay;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertItemDidAppear;
- (void)alertItemDidDisappear;
- (void)deactivateForButton;
- (void)performUnlockAction;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)allowLockScreenDismissal;
- (_Bool)shouldShowInLockScreen;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)wakeDisplay;
- (_Bool)reappearsAfterLock;
- (_Bool)reappearsAfterUnlock;
- (void)playPresentationSound;
- (void)didFailToActivate;
- (void)didActivate;
- (void)willRelockForButtonPress:(_Bool)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)didDeactivateForReason:(int)arg1;
- (_Bool)forcesModalAlertAppearance;
- (_Bool)behavesSuperModally;
- (_Bool)allowInLoginWindow;
- (int)alertPriority;
- (_Bool)dismissesOverlaysOnLockScreen;
- (void)doCleanupAfterDeactivationAnimation;
- (void)_deactivationCompleted;
- (id)_prepareNewAlertControllerWithLockedState:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_noteVolumeOrLockPressed;
- (_Bool)_hasActiveKeyboardOnScreen;
- (_Bool)_didEverActivate;
- (_Bool)_displayActionButtonOnLockScreen;
- (id)_publicDescription;
- (void)buttonDismissed;

@end
